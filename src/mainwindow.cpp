/*
** MY_PROJECT, 2025
** mainwindow.cpp
** PASSWD_MANAGER
** Author: Enam KODJOH-KPAKPASSOU
** Email: eakodjoh-kpakpassou@st.ug.edu.gh
** File description:
*/

#include "mainwindow.h"
/*
void MainWindow::setline_edit(QVBoxLayout *layout)
{
    tline1 = new QLineEdit("Enter the length of the first side", this);
    tline2 = new QLineEdit("Enter the length of the second side", this);

    //Enable clear buttons
    tline1 -> setClearButtonEnabled(true);
    tline2 -> setClearButtonEnabled(true);
    //Sets the initial to be centered in the QlineEdit
    tline1 -> setAlignment(Qt::AlignCenter);
    tline2 -> setAlignment(Qt::AlignCenter);
    //Sets the QlineEdit to be ready for input
    tline1 -> setFocus();
    result -> setReadOnly(true);
    //To Add to the window
    layout -> addWidget(tline1);
    layout -> addWidget(tline2);
}

void MainWindow::on_btnOk_Clicked()
{
    bool success1;
    bool success2;
    double side1;
    double side2;
    double side3;

    result -> setAlignment(Qt::AlignCenter);
    //Get the text from the QlineEdits
    text1 = tline1 -> text();
    text2 = tline2 -> text();
    //Convert to number in this use-case and check if the conversion was successful using booleans
    side1 = text1.toDouble(&success1);
    side2 = text2.toDouble(&success2);
    //Proceed to calculations
    if (success1 && success2) {
        side3 = sqrt((side1 * side1) + (side2 * side2));
        result -> setText(QString::number(side3));
    } else {
        result -> setText("Invalid value, please try again !");
    }
}
*/
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget *centralWidget = new QWidget(this);
    primary = new QVBoxLayout(centralWidget);
    h1 = new QHBoxLayout();
    g = new QGridLayout();
    calculation = new QLineEdit();
    result = new QLineEdit();
    res_cal = new QHBoxLayout();

    QString qlineedit = "QLineEdit {"
    "border: 2px solid #8f8f91;" // Border color
    "border-radius: 10px;"       // Rounded corners (10px radius)
    "font-size: 18pt;"
    "background-color: #FFFFFF;" // Button background color
    "}";
    
    calculation -> setStyleSheet(qlineedit);
    result -> setStyleSheet(qlineedit);

    setCentralWidget(centralWidget);
    resize(492, 848);
    result -> setReadOnly(true);
    initialize_btn();
    set_rounded_edge();
    setg();
    allow_full_expand();

    res_cal -> addWidget(calculation);
    res_cal -> addWidget(result);
    primary -> addLayout(res_cal);
    primary -> addLayout(h1);
    primary -> addLayout(g);
    // Set the layout to the central widget
    centralWidget->setLayout(primary);
    // Connect signals to slots
    setupConnections();
}

void MainWindow::set_rounded_edge(void)
{
    QString buttonStyle = "QPushButton {"
    "border: 2px solid #8f8f91;" // Border color
    "border-radius: 10px;"       // Rounded corners (10px radius)
    "font-size: 18pt;"
    "padding: 5px;"              // Padding inside the button
    "background-color: #FFFFFF" // Button background color
    "}";

    AC->setStyleSheet(buttonStyle);
    AC->setStyleSheet(buttonStyle);
    open_bracket->setStyleSheet(buttonStyle);
    closing_bracket->setStyleSheet(buttonStyle);
    PI->setStyleSheet(buttonStyle);
    backspace->setStyleSheet(buttonStyle);
    squared->setStyleSheet(buttonStyle);
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
    loga->setStyleSheet(buttonStyle);
    ln->setStyleSheet(buttonStyle);
    exponent->setStyleSheet(buttonStyle);
    e->setStyleSheet(buttonStyle);
    open_bracket->setStyleSheet(buttonStyle);
}

void MainWindow::initialize_btn(void)
{
    AC = new QPushButton("C");
    open_bracket = new QPushButton("(");
    closing_bracket = new QPushButton(")");
    PI = new QPushButton("π");
    backspace = new QPushButton("⌫");
    squared = new QPushButton("²");
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
    loga = new QPushButton("log");
    ln = new QPushButton("ln");
    exponent = new QPushButton("^");
    e = new QPushButton("e");
}

