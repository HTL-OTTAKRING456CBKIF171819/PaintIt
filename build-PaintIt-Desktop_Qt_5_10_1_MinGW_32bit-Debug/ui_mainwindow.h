/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_ffnen;
    QAction *action_Speichern_unter;
    QAction *action_Beenden;
    QAction *action_Optionen;
    QAction *action_ber_PaintIt;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QFrame *frame;
    QToolButton *tbtnLine;
    QToolButton *tbtnStamp;
    QToolButton *tbtnBrush;
    QToolButton *tbtnFill;
    QToolButton *tbtnText;
    QToolButton *tbtnSpray;
    QToolButton *tbtnForegroundColor;
    QToolButton *tbtnBackgroundColor;
    QToolButton *tbtnSwapColors;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox_LineWidth;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_Radius;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menu_Datei;
    QMenu *menu_Extras;
    QMenu *menu_Hilfe;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1164, 835);
        action_ffnen = new QAction(MainWindow);
        action_ffnen->setObjectName(QStringLiteral("action_ffnen"));
        action_Speichern_unter = new QAction(MainWindow);
        action_Speichern_unter->setObjectName(QStringLiteral("action_Speichern_unter"));
        action_Beenden = new QAction(MainWindow);
        action_Beenden->setObjectName(QStringLiteral("action_Beenden"));
        action_Optionen = new QAction(MainWindow);
        action_Optionen->setObjectName(QStringLiteral("action_Optionen"));
        action_ber_PaintIt = new QAction(MainWindow);
        action_ber_PaintIt->setObjectName(QStringLiteral("action_ber_PaintIt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 1024, 768));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(1040, 10, 111, 321));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-color: rgb(171, 171, 171);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        tbtnLine = new QToolButton(frame);
        tbtnLine->setObjectName(QStringLiteral("tbtnLine"));
        tbtnLine->setGeometry(QRect(10, 10, 30, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/Line-Tool-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnLine->setIcon(icon);
        tbtnStamp = new QToolButton(frame);
        tbtnStamp->setObjectName(QStringLiteral("tbtnStamp"));
        tbtnStamp->setGeometry(QRect(40, 10, 30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/stamp-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnStamp->setIcon(icon1);
        tbtnBrush = new QToolButton(frame);
        tbtnBrush->setObjectName(QStringLiteral("tbtnBrush"));
        tbtnBrush->setGeometry(QRect(70, 10, 30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/brush.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnBrush->setIcon(icon2);
        tbtnFill = new QToolButton(frame);
        tbtnFill->setObjectName(QStringLiteral("tbtnFill"));
        tbtnFill->setGeometry(QRect(10, 40, 30, 30));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/fill-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnFill->setIcon(icon3);
        tbtnText = new QToolButton(frame);
        tbtnText->setObjectName(QStringLiteral("tbtnText"));
        tbtnText->setGeometry(QRect(40, 40, 30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/Editing-Text-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnText->setIcon(icon4);
        tbtnSpray = new QToolButton(frame);
        tbtnSpray->setObjectName(QStringLiteral("tbtnSpray"));
        tbtnSpray->setGeometry(QRect(70, 40, 30, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/spray.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnSpray->setIcon(icon5);
        tbtnForegroundColor = new QToolButton(frame);
        tbtnForegroundColor->setObjectName(QStringLiteral("tbtnForegroundColor"));
        tbtnForegroundColor->setGeometry(QRect(10, 270, 20, 20));
        tbtnBackgroundColor = new QToolButton(frame);
        tbtnBackgroundColor->setObjectName(QStringLiteral("tbtnBackgroundColor"));
        tbtnBackgroundColor->setGeometry(QRect(30, 290, 20, 20));
        tbtnSwapColors = new QToolButton(frame);
        tbtnSwapColors->setObjectName(QStringLiteral("tbtnSwapColors"));
        tbtnSwapColors->setGeometry(QRect(30, 270, 20, 20));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/swap.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnSwapColors->setIcon(icon6);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1040, 340, 120, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox_LineWidth = new QSpinBox(verticalLayoutWidget);
        spinBox_LineWidth->setObjectName(QStringLiteral("spinBox_LineWidth"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_LineWidth->sizePolicy().hasHeightForWidth());
        spinBox_LineWidth->setSizePolicy(sizePolicy);
        spinBox_LineWidth->setMaximum(100);
        spinBox_LineWidth->setValue(1);

        horizontalLayout->addWidget(spinBox_LineWidth);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_Radius = new QSpinBox(verticalLayoutWidget);
        spinBox_Radius->setObjectName(QStringLiteral("spinBox_Radius"));
        sizePolicy.setHeightForWidth(spinBox_Radius->sizePolicy().hasHeightForWidth());
        spinBox_Radius->setSizePolicy(sizePolicy);
        spinBox_Radius->setMaximum(100);
        spinBox_Radius->setValue(20);

        horizontalLayout_2->addWidget(spinBox_Radius);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1164, 21));
        menu_Datei = new QMenu(menuBar);
        menu_Datei->setObjectName(QStringLiteral("menu_Datei"));
        menu_Extras = new QMenu(menuBar);
        menu_Extras->setObjectName(QStringLiteral("menu_Extras"));
        menu_Hilfe = new QMenu(menuBar);
        menu_Hilfe->setObjectName(QStringLiteral("menu_Hilfe"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Datei->menuAction());
        menuBar->addAction(menu_Extras->menuAction());
        menuBar->addAction(menu_Hilfe->menuAction());
        menu_Datei->addAction(action_ffnen);
        menu_Datei->addAction(action_Speichern_unter);
        menu_Datei->addSeparator();
        menu_Datei->addAction(action_Beenden);
        menu_Extras->addAction(action_Optionen);
        menu_Hilfe->addAction(action_ber_PaintIt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_ffnen->setText(QApplication::translate("MainWindow", "&\303\226ffnen", nullptr));
        action_Speichern_unter->setText(QApplication::translate("MainWindow", "&Speichern unter", nullptr));
        action_Beenden->setText(QApplication::translate("MainWindow", "&Beenden", nullptr));
        action_Optionen->setText(QApplication::translate("MainWindow", "&Optionen", nullptr));
        action_ber_PaintIt->setText(QApplication::translate("MainWindow", "&\303\234ber PaintIt", nullptr));
        tbtnLine->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnStamp->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnBrush->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnFill->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnText->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnSpray->setText(QApplication::translate("MainWindow", "...", nullptr));
        tbtnForegroundColor->setText(QString());
        tbtnBackgroundColor->setText(QString());
        tbtnSwapColors->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Linienst\303\244rke:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Radius:", nullptr));
        menu_Datei->setTitle(QApplication::translate("MainWindow", "&Datei", nullptr));
        menu_Extras->setTitle(QApplication::translate("MainWindow", "&Extras", nullptr));
        menu_Hilfe->setTitle(QApplication::translate("MainWindow", "&Hilfe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H