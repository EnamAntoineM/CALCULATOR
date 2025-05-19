/*
** MY_PROJECT, 2025
** set_grid_layout.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::setg(void)
{
    // First row (0, i)
    g1 -> addWidget(AC, 0, 0);
    g1 -> addWidget(sine, 0, 1);
    g1 -> addWidget(cosine, 0, 2);
    // Second row (1, i)
    g1 -> addWidget(squrt, 1, 0);
    g1 -> addWidget(open_bracket, 1, 1);
    g1 -> addWidget(closing_bracket, 1, 2);
    // Third row (2, i)
    g1 -> addWidget(seven, 2, 0);
    g1 -> addWidget(eight, 2, 1);
    g1 -> addWidget(nine, 2, 2);
    // Fourth row (3, i)
    g1 -> addWidget(four, 3, 0);
    g1 -> addWidget(five, 3, 1);
    g1 -> addWidget(six, 3, 2);
    // Fifth row (4, i)
    g1 -> addWidget(one, 4, 0);
    g1 -> addWidget(two, 4, 1);
    g1 -> addWidget(three, 4, 2);
    // Sixth row (5, i)
    g1 -> addWidget(modulus, 5, 0);
    g1 -> addWidget(zero, 5, 1);
    g1 -> addWidget(dot, 5, 2);

    g2 -> addWidget(backspace, 0, 0);
    g2 -> addWidget(multiply, 1, 0);
    g2 -> addWidget(substract, 2, 0);
    g2 -> addWidget(calculate, 3, 0);

    g3 -> addWidget(exponent, 0, 0);
    g3 -> addWidget(divide, 1, 0);
    g3 -> addWidget(add, 2, 0);
    g3 -> addWidget(PI, 3, 0);

}
