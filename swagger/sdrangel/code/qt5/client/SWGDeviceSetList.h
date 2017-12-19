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

/*
 * SWGDeviceSetList.h
 * 
 * List of device sets opened in this instance
 */

#ifndef SWGDeviceSetList_H_
#define SWGDeviceSetList_H_

#include <QJsonObject>


#include "SWGDeviceSet.h"
#include <QList>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGDeviceSetList: public SWGObject {
public:
    SWGDeviceSetList();
    SWGDeviceSetList(QString* json);
    virtual ~SWGDeviceSetList();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGDeviceSetList* fromJson(QString &jsonString);

    qint32 getDevicesetcount();
    void setDevicesetcount(qint32 devicesetcount);

    QList<SWGDeviceSet*>* getDeviceSets();
    void setDeviceSets(QList<SWGDeviceSet*>* device_sets);


private:
    qint32 devicesetcount;
    QList<SWGDeviceSet*>* device_sets;
};

}

#endif /* SWGDeviceSetList_H_ */
