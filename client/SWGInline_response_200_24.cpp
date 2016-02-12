
#include "SWGInline_response_200_24.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGInline_response_200_24::SWGInline_response_200_24(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInline_response_200_24::SWGInline_response_200_24() {
    init();
}

SWGInline_response_200_24::~SWGInline_response_200_24() {
    this->cleanup();
}

void
SWGInline_response_200_24::init() {
    data = new QList<SWGUnitCategory*>();
    success = false;
    
}

void
SWGInline_response_200_24::cleanup() {
    if(data != NULL) {
        QList<SWGUnitCategory*>* arr = data;
        foreach(SWGUnitCategory* o, *arr) {
            delete o;
        }
        delete data;
    }
    
    
}

SWGInline_response_200_24*
SWGInline_response_200_24::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInline_response_200_24::fromJsonObject(QJsonObject &pJson) {
    setValue(&data, pJson["data"], "QList", "SWGUnitCategory");
    setValue(&success, pJson["success"], "bool", "");
    
}

QString
SWGInline_response_200_24::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInline_response_200_24::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    
    QList<SWGUnitCategory*>* dataList = data;
    QJsonArray dataJsonArray;
    toJsonArray((QList<void*>*)data, &dataJsonArray, "data", "SWGUnitCategory");

    obj->insert("data", dataJsonArray);
    
    
    obj->insert("success", QJsonValue(success));
    

    return obj;
}

QList<SWGUnitCategory*>*
SWGInline_response_200_24::getData() {
    return data;
}
void
SWGInline_response_200_24::setData(QList<SWGUnitCategory*>* data) {
    this->data = data;
}

bool
SWGInline_response_200_24::getSuccess() {
    return success;
}
void
SWGInline_response_200_24::setSuccess(bool success) {
    this->success = success;
}



} /* namespace Swagger */

