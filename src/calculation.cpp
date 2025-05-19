/*
** MY_PROJECT, 2025
** calculation.cpp
** CALCULATOR
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "../include/mainwindow.h"

void MainWindow::on_calculate_clicked(void)
{
    to_calculate = calculation -> text();
    //Handling of particular cases
    to_calculate.replace("π", QString::number(M_PI));
    to_calculate.replace("sin", "Math.sin");
    to_calculate.replace("cos", "Math.cos");
    to_calculate.replace("log", "Math.log10");
    to_calculate.replace("ln", "Math.log");
    to_calculate.replace("√", "Math.sqrt");
    to_calculate.replace("^", "**");
    output = engine.evaluate(to_calculate);
    to_display = QString::number(output.toNumber());

    if (!output.isError()) {
        result -> setText(to_display);
    } else {
        result -> setText("Try again !!");
    }
}
