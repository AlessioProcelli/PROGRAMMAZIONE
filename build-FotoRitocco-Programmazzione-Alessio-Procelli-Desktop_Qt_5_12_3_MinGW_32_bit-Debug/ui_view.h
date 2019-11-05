/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "graphicsview.h"

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QAction *actionOpen;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSave;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *edgeDetection;
    QPushButton *blur;
    QPushButton *sharpening;
    QPushButton *contrast;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *chooseColor;
    QPushButton *pink;
    QPushButton *red;
    QPushButton *white;
    QPushButton *green;
    QPushButton *brown;
    QPushButton *black;
    QPushButton *gray;
    QPushButton *blue;
    QPushButton *orange;
    QLabel *currentColor;
    QPushButton *paint;
    QSpinBox *thickness;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *rectangle;
    QPushButton *triangle;
    QPushButton *line;
    QLabel *label;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    GraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *leftRotate;
    QPushButton *reverse;
    QPushButton *rightRotate;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QString::fromUtf8("View"));
        View->resize(1294, 795);
        View->setAutoFillBackground(true);
        View->setStyleSheet(QString::fromUtf8(""));
        actionOpen = new QAction(View);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionUndo = new QAction(View);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(View);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionSave = new QAction(View);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralWidget = new QWidget(View);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(130, 10, 841, 31));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        edgeDetection = new QPushButton(gridLayoutWidget_3);
        edgeDetection->setObjectName(QString::fromUtf8("edgeDetection"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        edgeDetection->setFont(font);

        horizontalLayout->addWidget(edgeDetection);

        blur = new QPushButton(gridLayoutWidget_3);
        blur->setObjectName(QString::fromUtf8("blur"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        blur->setFont(font1);

        horizontalLayout->addWidget(blur);

        sharpening = new QPushButton(gridLayoutWidget_3);
        sharpening->setObjectName(QString::fromUtf8("sharpening"));
        sharpening->setFont(font1);

        horizontalLayout->addWidget(sharpening);

        contrast = new QPushButton(gridLayoutWidget_3);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        contrast->setFont(font1);

        horizontalLayout->addWidget(contrast);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 80, 121, 121));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        chooseColor = new QPushButton(gridLayoutWidget_2);
        chooseColor->setObjectName(QString::fromUtf8("chooseColor"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icon/Icon/multicolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        chooseColor->setIcon(icon);

        gridLayout->addWidget(chooseColor, 3, 1, 1, 1);

        pink = new QPushButton(gridLayoutWidget_2);
        pink->setObjectName(QString::fromUtf8("pink"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icon/Icon/Pink.png"), QSize(), QIcon::Normal, QIcon::Off);
        pink->setIcon(icon1);

        gridLayout->addWidget(pink, 2, 0, 1, 1);

        red = new QPushButton(gridLayoutWidget_2);
        red->setObjectName(QString::fromUtf8("red"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icon/Icon/red.png"), QSize(), QIcon::Normal, QIcon::Off);
        red->setIcon(icon2);

        gridLayout->addWidget(red, 0, 0, 1, 1);

        white = new QPushButton(gridLayoutWidget_2);
        white->setObjectName(QString::fromUtf8("white"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icon/Icon/Bianco.png"), QSize(), QIcon::Normal, QIcon::Off);
        white->setIcon(icon3);

        gridLayout->addWidget(white, 1, 0, 1, 1);

        green = new QPushButton(gridLayoutWidget_2);
        green->setObjectName(QString::fromUtf8("green"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icon/Icon/Green.png"), QSize(), QIcon::Normal, QIcon::Off);
        green->setIcon(icon4);

        gridLayout->addWidget(green, 0, 1, 1, 1);

        brown = new QPushButton(gridLayoutWidget_2);
        brown->setObjectName(QString::fromUtf8("brown"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icon/Icon/brown.png"), QSize(), QIcon::Normal, QIcon::Off);
        brown->setIcon(icon5);

        gridLayout->addWidget(brown, 2, 2, 1, 1);

        black = new QPushButton(gridLayoutWidget_2);
        black->setObjectName(QString::fromUtf8("black"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icon/Icon/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        black->setIcon(icon6);

        gridLayout->addWidget(black, 2, 1, 1, 1);

        gray = new QPushButton(gridLayoutWidget_2);
        gray->setObjectName(QString::fromUtf8("gray"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icon/Icon/Gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        gray->setIcon(icon7);

        gridLayout->addWidget(gray, 1, 2, 1, 1);

        blue = new QPushButton(gridLayoutWidget_2);
        blue->setObjectName(QString::fromUtf8("blue"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Icon/Icon/Blu.png"), QSize(), QIcon::Normal, QIcon::Off);
        blue->setIcon(icon8);

        gridLayout->addWidget(blue, 0, 2, 1, 1);

        orange = new QPushButton(gridLayoutWidget_2);
        orange->setObjectName(QString::fromUtf8("orange"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Icon/Icon/arancione.png"), QSize(), QIcon::Normal, QIcon::Off);
        orange->setIcon(icon9);

        gridLayout->addWidget(orange, 1, 1, 1, 1);

        currentColor = new QLabel(centralWidget);
        currentColor->setObjectName(QString::fromUtf8("currentColor"));
        currentColor->setGeometry(QRect(0, 240, 121, 41));
        paint = new QPushButton(centralWidget);
        paint->setObjectName(QString::fromUtf8("paint"));
        paint->setGeometry(QRect(0, 50, 121, 28));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        paint->setFont(font2);
        thickness = new QSpinBox(centralWidget);
        thickness->setObjectName(QString::fromUtf8("thickness"));
        thickness->setGeometry(QRect(0, 360, 131, 41));
        QFont font3;
        font3.setPointSize(10);
        thickness->setFont(font3);
        thickness->setFocusPolicy(Qt::NoFocus);
        thickness->setWrapping(false);
        thickness->setAlignment(Qt::AlignCenter);
        thickness->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        thickness->setProperty("showGroupSeparator", QVariant(false));
        thickness->setMinimum(1);
        thickness->setSingleStep(2);
        thickness->setStepType(QAbstractSpinBox::DefaultStepType);
        thickness->setValue(10);
        thickness->setDisplayIntegerBase(10);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 440, 131, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rectangle = new QPushButton(verticalLayoutWidget);
        rectangle->setObjectName(QString::fromUtf8("rectangle"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Icon/Icon/Square.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectangle->setIcon(icon10);

        verticalLayout->addWidget(rectangle);

        triangle = new QPushButton(verticalLayoutWidget);
        triangle->setObjectName(QString::fromUtf8("triangle"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Icon/Icon/Triangle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        triangle->setIcon(icon11);
        triangle->setIconSize(QSize(35, 40));
        triangle->setCheckable(false);

        verticalLayout->addWidget(triangle);

        line = new QPushButton(verticalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Icon/Icon/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        line->setIcon(icon12);
        line->setIconSize(QSize(80, 60));

        verticalLayout->addWidget(line);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 330, 121, 21));
        QFont font4;
        font4.setPointSize(12);
        label->setFont(font4);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 215, 121, 21));
        label_2->setFont(font4);
        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(130, 40, 841, 661));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        graphicsView = new GraphicsView(verticalLayoutWidget_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout_2->addWidget(graphicsView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        leftRotate = new QPushButton(verticalLayoutWidget_2);
        leftRotate->setObjectName(QString::fromUtf8("leftRotate"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Icon/Icon/LeftRotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftRotate->setIcon(icon13);
        leftRotate->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(leftRotate);

        reverse = new QPushButton(verticalLayoutWidget_2);
        reverse->setObjectName(QString::fromUtf8("reverse"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Icon/Icon/reverse.png"), QSize(), QIcon::Normal, QIcon::Off);
        reverse->setIcon(icon14);
        reverse->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(reverse);

        rightRotate = new QPushButton(verticalLayoutWidget_2);
        rightRotate->setObjectName(QString::fromUtf8("rightRotate"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Icon/Icon/rightRotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightRotate->setIcon(icon15);
        rightRotate->setIconSize(QSize(30, 30));

        horizontalLayout_2->addWidget(rightRotate);


        verticalLayout_2->addLayout(horizontalLayout_2);

        View->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(View);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1294, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        View->setMenuBar(menuBar);
        mainToolBar = new QToolBar(View);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        View->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(View);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        View->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionUndo);
        menuFile->addAction(actionRedo);
        menuFile->addAction(actionSave);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QMainWindow *View)
    {
        View->setWindowTitle(QApplication::translate("View", "View", nullptr));
        actionOpen->setText(QApplication::translate("View", "Open", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("View", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionUndo->setText(QApplication::translate("View", "Undo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("View", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("View", "Redo", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("View", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("View", "Save", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("View", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        edgeDetection->setText(QApplication::translate("View", "EdgeDetection", nullptr));
        blur->setText(QApplication::translate("View", "Blur", nullptr));
        sharpening->setText(QApplication::translate("View", "Sharpening", nullptr));
        contrast->setText(QApplication::translate("View", "Contrast", nullptr));
        chooseColor->setText(QString());
        pink->setText(QString());
        red->setText(QString());
        white->setText(QString());
        green->setText(QString());
        brown->setText(QString());
        black->setText(QString());
        gray->setText(QString());
        blue->setText(QString());
        orange->setText(QString());
        currentColor->setText(QApplication::translate("View", "Color", nullptr));
        paint->setText(QApplication::translate("View", "Paint", nullptr));
        thickness->setSuffix(QApplication::translate("View", "px", nullptr));
        thickness->setPrefix(QString());
        rectangle->setText(QString());
        triangle->setText(QString());
        line->setText(QString());
        label->setText(QApplication::translate("View", "Thickness", nullptr));
        label_2->setText(QApplication::translate("View", "Current Color", nullptr));
        leftRotate->setText(QString());
        reverse->setText(QString());
        rightRotate->setText(QString());
        menuFile->setTitle(QApplication::translate("View", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
