#include "SWGUnitsApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGUnitsApi::SWGUnitsApi() {}

SWGUnitsApi::~SWGUnitsApi() {}

SWGUnitsApi::SWGUnitsApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGUnitsApi::unitCategoriesGet() {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/unitCategories");

    

    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitsApi::unitCategoriesGetCallback);

    worker->execute(&input);
}

void
SWGUnitsApi::unitCategoriesGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit unitCategoriesGetSignal();
}
void
SWGUnitsApi::unitsGet(QString* unitName, QString* abbreviatedUnitName, QString* categoryName) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/units");

    

    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("unitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(unitName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("abbreviatedUnitName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(abbreviatedUnitName)));
    

    
    
    
    if(fullPath.indexOf("?") > 0) 
      fullPath.append("&");
    else 
      fullPath.append("?");
    fullPath.append(QUrl::toPercentEncoding("categoryName"))
        .append("=")
        .append(QUrl::toPercentEncoding(stringValue(categoryName)));
    

    
    

    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    

    

    

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGUnitsApi::unitsGetCallback);

    worker->execute(&input);
}

void
SWGUnitsApi::unitsGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    

    worker->deleteLater();

    
    emit unitsGetSignal();
}
} /* namespace Swagger */
