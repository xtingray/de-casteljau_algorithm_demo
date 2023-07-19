/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "casteljaucanvas.h"
#include "colortoolbutton.h"
#include "listview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClear;
    QAction *actionAnimate;
    QAction *action_Quit;
    QAction *action_About;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    CasteljauCanvas *casteljauWidget;
    QSlider *progressSlider;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuEdit;
    QMenu *menuExtras;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *pointGroupBox;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    ColorToolButton *pointsColorBtn;
    QLabel *label_6;
    ColorToolButton *pointsFillBtn;
    QCheckBox *connectPointsCheckBox;
    QLabel *label_7;
    QDoubleSpinBox *pointRadius;
    QGroupBox *bezierCurveGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    ColorToolButton *bezierCurveColorBtn;
    QLabel *label_2;
    QDoubleSpinBox *penWidthSpinBox;
    QCheckBox *drawIntermediateLines;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_3;
    QDoubleSpinBox *animationResolutionSpinBox;
    QLabel *label_4;
    QSpinBox *animationDurationSpinBox;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_2;
    ListView *pointView;
    QLabel *posLabel;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1150, 687);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionAnimate = new QAction(MainWindow);
        actionAnimate->setObjectName(QString::fromUtf8("actionAnimate"));
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        casteljauWidget = new CasteljauCanvas(centralWidget);
        casteljauWidget->setObjectName(QString::fromUtf8("casteljauWidget"));
        casteljauWidget->setStyleSheet(QString::fromUtf8("border: 1px solid gray; background-color: white;"));

        verticalLayout->addWidget(casteljauWidget);

        progressSlider = new QSlider(centralWidget);
        progressSlider->setObjectName(QString::fromUtf8("progressSlider"));
        progressSlider->setMaximum(999);
        progressSlider->setOrientation(Qt::Horizontal);
        progressSlider->setInvertedAppearance(false);
        progressSlider->setInvertedControls(false);
        progressSlider->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(progressSlider);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1150, 18));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuExtras = new QMenu(menuBar);
        menuExtras->setObjectName(QString::fromUtf8("menuExtras"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QString::fromUtf8("dockWidget_2"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        pointGroupBox = new QGroupBox(dockWidgetContents_2);
        pointGroupBox->setObjectName(QString::fromUtf8("pointGroupBox"));
        pointGroupBox->setCheckable(true);
        formLayout_4 = new QFormLayout(pointGroupBox);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_5 = new QLabel(pointGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        pointsColorBtn = new ColorToolButton(pointGroupBox);
        pointsColorBtn->setObjectName(QString::fromUtf8("pointsColorBtn"));
        pointsColorBtn->setIconSize(QSize(14, 14));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, pointsColorBtn);

        label_6 = new QLabel(pointGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_6);

        pointsFillBtn = new ColorToolButton(pointGroupBox);
        pointsFillBtn->setObjectName(QString::fromUtf8("pointsFillBtn"));
        pointsFillBtn->setIconSize(QSize(14, 14));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, pointsFillBtn);

        connectPointsCheckBox = new QCheckBox(pointGroupBox);
        connectPointsCheckBox->setObjectName(QString::fromUtf8("connectPointsCheckBox"));
        connectPointsCheckBox->setChecked(true);

        formLayout_4->setWidget(5, QFormLayout::LabelRole, connectPointsCheckBox);

        label_7 = new QLabel(pointGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_7);

        pointRadius = new QDoubleSpinBox(pointGroupBox);
        pointRadius->setObjectName(QString::fromUtf8("pointRadius"));
        pointRadius->setMinimum(0.500000000000000);
        pointRadius->setMaximum(8.000000000000000);
        pointRadius->setSingleStep(0.500000000000000);
        pointRadius->setValue(2.000000000000000);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, pointRadius);


        verticalLayout_3->addWidget(pointGroupBox);

        bezierCurveGroupBox = new QGroupBox(dockWidgetContents_2);
        bezierCurveGroupBox->setObjectName(QString::fromUtf8("bezierCurveGroupBox"));
        bezierCurveGroupBox->setCheckable(true);
        formLayout_2 = new QFormLayout(bezierCurveGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(bezierCurveGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        bezierCurveColorBtn = new ColorToolButton(bezierCurveGroupBox);
        bezierCurveColorBtn->setObjectName(QString::fromUtf8("bezierCurveColorBtn"));
        bezierCurveColorBtn->setStyleSheet(QString::fromUtf8(""));
        bezierCurveColorBtn->setIconSize(QSize(14, 14));
        bezierCurveColorBtn->setAutoRaise(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, bezierCurveColorBtn);

        label_2 = new QLabel(bezierCurveGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        penWidthSpinBox = new QDoubleSpinBox(bezierCurveGroupBox);
        penWidthSpinBox->setObjectName(QString::fromUtf8("penWidthSpinBox"));
        penWidthSpinBox->setDecimals(1);
        penWidthSpinBox->setMinimum(0.500000000000000);
        penWidthSpinBox->setMaximum(5.000000000000000);
        penWidthSpinBox->setSingleStep(0.500000000000000);
        penWidthSpinBox->setValue(2.000000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, penWidthSpinBox);


        verticalLayout_3->addWidget(bezierCurveGroupBox);

        drawIntermediateLines = new QCheckBox(dockWidgetContents_2);
        drawIntermediateLines->setObjectName(QString::fromUtf8("drawIntermediateLines"));
        drawIntermediateLines->setChecked(true);

        verticalLayout_3->addWidget(drawIntermediateLines);

        groupBox = new QGroupBox(dockWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        animationResolutionSpinBox = new QDoubleSpinBox(groupBox);
        animationResolutionSpinBox->setObjectName(QString::fromUtf8("animationResolutionSpinBox"));
        animationResolutionSpinBox->setDecimals(3);
        animationResolutionSpinBox->setMinimum(0.001000000000000);
        animationResolutionSpinBox->setMaximum(0.200000000000000);
        animationResolutionSpinBox->setSingleStep(0.001000000000000);
        animationResolutionSpinBox->setValue(0.005000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, animationResolutionSpinBox);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        animationDurationSpinBox = new QSpinBox(groupBox);
        animationDurationSpinBox->setObjectName(QString::fromUtf8("animationDurationSpinBox"));
        animationDurationSpinBox->setMinimum(500);
        animationDurationSpinBox->setMaximum(10000);
        animationDurationSpinBox->setSingleStep(500);
        animationDurationSpinBox->setValue(3000);

        formLayout->setWidget(1, QFormLayout::FieldRole, animationDurationSpinBox);


        verticalLayout_3->addWidget(groupBox);

        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_2);
        dockWidget_4 = new QDockWidget(MainWindow);
        dockWidget_4->setObjectName(QString::fromUtf8("dockWidget_4"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pointView = new ListView(dockWidgetContents_4);
        pointView->setObjectName(QString::fromUtf8("pointView"));

        verticalLayout_2->addWidget(pointView);

        posLabel = new QLabel(dockWidgetContents_4);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setMinimumSize(QSize(0, 20));
        posLabel->setMaximumSize(QSize(16777215, 20));
        posLabel->setBaseSize(QSize(0, 20));

        verticalLayout_2->addWidget(posLabel);

        dockWidget_4->setWidget(dockWidgetContents_4);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_4);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuExtras->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menu_File->addAction(action_Quit);
        menuEdit->addAction(actionClear);
        menuExtras->addAction(actionAnimate);
        mainToolBar->addAction(actionClear);
        mainToolBar->addAction(actionAnimate);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "De-Casteljau's Algorithm Demo", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAnimate->setText(QCoreApplication::translate("MainWindow", "Animate", nullptr));
#if QT_CONFIG(shortcut)
        actionAnimate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuExtras->setTitle(QCoreApplication::translate("MainWindow", "Animation", nullptr));
        dockWidget_2->setWindowTitle(QCoreApplication::translate("MainWindow", "Visual Properties", nullptr));
        pointGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Draw Points", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        pointsColorBtn->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Fill", nullptr));
        pointsFillBtn->setText(QString());
        connectPointsCheckBox->setText(QCoreApplication::translate("MainWindow", "Connect Points", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "radius", nullptr));
        bezierCurveGroupBox->setTitle(QCoreApplication::translate("MainWindow", "Draw Bezier Curve", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        bezierCurveColorBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Pen Width", nullptr));
        penWidthSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " px", nullptr));
        drawIntermediateLines->setText(QCoreApplication::translate("MainWindow", "Draw Intermediate Bezier Lines", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Animation", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Resolution", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "duration", nullptr));
        animationDurationSpinBox->setSuffix(QCoreApplication::translate("MainWindow", " ms", nullptr));
        dockWidget_4->setWindowTitle(QCoreApplication::translate("MainWindow", "Points", nullptr));
        posLabel->setText(QCoreApplication::translate("MainWindow", "Pos: 0,0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
