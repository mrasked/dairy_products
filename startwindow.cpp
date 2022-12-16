#include "startwindow.h"
#include "ui_startwindow.h"


#include "testwindow.h"


#include <qdebug.h>


StartWindow::StartWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::StartWindow)
{
    ui->setupUi(this);
    this->show();

    StartWindow::createMainTrayIcon();
    StartWindow::hideStartWindowTimerInit(5000);

    xmlSets = new XMLSettings();

    loadNewNetSettingsFromXML();

    /*TcpServ = new TCPServer(this, &netSetStr);
    TcpServ ->startServer();

    testWindow * tw = new testWindow(this);
    connect(tw, &testWindow::testButton, this, &StartWindow::sendTestData);
    tw->show();*/
}


StartWindow::~StartWindow()
{
    delete ui;
}


void StartWindow::hideStartWindowTimerInit(int time_ms)
{
    hideStartWindowTimer = new QTimer();
    connect(hideStartWindowTimer, &QTimer::timeout, this, &StartWindow::hide);
    hideStartWindowTimer->start(time_ms);
}


void StartWindow::createMainTrayIcon()
{
    mainSysTrayIcon = new QSystemTrayIcon(this);
    mainSysTrayIcon->setIcon(QIcon(":/menuIcons/icons/mainIcon.png"));

    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    this->statusBar()->setSizeGripEnabled(false);

    createActions();
    createMenus();

    mainSysTrayIcon->setContextMenu(contextTrayIconMenu);
    mainSysTrayIcon->setVisible(true);
    connect(mainSysTrayIcon, &QSystemTrayIcon::activated, this, &StartWindow::iconActivated);
}


void StartWindow::iconActivated(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason) {
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::DoubleClick:
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        ;
    }
}


void StartWindow::createActions()
{
    reportsContextTrayIconMenu = new QAction(tr("Отчеты"), this);
    reportsContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/reports.png"));
    connect(reportsContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionReports_triggered);

    runSchedualeContextTrayIconMenu = new QAction(tr("Выполнять расписание"), this);
    runSchedualeContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/runScheduale.png"));
    connect(runSchedualeContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionRunScheduale_triggered);

    productsContextTrayIconMenu = new QAction(tr("Настройка продукции"), this);
    productsContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/products.png"));
    connect(productsContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionProducts_triggered);

    schedualeContextTrayIconMenu = new QAction(tr("Настройка расписания"), this);
    schedualeContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/scheduale.png"));
    connect(schedualeContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionSchedule_triggered);

    netContextTrayIconMenu = new QAction(tr("Сетевые настройки"), this);
    netContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/net.png"));
    connect(netContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionNet_triggered);

    dataBaseContextTrayIconMenu = new QAction(tr("Подключение базы данных"), this);
    dataBaseContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/dataBase.png"));
    //connect(dataBaseContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionClose_triggered);

    commonSettingsContextTrayIconMenu = new QAction(tr("Общие настройки программы"), this);
    commonSettingsContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/commonSettings.png"));
    //connect(commonSettingsContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionClose_triggered);

    helpSettingsContextTrayIconMenu = new QAction(tr("Справка"), this);
    helpSettingsContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/help.png"));
    //connect(helpSettingsContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionClose_triggered);

    aboutSettingsContextTrayIconMenu = new QAction(tr("О программе"), this);
    aboutSettingsContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/about.png"));
    connect(aboutSettingsContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionAbout_triggered);

    closeContextTrayIconMenu = new QAction(tr("Закрыть"), this);
    closeContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/close.png"));
    connect(closeContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionClose_triggered);


    testConnectionDBContextTrayIconMenu = new QAction(tr("Подключение базы данных"), this);
    testConnectionDBContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/dataBase.png"));
    connect(testConnectionDBContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionTest_triggered);
    reportMyContextTrayIconMenu = new QAction(tr("тест отчет"), this);
    reportMyContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/reports.png"));
    connect(reportMyContextTrayIconMenu, &QAction::triggered, this, &StartWindow::on_actionRep_triggered);
}






