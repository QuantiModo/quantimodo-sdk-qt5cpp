
#include "SWGInline_response_200_31.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_31::SWGInline_response_200_31(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_31::SWGInline_response_200_31() {
    init();
}

SWGInline_response_200_31::~SWGInline_response_200_31() {
    this->cleanup();
}

void
SWGInline_response_200_31::init() {
    data = new QList<SWGVariableCategory*>();
    success = false;
    
}

void
SWGInline_response_200_31::cleanup() {
    if(data != NULL) {
        QList<SWGVariableCategory*>* arr = data;
        foreach(SWGVariableCategory* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_31*
SWGInline_response_200_31::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_31::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGVariableCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_31::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_31::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGVariableCategory*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGVariableCategory");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGVariableCategory*>*
SWGInline_response_200_31::getData() {
    return data;
}
void
SWGInline_response_200_31::setData(QList<SWGVariableCategory*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_31::getSuccess() {
    return success;
}
void
SWGInline_response_200_31::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

