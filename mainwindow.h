#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QAction>
#include <QColorDialog>
#include "scribblearea.h"
#include "usersettings.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void changingColor();

private:
    Ui::MainWindow *ui;

    UserSettings &userSettings;

    ScribbleArea *scribbleArea;

    QSize colorPixmapSize = QSize(20, 20);
    QAction *changeColorAction;
};
#endif // MAINWINDOW_H
