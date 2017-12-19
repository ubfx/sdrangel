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


#include "SWGDeviceSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceSettings::SWGDeviceSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceSettings::SWGDeviceSettings() {
    init();
}

SWGDeviceSettings::~SWGDeviceSettings() {
    this->cleanup();
}

void
SWGDeviceSettings::init() {
    device_hw_type = new QString("");
    tx = 0;
    file_source_settings = new SWGFileSourceSettings();
    rtl_sdr_settings = new SWGRtlSdrSettings();
    lime_sdr_input_settings = new SWGLimeSdrInputSettings();
    lime_sdr_output_settings = new SWGLimeSdrOutputSettings();
}

void
SWGDeviceSettings::cleanup() {
    
    if(device_hw_type != nullptr) {
        delete device_hw_type;
    }


    if(file_source_settings != nullptr) {
        delete file_source_settings;
    }

    if(rtl_sdr_settings != nullptr) {
        delete rtl_sdr_settings;
    }

    if(lime_sdr_input_settings != nullptr) {
        delete lime_sdr_input_settings;
    }

    if(lime_sdr_output_settings != nullptr) {
        delete lime_sdr_output_settings;
    }
}

SWGDeviceSettings*
SWGDeviceSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_hw_type, pJson["deviceHwType"], "QString", "QString");
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    ::SWGSDRangel::setValue(&file_source_settings, pJson["fileSourceSettings"], "SWGFileSourceSettings", "SWGFileSourceSettings");
    ::SWGSDRangel::setValue(&rtl_sdr_settings, pJson["rtlSdrSettings"], "SWGRtlSdrSettings", "SWGRtlSdrSettings");
    ::SWGSDRangel::setValue(&lime_sdr_input_settings, pJson["limeSdrInputSettings"], "SWGLimeSdrInputSettings", "SWGLimeSdrInputSettings");
    ::SWGSDRangel::setValue(&lime_sdr_output_settings, pJson["limeSdrOutputSettings"], "SWGLimeSdrOutputSettings", "SWGLimeSdrOutputSettings");
}

QString
SWGDeviceSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGDeviceSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("deviceHwType"), device_hw_type, obj, QString("QString"));

    obj->insert("tx", QJsonValue(tx));

    toJsonValue(QString("fileSourceSettings"), file_source_settings, obj, QString("SWGFileSourceSettings"));

    toJsonValue(QString("rtlSdrSettings"), rtl_sdr_settings, obj, QString("SWGRtlSdrSettings"));

    toJsonValue(QString("limeSdrInputSettings"), lime_sdr_input_settings, obj, QString("SWGLimeSdrInputSettings"));

    toJsonValue(QString("limeSdrOutputSettings"), lime_sdr_output_settings, obj, QString("SWGLimeSdrOutputSettings"));

    return obj;
}

QString*
SWGDeviceSettings::getDeviceHwType() {
    return device_hw_type;
}
void
SWGDeviceSettings::setDeviceHwType(QString* device_hw_type) {
    this->device_hw_type = device_hw_type;
}

qint32
SWGDeviceSettings::getTx() {
    return tx;
}
void
SWGDeviceSettings::setTx(qint32 tx) {
    this->tx = tx;
}

SWGFileSourceSettings*
SWGDeviceSettings::getFileSourceSettings() {
    return file_source_settings;
}
void
SWGDeviceSettings::setFileSourceSettings(SWGFileSourceSettings* file_source_settings) {
    this->file_source_settings = file_source_settings;
}

SWGRtlSdrSettings*
SWGDeviceSettings::getRtlSdrSettings() {
    return rtl_sdr_settings;
}
void
SWGDeviceSettings::setRtlSdrSettings(SWGRtlSdrSettings* rtl_sdr_settings) {
    this->rtl_sdr_settings = rtl_sdr_settings;
}

SWGLimeSdrInputSettings*
SWGDeviceSettings::getLimeSdrInputSettings() {
    return lime_sdr_input_settings;
}
void
SWGDeviceSettings::setLimeSdrInputSettings(SWGLimeSdrInputSettings* lime_sdr_input_settings) {
    this->lime_sdr_input_settings = lime_sdr_input_settings;
}

SWGLimeSdrOutputSettings*
SWGDeviceSettings::getLimeSdrOutputSettings() {
    return lime_sdr_output_settings;
}
void
SWGDeviceSettings::setLimeSdrOutputSettings(SWGLimeSdrOutputSettings* lime_sdr_output_settings) {
    this->lime_sdr_output_settings = lime_sdr_output_settings;
}


}

