#include "MainApp.hpp"
#include "ui_MainApp.h"

MainApp::MainApp(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainApp)
{
    ui->setupUi(this);
}


MainApp::~MainApp()
{
    delete ui;
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// PRIVATE SLOTS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainApp::on_generateButton_clicked()
{
    QStringList args;
    args << QString::number(ui->widthSpinBox->value());
    args << QString::number(ui->heightSpinBox->value());
    QString algorithm(ui->algorithmsComboBox->currentText());
    algorithm.replace(" ", "");
    args << algorithm;

    QString GeneratorPath("Y:/C++/MazeStudio/Generator/release/Generator.exe");
    QString ViewerPath("Y:/C++/MazeStudio/Viewer/release/MazeViewer.exe");
    QProcess::execute(GeneratorPath, args);

    args.clear();
    args << "Y:/C++/MazeStudio/default.maze";
    QProcess::startDetached(ViewerPath, args);
}


void MainApp::on_saveButton_clicked()
{
    QString filename(QFileDialog::getSaveFileName(this, "Save File",
                                                  QString(""),
                                                  "Maze (*.maze);;All (*.*)"));

    if(!filename.isEmpty())
    {
        QFile::remove(filename);

        if(QFile::copy("Y:/C++/MazeStudio/default.maze", filename))
            QMessageBox::information(this, "Good new's !", "The maze was successfully saved. Enjoy the path:\n"+filename);
        else
            QMessageBox::warning(this, "Bad new's !", "The maze was unsuccessfully saved. Try again or restart your computer.");
    }
}


void MainApp::on_viewerLoadButton_clicked()
{
    QString filename(QFileDialog::getOpenFileName(this, "Open File",
                                                  QString(""),
                                                  "Maze (*.maze);;All (*.*)"));

    if(!filename.isEmpty())
    {
        QString ViewerPath("Y:/C++/MazeStudio/Viewer/release/MazeViewer.exe");
        QProcess::startDetached(ViewerPath, QStringList() << filename);
    }
}
