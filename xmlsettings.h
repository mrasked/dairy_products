#ifndef XMLSETTINGS_H
#define XMLSETTINGS_H

#include <QtXml/QDomEntity>
#include "commondatatypes.h"

class XMLSettings
{

private:
    QDomDocument  settingsDocument;

public:
    XMLSettings();
    bool readXmlToDom();
    bool writeDomToXml();
    bool readNetSettings(netSettings *netSets);
    bool changeNetSettings(netSettings *netSetsStruct);

};

#endif // XMLSETTINGS_H
