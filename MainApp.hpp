#ifndef MAINAPP_HPP_INCLUDED
#define MAINAPP_HPP_INCLUDED

#include <QMainWindow>
#include <QDebug>
#include <QProcess>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui{ class MainApp; }

class MainApp : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainApp(QWidget *parent = 0);
        ~MainApp();

    private:
        Ui::MainApp *ui;

    private slots:
        void on_generateButton_clicked();
        void on_saveButton_clicked();
        void on_viewerLoadButton_clicked();
};

#endif // MAINAPP_HPP_INCLUDED
