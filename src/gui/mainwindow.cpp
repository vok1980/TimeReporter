
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "timerecordconrol.h"



MainWindow::MainWindow(QWidget *parent, std::tr1::shared_ptr<TimeRecordConrol> pTrc) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    , m_pRecordControl(pTrc)
{
    ui->setupUi(this);
    ui->RecordButton->setCheckable(true);
}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_RecordButton_clicked(bool checked)
{
    if (checked)
        ui->RecordButton->setText( tr("Stop") );
    else
        ui->RecordButton->setText( tr("Start") );

    m_pRecordControl->CangeState(checked);
}
