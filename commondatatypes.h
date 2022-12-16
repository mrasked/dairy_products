#ifndef COMMONDATATYPES_H
#define COMMONDATATYPES_H

#include <QStringList>

#define XMLSETTINGSPATH "C:/Qt_project/dairy_products/xml_settings.xml"

typedef struct netSettings
{
    int portNumber = 2345;
    bool anyIPAddr = false;
    QStringList ipList = {"127.0.0.1", "127.0.0.2"};
} netSettings;



#endif // COMMONDATATYPES_H
