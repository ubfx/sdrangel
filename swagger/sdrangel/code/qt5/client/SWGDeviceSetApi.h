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

#ifndef _SWG_SWGDeviceSetApi_H_
#define _SWG_SWGDeviceSetApi_H_

#include "SWGHttpRequest.h"

#include "SWGChannelSettings.h"
#include "SWGDeviceListItem.h"
#include "SWGDeviceSet.h"
#include "SWGDeviceSettings.h"
#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"

#include <QObject>

namespace SWGSDRangel {

class SWGDeviceSetApi: public QObject {
    Q_OBJECT

public:
    SWGDeviceSetApi();
    SWGDeviceSetApi(QString host, QString basePath);
    ~SWGDeviceSetApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void devicesetChannelDelete(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelPost(qint32 device_set_index, SWGChannelSettings body);
    void devicesetChannelSettingsGet(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelSettingsPatch(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelSettingsPut(qint32 device_set_index, qint32 channel_index);
    void devicesetDevicePut(qint32 device_set_index, SWGDeviceListItem body);
    void devicesetDeviceRunDelete(qint32 device_set_index);
    void devicesetDeviceRunGet(qint32 device_set_index);
    void devicesetDeviceRunPost(qint32 device_set_index);
    void devicesetDeviceSettingsGet(qint32 device_set_index);
    void devicesetDeviceSettingsPatch(qint32 device_set_index, SWGDeviceSettings body);
    void devicesetDeviceSettingsPut(qint32 device_set_index, SWGDeviceSettings body);
    void devicesetGet(qint32 device_set_index);
    
private:
    void devicesetChannelDeleteCallback (HttpRequestWorker * worker);
    void devicesetChannelPostCallback (HttpRequestWorker * worker);
    void devicesetChannelSettingsGetCallback (HttpRequestWorker * worker);
    void devicesetChannelSettingsPatchCallback (HttpRequestWorker * worker);
    void devicesetChannelSettingsPutCallback (HttpRequestWorker * worker);
    void devicesetDevicePutCallback (HttpRequestWorker * worker);
    void devicesetDeviceRunDeleteCallback (HttpRequestWorker * worker);
    void devicesetDeviceRunGetCallback (HttpRequestWorker * worker);
    void devicesetDeviceRunPostCallback (HttpRequestWorker * worker);
    void devicesetDeviceSettingsGetCallback (HttpRequestWorker * worker);
    void devicesetDeviceSettingsPatchCallback (HttpRequestWorker * worker);
    void devicesetDeviceSettingsPutCallback (HttpRequestWorker * worker);
    void devicesetGetCallback (HttpRequestWorker * worker);
    
signals:
    void devicesetChannelDeleteSignal(SWGChannelSettings* summary);
    void devicesetChannelPostSignal(SWGChannelSettings* summary);
    void devicesetChannelSettingsGetSignal(SWGChannelSettings* summary);
    void devicesetChannelSettingsPatchSignal(SWGChannelSettings* summary);
    void devicesetChannelSettingsPutSignal(SWGChannelSettings* summary);
    void devicesetDevicePutSignal(SWGDeviceListItem* summary);
    void devicesetDeviceRunDeleteSignal(SWGDeviceState* summary);
    void devicesetDeviceRunGetSignal(SWGDeviceState* summary);
    void devicesetDeviceRunPostSignal(SWGDeviceState* summary);
    void devicesetDeviceSettingsGetSignal(SWGDeviceSettings* summary);
    void devicesetDeviceSettingsPatchSignal(SWGDeviceSettings* summary);
    void devicesetDeviceSettingsPutSignal(SWGDeviceSettings* summary);
    void devicesetGetSignal(SWGDeviceSet* summary);
    
    void devicesetChannelDeleteSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelPostSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsGetSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPatchSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPutSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDevicePutSignalE(SWGDeviceListItem* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunDeleteSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunGetSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunPostSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsGetSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPatchSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPutSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetGetSignalE(SWGDeviceSet* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
