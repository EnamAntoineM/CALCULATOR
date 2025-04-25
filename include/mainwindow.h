/*
** MY_PROJECT, 2025
** mainwindow.h
** PASSWD_MANAGER
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
    #include "my.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QLineEdit *calculation;
    QString to_calculate;
    QString to_display;
    QJSValue output;
    QJSEngine engine;
    QLineEdit *result;
    QVBoxLayout *primary;
    QHBoxLayout *res_cal;
    QHBoxLayout *h1;
    QGridLayout *g;

    /////////////////////////FOR H2////////////////////////////////
        QPushButton *AC;
        QPushButton *open_bracket;
        QPushButton *closing_bracket;
        QPushButton *PI;
        QPushButton *backspace;
        QPushButton *squared;
        QPushButton *squrt;
        QPushButton *sine;
        QPushButton *cosine;
        QPushButton *divide;
        QPushButton *seven;
        QPushButton *eight;
        QPushButton *nine;
        QPushButton *six;
        QPushButton *five;
        QPushButton *four;
        QPushButton *three;
        QPushButton *two;
        QPushButton *one;
        QPushButton *zero;
        QPushButton *multiply;
        QPushButton *substract;
        QPushButton *add;
        QPushButton *calculate;
        QPushButton *dot;
        QPushButton *modulus;
        QPushButton *loga;
        QPushButton *ln;
        QPushButton *exponent;
        QPushButton *e;
    //////////////////////////////////////////////////////////////
    void setg(void);
    void allow_full_expand(void);
    void initialize_btn(void);
    void set_rounded_edge(void);
    void setupConnections(void);

private slots:
    void on_AC_clicked();
    void on_open_bracket_clicked();
    void on_closing_bracket_clicked();
    void on_PI_clicked();
    void on_backspace_clicked();
    void on_squared_clicked();
    void on_squrt_clicked();
    void on_sine_clicked();
    void on_cosine_clicked();
    void on_divide_clicked();
    void on_seven_clicked();
    void on_eight_clicked();
    void on_nine_clicked();
    void on_six_clicked();
    void on_five_clicked();
    void on_four_clicked();
    void on_three_clicked();
    void on_two_clicked();
    void on_one_clicked();
    void on_zero_clicked();
    void on_multiply_clicked();
    void on_substract_clicked();
    void on_add_clicked();
    void on_calculate_clicked();
    void on_dot_clicked();
    void on_modulus_clicked();
    void on_loga_clicked();
    void on_ln_clicked();
    void on_exponent_clicked();
    void on_e_clicked();
};
#endif // MAINWINDOW_H
