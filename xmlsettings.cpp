#include "xmlsettings.h"
#include <QtCore>

#include <QDebug>

XMLSettings::XMLSettings()
{

}


/////////////////////////////////////////////////////////////////////////
bool XMLSettings::readXmlToDom()
{
    QFile xmlSettingsFile(XMLSETTINGSPATH);
    if (!xmlSettingsFile.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "opening file error";
        return false;
    }

    if(!settingsDocument.setContent(&xmlSettingsFile))
    {
        qDebug() << "can't load document";
        return false;
    }
    xmlSettingsFile.close();

    return true;
}


bool XMLSettings::writeDomToXml()
{
    QFile xmlSettingsFile(XMLSETTINGSPATH);
    if (!xmlSettingsFile.open(QIODevice::Truncate | QIODevice::WriteOnly))
    {
        //xmlSettingsFile
        qDebug() << xmlSettingsFile.errorString();
        return false;
    }

    QByteArray xml = settingsDocument.toByteArray();
    xmlSettingsFile.write(xml);
    xmlSettingsFile.close();

    return true;
}
//////////////////////////////////////////////////////////////////////////////


bool XMLSettings::readNetSettings(netSettings *netSetsStruct)
{

    QDomElement root = settingsDocument.firstChildElement();
    QDomNodeList netSet = root.elementsByTagName("net_settings");

    //qDebug() <<netSet.count();

    if(netSet.count() == 0)
    {
        return false;
    }

    for (int i=0; i<netSet.count(); i++)
    {

        QDomNode  netSetNode = netSet.at(i);

        if (netSetNode.isElement())
        {
            QDomElement currentNetSetting = netSetNode.toElement();


            //extract port number
            QDomNodeList portList = currentNetSetting.elementsByTagName("port");
            if (portList.count()!=1)
            {
                return false;
            }
            QDomNode portNode = portList.at(0);
            if (portNode.isElement())
            {
                QDomElement port = portNode.toElement();
                netSetsStruct->portNumber = port.text().toInt();
            }
            else
            {
                return false;
            }


            //extract any ip option
            QDomNodeList anyAddrList = currentNetSetting.elementsByTagName("any_addr_allowed");
            if (anyAddrList.count()!=1)
            {
                return false;
            }
            QDomNode anyAddrNode = anyAddrList.at(0);
            if (anyAddrNode.isElement())
            {
                QDomElement anyAddr = anyAddrNode.toElement();
                bool flag = false;
                if (anyAddr.text() == "1")
                {
                    flag = true;
                }
                netSetsStruct->anyIPAddr = flag;
            }
            else
            {
                return false;
            }


            //extract ip list
            QDomNodeList ipListList = currentNetSetting.elementsByTagName("ip_list");
            if (ipListList.count()!=1)
            {
                return false;
            }
            QDomNode ipListNode = ipListList.at(0);
            if (ipListNode.isElement())
            {
                QDomElement ipList = ipListNode.toElement();
                QString ipString = ipList.text();
                QRegExp separator(",");
                QStringList list = ipString.split(separator);

                netSetsStruct->ipList =  list;
            }
            else
            {
                return false;
            }


        }
        else
        {
            return false;
        }

    }


    return true;
}




bool XMLSettings::changeNetSettings(netSettings *netSetsStruct)
{

    QDomElement root = settingsDocument.firstChildElement();
    QDomNodeList netSet = root.elementsByTagName("net_settings");

    if(netSet.count() ==0)
    {
        return false;
    }

    for (int i=0; i<netSet.count(); i++)
    {

        QDomNode  netSetNode = netSet.at(i);

        if (netSetNode.isElement())
        {
            QDomElement currentNetSetting = netSetNode.toElement();


            //write port number
            QDomNodeList portList = currentNetSetting.elementsByTagName("port");
            if (portList.count()!=1)
            {
                return false;
            }
            QDomNode portNode = portList.at(0);
            QString portFromStruct = QString::number(netSetsStruct->portNumber);
            portNode.firstChild().setNodeValue(portFromStruct);


            //write any ip option
            QDomNodeList anyAddrList = currentNetSetting.elementsByTagName("any_addr_allowed");
            if (anyAddrList.count()!=1)
            {
                return false;
            }
            QDomNode anyAddrNode = anyAddrList.at(0);

            QString anyIpFlag = "0";
            if (netSetsStruct->anyIPAddr)
            {
                anyIpFlag = "1";
            }

            anyAddrNode.firstChild().setNodeValue(anyIpFlag);


            //write ip list
            QDomNodeList ipListList = currentNetSetting.elementsByTagName("ip_list");
            if (ipListList.count()!=1)
            {
                return false;
            }
            QDomNode ipListNode = ipListList.at(0);
            QString ipListInStr = netSetsStruct->ipList.join(",");
            ipListNode.firstChild().setNodeValue(ipListInStr);



        }
        else
        {
            return false;
        }

    }


    return true;
}
////////////////////////////////////////////////////////////////////////////////////////

