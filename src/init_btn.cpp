/*
** MY_PROJECT, 2025
** init_btn.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/


#include "../include/mainwindow.h"

void MainWindow::initialize_btn(void)
{
    AC = new QPushButton("C");
    open_bracket = new QPushButton("(");
    closing_bracket = new QPushButton(")");
    PI = new QPushButton("π");
    backspace = new QPushButton("⌫");
    squrt = new QPushButton("√");
    sine = new QPushButton("sin");
    cosine = new QPushButton("cos");
    divide = new QPushButton("/");
    seven = new QPushButton("7");
    eight = new QPushButton("8");
    nine = new QPushButton("9");
    six = new QPushButton("6");
    five = new QPushButton("5");
    four = new QPushButton("4");
    three = new QPushButton("3");
    two = new QPushButton("2");
    one = new QPushButton("1");
    zero = new QPushButton("0");
    multiply = new QPushButton("×");
    substract = new QPushButton("-");
    add = new QPushButton("+");
    calculate = new QPushButton("=");
    dot = new QPushButton(".");
    modulus = new QPushButton("%");
    exponent = new QPushButton("^");
}