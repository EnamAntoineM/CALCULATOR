/*
** MY_PROJECT, 2025
** expanding_btns.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::allow_full_expand(void)
{
    seven->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    eight->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    nine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    six->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    five->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    four->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    three->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    two->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    one->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    zero->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    multiply->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    substract->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    add->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    calculate->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    dot->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    modulus->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    AC->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    open_bracket->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    closing_bracket->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    PI->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    exponent->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    backspace->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    squrt->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    cosine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    divide->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    calculation->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    calculation->setMaximumHeight(400);
    result->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    result->setMaximumHeight(400);
    result->setMaximumWidth(250);
    calculation -> setAlignment(Qt::AlignCenter);
    result -> setAlignment(Qt::AlignCenter);
}
