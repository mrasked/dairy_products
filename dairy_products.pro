QT       += core gui sql network xml axcontainer printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    ipaddwindow.cpp \
    login.cpp \
    main.cpp \
    myreportwin.cpp \
    netwindow.cpp \
    productswindow.cpp \
    qcustomplot.cpp \
    reportswindow.cpp \
    schedulewindow.cpp \
    startwindow.cpp \
    tcpconnectionthread.cpp \
    tcpserver.cpp \
    testwindow.cpp \
    xmlsettings.cpp

HEADERS += \
    about.h \
    commondatatypes.h \
    ipaddwindow.h \
    login.h \
    myreportwin.h \
    netwindow.h \
    productswindow.h \
    qcustomplot.h \
    reportswindow.h \
    schedulewindow.h \
    startwindow.h \
    tcpconnectionthread.h \
    tcpserver.h \
    testwindow.h \
    xmlsettings.h

FORMS += \
    about.ui \
    ipaddwindow.ui \
    login.ui \
    myreportwin.ui \
    netwindow.ui \
    productswindow.ui \
    reportswindow.ui \
    schedulewindow.ui \
    startwindow.ui \
    testwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Pictures.qrc
