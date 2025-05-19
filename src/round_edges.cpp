/*
** MY_PROJECT, 2025
** round_edges.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::set_rounded_edge(void)
{
    QString buttonStyle = "QPushButton {"
    "border: 2px solid #8f8f91;" // Border color
    "border-radius: 10px;"       // Rounded corners (10px radius)
    "font-size: 18pt;"
    "padding: 5px;"              // Padding inside the button
    "background-color: #FFFFFF" // Button background color
    "}";
    QString qlineedit = "QLineEdit {"
    "border: 2px solid #8f8f91;" // Border color
    "border-radius: 10px;"       // Rounded corners (10px radius)
    "font-size: 18pt;"
    "background-color: #FFFFFF;" // Button background color
    "}";

    calculation -> setStyleSheet(qlineedit);
    result -> setStyleSheet(qlineedit);
    AC->setStyleSheet(buttonStyle);
    open_bracket->setStyleSheet(buttonStyle);
    closing_bracket->setStyleSheet(buttonStyle);
    PI->setStyleSheet(buttonStyle);
    backspace->setStyleSheet(buttonStyle);
    squrt->setStyleSheet(buttonStyle);
    sine->setStyleSheet(buttonStyle);
    cosine->setStyleSheet(buttonStyle);
    divide->setStyleSheet(buttonStyle);
    seven->setStyleSheet(buttonStyle);
    eight->setStyleSheet(buttonStyle);
    nine->setStyleSheet(buttonStyle);
    six->setStyleSheet(buttonStyle);
    five->setStyleSheet(buttonStyle);
    four->setStyleSheet(buttonStyle);
    three->setStyleSheet(buttonStyle);
    two->setStyleSheet(buttonStyle);
    one->setStyleSheet(buttonStyle);
    zero->setStyleSheet(buttonStyle);
    multiply->setStyleSheet(buttonStyle);
    substract->setStyleSheet(buttonStyle);
    add->setStyleSheet(buttonStyle);
    calculate->setStyleSheet(buttonStyle);
    dot->setStyleSheet(buttonStyle);
    modulus->setStyleSheet(buttonStyle);
    exponent->setStyleSheet(buttonStyle);
    open_bracket->setStyleSheet(buttonStyle);
}