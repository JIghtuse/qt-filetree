#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    model(new QFileSystemModel)
{
    ui->setupUi(this);
    model->setRootPath(QDir::currentPath());
    ui->fileTreeView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}
