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
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
#include <QCheckBox>
#include <QRadioButton>
#include <QSpinBox>
#include <QSlider>
#include <QProgressBar>
#include <QDateEdit>
#include <QTimeEdit>
#include <QDateTimeEdit>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QTableWidget>
#include <QTreeWidget>
#include <QTabWidget>
#include <QStackedWidget>
#include <QToolBar>
#include <QStatusBar>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QShortcut>
#include <QKeySequence>
#include <QTimer>
#include <QScreen>
#include <QPixmap>
#include <QImage>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QFont>
#include <QPalette>
#include <QStyle>
#include <QStyleOption>
#include <QStyleFactory>
#include <QApplication>
#include <QClipboard>
#include <QMimeData>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnOk_Clicked();
    void on_btnCancel_Clicked();

};
#endif // MAINWINDOW_H
