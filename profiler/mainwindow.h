#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionOpen_File_triggered();

    void on_treeView_doubleClicked(const QModelIndex &index);

    void on_gprofButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *standardModel;
    QString exeName;
    QString exePath;

    void setUpPath(QStandardItem *root, QString path);
    void expandMainFunc(QString filepath);
    QModelIndex getMatch(QModelIndex item, QString match);
    void openFile(QString name);

};

#endif // MAINWINDOW_H
