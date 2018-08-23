/********************************************************************************
** Form generated from reading UI file 'MainApp.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINAPP_H
#define UI_MAINAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainApp
{
public:
    QWidget *centralWidget;
    QGroupBox *generatorGroupBox;
    QWidget *formLayoutWidget;
    QFormLayout *generatorFormLayout;
    QLabel *mazeWidthLabel;
    QSpinBox *widthSpinBox;
    QLabel *mazeHeightLabel;
    QSpinBox *heightSpinBox;
    QLabel *algorithmsLabel;
    QComboBox *algorithmsComboBox;
    QPushButton *generateButton;
    QPushButton *saveButton;
    QGroupBox *viewerGroupBox;
    QPushButton *viewerLoadButton;
    QGroupBox *editorGroupBox;
    QPushButton *editorLoadButton;

    void setupUi(QMainWindow *MainApp)
    {
        if (MainApp->objectName().isEmpty())
            MainApp->setObjectName(QStringLiteral("MainApp"));
        MainApp->resize(320, 320);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainApp->sizePolicy().hasHeightForWidth());
        MainApp->setSizePolicy(sizePolicy);
        MainApp->setMinimumSize(QSize(320, 320));
        MainApp->setMaximumSize(QSize(320, 320));
        MainApp->setBaseSize(QSize(320, 320));
        QIcon icon;
        icon.addFile(QStringLiteral("icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainApp->setWindowIcon(icon);
        centralWidget = new QWidget(MainApp);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        generatorGroupBox = new QGroupBox(centralWidget);
        generatorGroupBox->setObjectName(QStringLiteral("generatorGroupBox"));
        generatorGroupBox->setGeometry(QRect(10, 10, 291, 171));
        generatorGroupBox->setFlat(true);
        generatorGroupBox->setCheckable(false);
        formLayoutWidget = new QWidget(generatorGroupBox);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 10, 291, 151));
        generatorFormLayout = new QFormLayout(formLayoutWidget);
        generatorFormLayout->setSpacing(6);
        generatorFormLayout->setContentsMargins(11, 11, 11, 11);
        generatorFormLayout->setObjectName(QStringLiteral("generatorFormLayout"));
        generatorFormLayout->setHorizontalSpacing(8);
        generatorFormLayout->setVerticalSpacing(8);
        generatorFormLayout->setContentsMargins(16, 8, 16, 8);
        mazeWidthLabel = new QLabel(formLayoutWidget);
        mazeWidthLabel->setObjectName(QStringLiteral("mazeWidthLabel"));

        generatorFormLayout->setWidget(0, QFormLayout::LabelRole, mazeWidthLabel);

        widthSpinBox = new QSpinBox(formLayoutWidget);
        widthSpinBox->setObjectName(QStringLiteral("widthSpinBox"));
        widthSpinBox->setMinimum(2);
        widthSpinBox->setMaximum(1000);
        widthSpinBox->setSingleStep(2);

        generatorFormLayout->setWidget(0, QFormLayout::FieldRole, widthSpinBox);

        mazeHeightLabel = new QLabel(formLayoutWidget);
        mazeHeightLabel->setObjectName(QStringLiteral("mazeHeightLabel"));

        generatorFormLayout->setWidget(1, QFormLayout::LabelRole, mazeHeightLabel);

        heightSpinBox = new QSpinBox(formLayoutWidget);
        heightSpinBox->setObjectName(QStringLiteral("heightSpinBox"));
        heightSpinBox->setMinimum(2);
        heightSpinBox->setMaximum(1000);
        heightSpinBox->setSingleStep(2);

        generatorFormLayout->setWidget(1, QFormLayout::FieldRole, heightSpinBox);

        algorithmsLabel = new QLabel(formLayoutWidget);
        algorithmsLabel->setObjectName(QStringLiteral("algorithmsLabel"));

        generatorFormLayout->setWidget(2, QFormLayout::LabelRole, algorithmsLabel);

        algorithmsComboBox = new QComboBox(formLayoutWidget);
        algorithmsComboBox->setObjectName(QStringLiteral("algorithmsComboBox"));

        generatorFormLayout->setWidget(2, QFormLayout::FieldRole, algorithmsComboBox);

        generateButton = new QPushButton(formLayoutWidget);
        generateButton->setObjectName(QStringLiteral("generateButton"));

        generatorFormLayout->setWidget(3, QFormLayout::SpanningRole, generateButton);

        saveButton = new QPushButton(formLayoutWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        generatorFormLayout->setWidget(4, QFormLayout::SpanningRole, saveButton);

        viewerGroupBox = new QGroupBox(centralWidget);
        viewerGroupBox->setObjectName(QStringLiteral("viewerGroupBox"));
        viewerGroupBox->setGeometry(QRect(10, 180, 291, 51));
        viewerGroupBox->setFlat(true);
        viewerLoadButton = new QPushButton(viewerGroupBox);
        viewerLoadButton->setObjectName(QStringLiteral("viewerLoadButton"));
        viewerLoadButton->setGeometry(QRect(10, 20, 271, 23));
        editorGroupBox = new QGroupBox(centralWidget);
        editorGroupBox->setObjectName(QStringLiteral("editorGroupBox"));
        editorGroupBox->setGeometry(QRect(10, 240, 291, 61));
        editorGroupBox->setFlat(true);
        editorLoadButton = new QPushButton(editorGroupBox);
        editorLoadButton->setObjectName(QStringLiteral("editorLoadButton"));
        editorLoadButton->setGeometry(QRect(10, 20, 271, 23));
        MainApp->setCentralWidget(centralWidget);
        generatorGroupBox->raise();
        viewerGroupBox->raise();
        editorGroupBox->raise();

        retranslateUi(MainApp);

        QMetaObject::connectSlotsByName(MainApp);
    } // setupUi

    void retranslateUi(QMainWindow *MainApp)
    {
        MainApp->setWindowTitle(QApplication::translate("MainApp", "MazeStudio", 0));
        generatorGroupBox->setTitle(QApplication::translate("MainApp", "Generator", 0));
        mazeWidthLabel->setText(QApplication::translate("MainApp", "Maze Width", 0));
        mazeHeightLabel->setText(QApplication::translate("MainApp", "Maze Height", 0));
        algorithmsLabel->setText(QApplication::translate("MainApp", "Algorithms", 0));
        algorithmsComboBox->clear();
        algorithmsComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainApp", "Hunt And Kill", 0)
        );
        generateButton->setText(QApplication::translate("MainApp", "Generate", 0));
        saveButton->setText(QApplication::translate("MainApp", "Save", 0));
        viewerGroupBox->setTitle(QApplication::translate("MainApp", "Viewer", 0));
        viewerLoadButton->setText(QApplication::translate("MainApp", "Load (Vertex)", 0));
        editorGroupBox->setTitle(QApplication::translate("MainApp", "Editor", 0));
        editorLoadButton->setText(QApplication::translate("MainApp", "Load", 0));
    } // retranslateUi

};

namespace Ui {
    class MainApp: public Ui_MainApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINAPP_H
