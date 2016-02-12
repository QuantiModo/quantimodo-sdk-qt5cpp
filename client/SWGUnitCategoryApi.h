#ifndef _SWG_SWGUnitCategoryApi_H_
#define _SWG_SWGUnitCategoryApi_H_

#include "SWGHttpRequest.h"

#include "SWGInline_response_200_24.h"
#include <QString>
#include "SWGInline_response_200_25.h"
#include "SWGUnitCategory.h"
#include "SWGInline_response_200_2.h"

#include <QObject>

namespace Swagger {

class SWGUnitCategoryApi: public QObject {
    Q_OBJECT

public:
    SWGUnitCategoryApi();
    SWGUnitCategoryApi(QString host, QString basePath);
    ~SWGUnitCategoryApi();

    QString host;
    QString basePath;

    void unitCategoriesGet(QString* accessToken, QString* name, QString* createdAt, QString* updatedAt, qint32 limit, qint32 offset, QString* sort);
    void unitCategoriesPost(QString* accessToken, SWGUnitCategory body);
    void unitCategoriesIdGet(qint32 id, QString* accessToken);
    void unitCategoriesIdPut(qint32 id, QString* accessToken, SWGUnitCategory body);
    void unitCategoriesIdDelete(qint32 id, QString* accessToken);
    
private:
    void unitCategoriesGetCallback (HttpRequestWorker * worker);
    void unitCategoriesPostCallback (HttpRequestWorker * worker);
    void unitCategoriesIdGetCallback (HttpRequestWorker * worker);
    void unitCategoriesIdPutCallback (HttpRequestWorker * worker);
    void unitCategoriesIdDeleteCallback (HttpRequestWorker * worker);
    
signals:
    void unitCategoriesGetSignal(SWGInline_response_200_24* summary);
    void unitCategoriesPostSignal(SWGInline_response_200_25* summary);
    void unitCategoriesIdGetSignal(SWGInline_response_200_25* summary);
    void unitCategoriesIdPutSignal(SWGInline_response_200_2* summary);
    void unitCategoriesIdDeleteSignal(SWGInline_response_200_2* summary);
    
};
}
#endif