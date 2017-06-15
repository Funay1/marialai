/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *VoutA_Slider;
    QLabel *label_Id;
    QLabel *label_temp;
    QLabel *label_frames;
    QLabel *label_error_frames;
    QLabel *id;
    QLabel *temp;
    QLabel *frames;
    QLabel *error_frames;
    QLabel *scen;
    QLabel *L_VoutC;
    QLabel *gainLabel;
    QLabel *L_VoutA;
    QSlider *VoutC_Slider;
    QSlider *gainSlider;
    QSlider *offsetSlider;
    QLabel *offsetLabel;
    QPushButton *getCalibButton;
    QPushButton *setCalibButton;
    QSlider *VoutD_Slider;
    QLabel *L_VoutD;
    QLabel *labelDinamic;
    QLabel *minmaxlabel;
    QSlider *VoutE_Slider;
    QLabel *L_VoutE;
    QSlider *horizontalSlider_3;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *clearButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *scaleBar;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1031, 777);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VoutA_Slider = new QSlider(centralWidget);
        VoutA_Slider->setObjectName(QStringLiteral("VoutA_Slider"));
        VoutA_Slider->setGeometry(QRect(30, 600, 891, 29));
        VoutA_Slider->setMinimum(0);
        VoutA_Slider->setMaximum(3000);
        VoutA_Slider->setValue(1000);
        VoutA_Slider->setOrientation(Qt::Horizontal);
        label_Id = new QLabel(centralWidget);
        label_Id->setObjectName(QStringLiteral("label_Id"));
        label_Id->setGeometry(QRect(800, 10, 21, 16));
        label_temp = new QLabel(centralWidget);
        label_temp->setObjectName(QStringLiteral("label_temp"));
        label_temp->setGeometry(QRect(800, 30, 121, 17));
        label_frames = new QLabel(centralWidget);
        label_frames->setObjectName(QStringLiteral("label_frames"));
        label_frames->setGeometry(QRect(800, 50, 51, 17));
        label_error_frames = new QLabel(centralWidget);
        label_error_frames->setObjectName(QStringLiteral("label_error_frames"));
        label_error_frames->setGeometry(QRect(800, 70, 91, 17));
        id = new QLabel(centralWidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(830, 10, 67, 17));
        temp = new QLabel(centralWidget);
        temp->setObjectName(QStringLiteral("temp"));
        temp->setGeometry(QRect(920, 30, 67, 17));
        frames = new QLabel(centralWidget);
        frames->setObjectName(QStringLiteral("frames"));
        frames->setGeometry(QRect(860, 50, 67, 17));
        error_frames = new QLabel(centralWidget);
        error_frames->setObjectName(QStringLiteral("error_frames"));
        error_frames->setGeometry(QRect(890, 70, 67, 17));
        scen = new QLabel(centralWidget);
        scen->setObjectName(QStringLiteral("scen"));
        scen->setGeometry(QRect(10, 0, 768, 576));
        scen->setMaximumSize(QSize(768, 576));
        scen->setAutoFillBackground(true);
        L_VoutC = new QLabel(centralWidget);
        L_VoutC->setObjectName(QStringLiteral("L_VoutC"));
        L_VoutC->setGeometry(QRect(930, 630, 91, 17));
        gainLabel = new QLabel(centralWidget);
        gainLabel->setObjectName(QStringLiteral("gainLabel"));
        gainLabel->setGeometry(QRect(940, 420, 71, 16));
        L_VoutA = new QLabel(centralWidget);
        L_VoutA->setObjectName(QStringLiteral("L_VoutA"));
        L_VoutA->setGeometry(QRect(930, 600, 91, 17));
        VoutC_Slider = new QSlider(centralWidget);
        VoutC_Slider->setObjectName(QStringLiteral("VoutC_Slider"));
        VoutC_Slider->setGeometry(QRect(30, 630, 891, 29));
        VoutC_Slider->setMaximum(3000);
        VoutC_Slider->setValue(1423);
        VoutC_Slider->setOrientation(Qt::Horizontal);
        gainSlider = new QSlider(centralWidget);
        gainSlider->setObjectName(QStringLiteral("gainSlider"));
        gainSlider->setGeometry(QRect(790, 420, 141, 29));
        gainSlider->setMinimum(1);
        gainSlider->setMaximum(65535);
        gainSlider->setValue(32768);
        gainSlider->setSliderPosition(32768);
        gainSlider->setOrientation(Qt::Horizontal);
        offsetSlider = new QSlider(centralWidget);
        offsetSlider->setObjectName(QStringLiteral("offsetSlider"));
        offsetSlider->setEnabled(true);
        offsetSlider->setGeometry(QRect(790, 450, 141, 29));
        offsetSlider->setMinimum(-255);
        offsetSlider->setMaximum(255);
        offsetSlider->setOrientation(Qt::Horizontal);
        offsetLabel = new QLabel(centralWidget);
        offsetLabel->setObjectName(QStringLiteral("offsetLabel"));
        offsetLabel->setEnabled(true);
        offsetLabel->setGeometry(QRect(940, 450, 71, 17));
        getCalibButton = new QPushButton(centralWidget);
        getCalibButton->setObjectName(QStringLiteral("getCalibButton"));
        getCalibButton->setGeometry(QRect(810, 110, 99, 27));
        setCalibButton = new QPushButton(centralWidget);
        setCalibButton->setObjectName(QStringLiteral("setCalibButton"));
        setCalibButton->setGeometry(QRect(810, 160, 99, 27));
        VoutD_Slider = new QSlider(centralWidget);
        VoutD_Slider->setObjectName(QStringLiteral("VoutD_Slider"));
        VoutD_Slider->setGeometry(QRect(30, 660, 891, 29));
        VoutD_Slider->setMinimum(0);
        VoutD_Slider->setMaximum(3000);
        VoutD_Slider->setValue(2210);
        VoutD_Slider->setOrientation(Qt::Horizontal);
        L_VoutD = new QLabel(centralWidget);
        L_VoutD->setObjectName(QStringLiteral("L_VoutD"));
        L_VoutD->setGeometry(QRect(930, 660, 91, 16));
        labelDinamic = new QLabel(centralWidget);
        labelDinamic->setObjectName(QStringLiteral("labelDinamic"));
        labelDinamic->setGeometry(QRect(810, 300, 181, 16));
        minmaxlabel = new QLabel(centralWidget);
        minmaxlabel->setObjectName(QStringLiteral("minmaxlabel"));
        minmaxlabel->setGeometry(QRect(810, 330, 191, 16));
        VoutE_Slider = new QSlider(centralWidget);
        VoutE_Slider->setObjectName(QStringLiteral("VoutE_Slider"));
        VoutE_Slider->setGeometry(QRect(29, 690, 891, 29));
        VoutE_Slider->setMaximum(3000);
        VoutE_Slider->setValue(2925);
        VoutE_Slider->setOrientation(Qt::Horizontal);
        L_VoutE = new QLabel(centralWidget);
        L_VoutE->setObjectName(QStringLiteral("L_VoutE"));
        L_VoutE->setGeometry(QRect(930, 690, 91, 16));
        horizontalSlider_3 = new QSlider(centralWidget);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(29, 720, 891, 29));
        horizontalSlider_3->setMaximum(65535);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(940, 730, 49, 14));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(900, 500, 51, 24));
        spinBox->setMaximum(16);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 500, 101, 21));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(810, 210, 101, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(930, 110, 89, 25));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 160, 89, 25));
        scaleBar = new QLabel(centralWidget);
        scaleBar->setObjectName(QStringLiteral("scaleBar"));
        scaleBar->setGeometry(QRect(930, 300, 51, 71));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1031, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_Id->setText(QApplication::translate("MainWindow", "id:", Q_NULLPTR));
        label_temp->setText(QApplication::translate("MainWindow", "T ambient deg. C:", Q_NULLPTR));
        label_frames->setText(QApplication::translate("MainWindow", "frames:", Q_NULLPTR));
        label_error_frames->setText(QApplication::translate("MainWindow", "lost packet:", Q_NULLPTR));
        id->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        temp->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        frames->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        error_frames->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        scen->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        L_VoutC->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        gainLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        L_VoutA->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        offsetLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        getCalibButton->setText(QApplication::translate("MainWindow", "GetCalib", Q_NULLPTR));
        setCalibButton->setText(QApplication::translate("MainWindow", "SetCalib", Q_NULLPTR));
        L_VoutD->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        labelDinamic->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        minmaxlabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        L_VoutE->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "ThermApp MODE:", Q_NULLPTR));
        clearButton->setText(QApplication::translate("MainWindow", "ClearCalib", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Gravar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Parar", Q_NULLPTR));
        scaleBar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
