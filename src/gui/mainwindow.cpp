
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qtimer.h"

#include "timerecordconrol.h"



MainWindow::MainWindow(QWidget *parent, std::tr1::shared_ptr<TimeRecordConrol> pTrc) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    , m_pRecordControl(pTrc)
{
    ui->setupUi(this);

    ui->RecordButton->setCheckable(true);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateCaption()));
    timer->start(500);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateCaption()
{
    ui->timeEdit->setTime( m_pRecordControl->GetTime() );
}


void MainWindow::on_RecordButton_clicked(bool checked)
{
    if (checked)
        ui->RecordButton->setText( tr("Stop") );
    else
        ui->RecordButton->setText( tr("Start") );

    m_pRecordControl->CangeState(checked);
}
