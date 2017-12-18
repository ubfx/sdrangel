/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations:       * In SDRangel GUI version there is no support for channel deletion. As a consequence the call to the API /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex} returns with a status code of 501 (not implemented)   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400     * There is no API adapter in the targeted instance: message \"Service not available\" as text/plain is returned with a status 500. This should not happen with released code.      --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGLocationInformation.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGLocationInformation::SWGLocationInformation(QString* json) {
    init();
    this->fromJson(*json);
}

SWGLocationInformation::SWGLocationInformation() {
    init();
}

SWGLocationInformation::~SWGLocationInformation() {
    this->cleanup();
}

void
SWGLocationInformation::init() {
    latitude = 0.0f;
    longitude = 0.0f;
}

void
SWGLocationInformation::cleanup() {
    

}

SWGLocationInformation*
SWGLocationInformation::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGLocationInformation::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&latitude, pJson["latitude"], "float", "");
    ::SWGSDRangel::setValue(&longitude, pJson["longitude"], "float", "");
}

QString
SWGLocationInformation::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGLocationInformation::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("latitude", QJsonValue(latitude));

    obj->insert("longitude", QJsonValue(longitude));

    return obj;
}

float
SWGLocationInformation::getLatitude() {
    return latitude;
}
void
SWGLocationInformation::setLatitude(float latitude) {
    this->latitude = latitude;
}

float
SWGLocationInformation::getLongitude() {
    return longitude;
}
void
SWGLocationInformation::setLongitude(float longitude) {
    this->longitude = longitude;
}


}
