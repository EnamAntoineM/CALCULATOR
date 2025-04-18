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
    // Create a central widget
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Create buttons
    QPushButton *btnOk = new QPushButton("OK", this);
    QPushButton *btnCancel = new QPushButton("Cancel", this);

    // Create a layout and add buttons
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(btnOk);
    layout->addWidget(btnCancel);

    // Set the layout to the central widget
    centralWidget->setLayout(layout);

    // Connect signals to slots
    connect(btnOk, &QPushButton::clicked, this, &MainWindow::on_btnOk_Clicked);
    connect(btnCancel, &QPushButton::clicked, this, &MainWindow::on_btnCancel_Clicked);
}

MainWindow::~MainWindow()
{
    // No need to delete child widgets manually; Qt handles it
}

void MainWindow::on_btnOk_Clicked()
{
    qDebug() << "Ok button clicked";
}

void MainWindow::on_btnCancel_Clicked()
{
    qDebug() << "Cancel button clicked";
}
