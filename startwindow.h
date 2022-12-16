#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QTimer>

#include "commondatatypes.h"
#include "reportswindow.h"
#include "productswindow.h"
#include "schedulewindow.h"
#include "netwindow.h"
#include "tcpserver.h"
#include "xmlsettings.h"
#include "testwindow.h"
#include "myreportwin.h"
#include "about.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StartWindow; }
QT_END_NAMESPACE

class QSystemTrayIcon;

class StartWindow : public QMainWindow
{
    Q_OBJECT

public:
    StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

    void sendTestData();

private slots:
    void saveNewNetSettingsToXML();
    void loadNewNetSettingsFromXML();

private:
    Ui::StartWindow *ui;

    QTimer *hideStartWindowTimer;

    QSystemTrayIcon *mainSysTrayIcon;

    netSettings netSetStr;

    XMLSettings *xmlSets;

    QMenu *contextTrayIconMenu;
    QAction *reportsContextTrayIconMenu;
    QAction *runSchedualeContextTrayIconMenu;
    QAction *productsContextTrayIconMenu;
    QAction *closeContextTrayIconMenu;
    QAction *schedualeContextTrayIconMenu;
    QAction *netContextTrayIconMenu;
    QAction *dataBaseContextTrayIconMenu;
    QAction *commonSettingsContextTrayIconMenu;

    QAction *helpSettingsContextTrayIconMenu;
    QAction *aboutSettingsContextTrayIconMenu;

    QAction *testConnectionDBContextTrayIconMenu;
    QAction *reportMyContextTrayIconMenu;

    bool runSchedualeFlag = false;

    ReportsWindow *currentReportsWindow;
    productsWindow *currentProductsWindow;
    scheduleWindow  * currentScheduleWindow;
    netWindow *currentNetWindow;
    testWindow *currentTestWindow;
    myReportWin *currentRepWindow;
    about *currentAboutWindow;

    void createMainTrayIcon();

    void hideStartWindowTimerInit(int time_ms);

    void iconActivated(QSystemTrayIcon::ActivationReason reason);
    void createActions();
    void createMenus();


    void on_actionReports_triggered();
    void on_actionRunScheduale_triggered();
    void on_actionProducts_triggered();
    void on_actionSchedule_triggered();
    void on_actionNet_triggered();
    void on_actionClose_triggered();

    void on_actionTest_triggered();
    void on_actionRep_triggered();
    void on_actionAbout_triggered();

    TCPServer *TcpServ;


};
#endif // STARTWINDOW_H
