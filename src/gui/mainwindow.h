#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <tr1/memory>


namespace Ui {
class MainWindow;
}

class TimeRecordConrol;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent, std::tr1::shared_ptr<TimeRecordConrol> pTrc);
    ~MainWindow();

private slots:
    void on_RecordButton_clicked(bool checked);
    void updateCaption();

private:
    Ui::MainWindow *ui;
    std::tr1::shared_ptr<TimeRecordConrol> m_pRecordControl;
};

#endif // MAINWINDOW_H
