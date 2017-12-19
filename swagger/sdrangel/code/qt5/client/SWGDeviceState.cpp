/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations:       * In SDRangel GUI version there is no support for channel deletion. As a consequence the call to the API /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex} returns with a status code of 501 (not implemented)   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400     * There is no API adapter in the targeted instance: message \"Service not available\" as text/plain is returned with a status 500. This should not happen with released code.      --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceState.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceState::SWGDeviceState(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceState::SWGDeviceState() {
    init();
}

SWGDeviceState::~SWGDeviceState() {
    this->cleanup();
}

void
SWGDeviceState::init() {
    state = new QString("");
}

void
SWGDeviceState::cleanup() {
    
    if(state != nullptr) {
        delete state;
    }
}

SWGDeviceState*
SWGDeviceState::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceState::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&state, pJson["state"], "QString", "QString");
}

QString
SWGDeviceState::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDeviceState::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("state"), state, obj, QString("QString"));

    return obj;
}

QString*
SWGDeviceState::getState() {
    return state;
}
void
SWGDeviceState::setState(QString* state) {
    this->state = state;
}


}

