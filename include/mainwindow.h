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
    QLineEdit *tline1;
    QLineEdit *tline2;
    QString text1;
    QString text2;
    QVBoxLayout *primary;
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

    QPlainTextEdit *result;
    void setg(void);
    void allow_full_expand_for_QPBTN(void);
    void initialize_btn(void);
    void set_rounded_edge(void);

private slots:
    //void on_btnOk_Clicked();
    //void on_btnCancel_Clicked();
};
#endif // MAINWINDOW_H