void MainWindow::setg(void)
{
    // First row (0, i)
    g -> addWidget(squrt, 0, 0);
    g -> addWidget(squared, 0, 1);
    g -> addWidget(sine, 0, 2);
    g -> addWidget(cosine, 0, 3);
    g -> addWidget(backspace, 0, 4);
    // Second row (1, i)
    g -> addWidget(AC, 1, 0);
    g -> addWidget(PI, 1, 1);
    g -> addWidget(open_bracket, 1, 2);
    g -> addWidget(closing_bracket, 1, 3);
    g -> addWidget(divide, 1, 4);
    // Third row (2, i)
    g -> addWidget(seven, 2, 0);
    g -> addWidget(eight, 2, 1);
    g -> addWidget(nine, 2, 2);
    g -> addWidget(exponent, 2, 3);
    g -> addWidget(multiply, 2, 4);
    // Fourth row (3, i)
    g -> addWidget(four, 3, 0);
    g -> addWidget(five, 3, 1);
    g -> addWidget(six, 3, 2);
    g -> addWidget(loga, 3, 3);
    g -> addWidget(substract, 3, 4);
    // Fifth row (4, i)
    g -> addWidget(one, 4, 0);
    g -> addWidget(two, 4, 1);
    g -> addWidget(three, 4, 2);
    g -> addWidget(ln, 4, 3);
    g -> addWidget(add, 4, 4);
    // Sixth row (5, i)
    g -> addWidget(modulus, 5, 0);
    g -> addWidget(zero, 5, 1);
    g -> addWidget(dot, 5, 2);
    g -> addWidget(e, 5, 3);
    g -> addWidget(calculate, 5, 4);
}

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
    backspace->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    squared->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    squrt->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    cosine->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    divide->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    loga->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ln->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    exponent->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    e->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    calculation->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    calculation->setMaximumHeight(400);
    result->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    result->setMaximumHeight(400);
    result->setMaximumWidth(250);
    calculation -> setAlignment(Qt::AlignCenter);
    result -> setAlignment(Qt::AlignCenter);
}

void MainWindow::setupConnections(void)
{
    connect(AC, &QPushButton::clicked, this, &MainWindow::on_AC_clicked);
    connect(open_bracket, &QPushButton::clicked, this, &MainWindow::on_open_bracket_clicked);
    connect(closing_bracket, &QPushButton::clicked, this, &MainWindow::on_closing_bracket_clicked);
    connect(PI, &QPushButton::clicked, this, &MainWindow::on_PI_clicked);
    connect(backspace, &QPushButton::clicked, this, &MainWindow::on_backspace_clicked);
    connect(squared, &QPushButton::clicked, this, &MainWindow::on_squared_clicked);
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
    connect(dot, &QPushButton::clicked, this, &MainWindow::on_dot_clicked);
    connect(modulus, &QPushButton::clicked, this, &MainWindow::on_modulus_clicked);
    connect(loga, &QPushButton::clicked, this, &MainWindow::on_loga_clicked);
    connect(ln, &QPushButton::clicked, this, &MainWindow::on_ln_clicked);
    connect(exponent, &QPushButton::clicked, this, &MainWindow::on_exponent_clicked);
    connect(e, &QPushButton::clicked, this, &MainWindow::on_e_clicked);
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

void MainWindow::on_e_clicked(void)
{
    calculation -> insert("e");
}

void MainWindow::on_loga_clicked(void)
{
    calculation -> insert("log");
}

void MainWindow::on_ln_clicked(void)
{
    calculation -> insert("ln");
}

void MainWindow::on_sine_clicked(void)
{
    calculation -> insert("sin");
}

void MainWindow::on_cosine_clicked(void)
{
    calculation -> insert("cos");
}

void MainWindow::on_squared_clicked(void)
{
    calculation -> insert("²");
}

void MainWindow::on_squrt_clicked(void)
{
    calculation -> insert("√");
}

void MainWindow::on_AC_clicked(void)
{
    calculation -> clear();
}

void MainWindow::on_calculate_clicked(void)
{
    to_calculate = calculation -> text();
    //Handling of particular cases
    to_calculate.replace("π", QString::number(M_PI));
    to_calculate.replace("e", QString::number(M_E));
    to_calculate.replace("sin", "Math.sin");
    to_calculate.replace("cos", "Math.cos");
    to_calculate.replace("log", "Math.log10");
    to_calculate.replace("ln", "Math.log");
    to_calculate.replace("√", "Math.sqrt");
    output = engine.evaluate(to_calculate);
    to_display = QString::number(output.toNumber());

    if (!output.isError()) {
        result -> setText(to_display);
    } else {
        result -> setText("Try again !!");
    }
}

void MainWindow::on_backspace_clicked(void)
{
    to_calculate = calculation -> text();
    std::string operated = to_calculate.toStdString();
    if (!operated.empty())
        operated.pop_back();
        to_calculate = QString::fromStdString(operated);
        calculation -> setText(to_calculate);
}

MainWindow::~MainWindow() {}