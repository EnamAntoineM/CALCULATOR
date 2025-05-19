/*
** MY_PROJECT, 2025
** connection_defs.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::on_backspace_clicked(void)
{
    to_calculate = calculation -> text();
    std::string operated = to_calculate.toStdString();
    if (!operated.empty())
        operated.pop_back();
        to_calculate = QString::fromStdString(operated);
        calculation -> setText(to_calculate);
}

void MainWindow::on_zero_clicked(void)
{
    calculation -> insert("0");
}

void MainWindow::on_one_clicked(void)
{
    calculation -> insert("1");
}

void MainWindow::on_two_clicked(void)
{
    calculation -> insert("2");
}

void MainWindow::on_three_clicked(void)
{
    calculation -> insert("3");
}

void MainWindow::on_four_clicked(void)
{
    calculation -> insert("4");
}

void MainWindow::on_five_clicked(void)
{
    calculation -> insert("5");
}

void MainWindow::on_six_clicked(void)
{
    calculation -> insert("6");
}

void MainWindow::on_seven_clicked(void)
{
    calculation -> insert("7");
}

void MainWindow::on_eight_clicked(void)
{
    calculation -> insert("8");
}

void MainWindow::on_nine_clicked(void)
{
    calculation -> insert("9");
}

void MainWindow::on_add_clicked(void)
{
    calculation -> insert("+");
}

void MainWindow::on_substract_clicked(void)
{
    calculation -> insert("-");
}

void MainWindow::on_multiply_clicked(void)
{
    calculation -> insert("*");
}

void MainWindow::on_divide_clicked(void)
{
    calculation -> insert("/");
}

void MainWindow::on_dot_clicked(void)
{
    calculation -> insert(".");
}

void MainWindow::on_modulus_clicked(void)
{
    calculation -> insert("%");
}

void MainWindow::on_exponent_clicked(void)
{
    calculation -> insert("^");
}

void MainWindow::on_open_bracket_clicked(void)
{
    calculation -> insert("(");
}

void MainWindow::on_closing_bracket_clicked(void)
{
    calculation -> insert(")");
}

void MainWindow::on_PI_clicked(void)
{
    calculation -> insert("π");
}

void MainWindow::on_sine_clicked(void)
{
    calculation -> insert("sin");
}

void MainWindow::on_cosine_clicked(void)
{
    calculation -> insert("cos");
}

void MainWindow::on_squrt_clicked(void)
{
    calculation -> insert("√");
}

void MainWindow::on_AC_clicked(void)
{
    calculation -> clear();
}
