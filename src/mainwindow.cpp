/*
** MY_PROJECT, 2025
** mainwindow.cpp
** PASSWD_MANAGER
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    primary = new QVBoxLayout(centralWidget);
    g1 = new QGridLayout();
    g2 = new QGridLayout();
    g3 = new QGridLayout();
    calculation = new QLineEdit();
    result = new QLineEdit();
    res_cal = new QHBoxLayout();
    h = new QHBoxLayout();

    setCentralWidget(centralWidget);
    resize(492, 848);
    result -> setReadOnly(true);
    initialize_btn();
    set_rounded_edge();
    setg();
    allow_full_expand();

    //Stretch factor
    h -> addLayout(g1, 7);
    h -> addLayout(g3, 2);
    h -> addLayout(g2, 2);

    res_cal -> addWidget(calculation);
    res_cal -> addWidget(result);
    primary -> addLayout(res_cal);
    primary -> addLayout(h);
    // Set the layout to the central widget
    centralWidget->setLayout(primary);
    // Connect signals to slots
    setupConnections();
}

MainWindow::~MainWindow() {}
