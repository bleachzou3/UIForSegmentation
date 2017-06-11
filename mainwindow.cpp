#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->SelectInputVtiFile,SIGNAL(clicked(bool)),this,SLOT(selectVtiFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::selectVtiFile()
{
    inputVtiFileName = QFileDialog::getOpenFileName(this, tr("Open Vti"), ".", tr("Vti Files(*.vti)"));
    ui->inputFileNameLabel->setText(inputVtiFileName);
}