void StartWindow::createMenus()
{
    contextTrayIconMenu = new QMenu(this);
    contextTrayIconMenu->addAction(reportsContextTrayIconMenu);
    contextTrayIconMenu->addAction(testConnectionDBContextTrayIconMenu);
    contextTrayIconMenu->addSeparator();
    contextTrayIconMenu->addAction(runSchedualeContextTrayIconMenu);
    contextTrayIconMenu->addSeparator();
    contextTrayIconMenu->addAction(productsContextTrayIconMenu);
    contextTrayIconMenu->addAction(schedualeContextTrayIconMenu);
    contextTrayIconMenu->addAction(netContextTrayIconMenu);
    //contextTrayIconMenu->addAction(dataBaseContextTrayIconMenu);
    contextTrayIconMenu->addAction(commonSettingsContextTrayIconMenu);
    contextTrayIconMenu->addAction(reportMyContextTrayIconMenu);
    contextTrayIconMenu->addSeparator();
    contextTrayIconMenu->addAction(helpSettingsContextTrayIconMenu);
    contextTrayIconMenu->addAction(aboutSettingsContextTrayIconMenu);
    contextTrayIconMenu->addSeparator();
    contextTrayIconMenu->addAction(closeContextTrayIconMenu);
}






void StartWindow::on_actionReports_triggered()
{
    currentReportsWindow = new ReportsWindow();
    currentReportsWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    currentReportsWindow->statusBar()->setSizeGripEnabled(false);

    currentReportsWindow->show();
}


void StartWindow::on_actionRunScheduale_triggered()
{
    runSchedualeFlag = !runSchedualeFlag;
    if (runSchedualeFlag)
    {
        runSchedualeContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/pauseScheduale.png"));
        runSchedualeContextTrayIconMenu->setText("Приостановить выполнение расписания");
    }
    else
    {
        runSchedualeContextTrayIconMenu->setIcon(QIcon(":/menuIcons/icons/runScheduale.png"));
        runSchedualeContextTrayIconMenu->setText("Выполнять расписание");
    }
}


void StartWindow::on_actionProducts_triggered()
{
    currentProductsWindow = new productsWindow();
    currentProductsWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);//присвивания размера окну
    currentProductsWindow->statusBar()->setSizeGripEnabled(false);

    currentProductsWindow->show();
}


void StartWindow::on_actionSchedule_triggered()
{
    currentScheduleWindow = new scheduleWindow();
    currentScheduleWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    currentScheduleWindow->statusBar()->setSizeGripEnabled(false);

    currentScheduleWindow->show();
}


void StartWindow::on_actionNet_triggered()
{
    currentNetWindow = new netWindow(&netSetStr, this);
    currentNetWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    currentNetWindow->statusBar()->setSizeGripEnabled(false);
    connect(currentNetWindow, &netWindow::netSettingChanged, this, &StartWindow::saveNewNetSettingsToXML);

    currentNetWindow->show();
}


void StartWindow::on_actionClose_triggered()
{
    QApplication::quit();
}



void StartWindow::saveNewNetSettingsToXML()
{
    if(xmlSets->readXmlToDom())
    {
        if(xmlSets->changeNetSettings(&netSetStr))
        {
            if(!xmlSets->writeDomToXml())
            {
                qDebug() << "netsettings havent been saved";
            }
        }
    }

}


void StartWindow::loadNewNetSettingsFromXML()
{
    if(xmlSets->readXmlToDom())
    {
        if(!xmlSets->readNetSettings(&netSetStr))
            {
                qDebug() << "netsettings havent been opened";
            }
    }
}

void StartWindow::on_actionTest_triggered(){
    currentTestWindow = new testWindow();
    currentTestWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    currentTestWindow->statusBar()->setSizeGripEnabled(false);

    currentTestWindow->show();
}

void StartWindow::on_actionRep_triggered(){
    currentRepWindow = new myReportWin();
    currentRepWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    //currentRepWindow->statusBar()->setSizeGripEnabled(false);

    currentRepWindow->show();
}

void StartWindow::on_actionAbout_triggered(){
    currentAboutWindow = new about();
    currentAboutWindow->setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
    //currentRepWindow->statusBar()->setSizeGripEnabled(false);

    currentAboutWindow->show();
}


/////////////////////////////////
void StartWindow::sendTestData()
{
    QString testStr = "I am sending data";
    QByteArray testArray = testStr.toLocal8Bit();
    TcpServ->sendDataToClient("127.0.0.1", &testArray);
}

