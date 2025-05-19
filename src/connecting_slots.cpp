/*
** MY_PROJECT, 2025
** connecting_slots.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::setupConnections(void)
{
    connect(AC, &QPushButton::clicked, this, &MainWindow::on_AC_clicked);
    connect(open_bracket, &QPushButton::clicked, this, &MainWindow::on_open_bracket_clicked);
    connect(closing_bracket, &QPushButton::clicked, this, &MainWindow::on_closing_bracket_clicked);
    connect(PI, &QPushButton::clicked, this, &MainWindow::on_PI_clicked);
    connect(backspace, &QPushButton::clicked, this, &MainWindow::on_backspace_clicked);
    connect(squrt, &QPushButton::clicked, this, &MainWindow::on_squrt_clicked);
    connect(sine, &QPushButton::clicked, this, &MainWindow::on_sine_clicked);
    connect(cosine, &QPushButton::clicked, this, &MainWindow::on_cosine_clicked);
    connect(divide, &QPushButton::clicked, this, &MainWindow::on_divide_clicked);
    connect(seven, &QPushButton::clicked, this, &MainWindow::on_seven_clicked);
    connect(eight, &QPushButton::clicked, this, &MainWindow::on_eight_clicked);
    connect(nine, &QPushButton::clicked, this, &MainWindow::on_nine_clicked);
    connect(six, &QPushButton::clicked, this, &MainWindow::on_six_clicked);
    connect(five, &QPushButton::clicked, this, &MainWindow::on_five_clicked);
    connect(four, &QPushButton::clicked, this, &MainWindow::on_four_clicked);
    connect(three, &QPushButton::clicked, this, &MainWindow::on_three_clicked);
    connect(two, &QPushButton::clicked, this, &MainWindow::on_two_clicked);
    connect(one, &QPushButton::clicked, this, &MainWindow::on_one_clicked);
    connect(zero, &QPushButton::clicked, this, &MainWindow::on_zero_clicked);
    connect(multiply, &QPushButton::clicked, this, &MainWindow::on_multiply_clicked);
    connect(substract, &QPushButton::clicked, this, &MainWindow::on_substract_clicked);
    connect(add, &QPushButton::clicked, this, &MainWindow::on_add_clicked);
    connect(calculate, &QPushButton::clicked, this, &MainWindow::on_calculate_clicked);
    connect(calculation, &QLineEdit::returnPressed, this, &MainWindow::on_calculate_clicked);
    connect(dot, &QPushButton::clicked, this, &MainWindow::on_dot_clicked);
    connect(modulus, &QPushButton::clicked, this, &MainWindow::on_modulus_clicked);
    connect(exponent, &QPushButton::clicked, this, &MainWindow::on_exponent_clicked);
}