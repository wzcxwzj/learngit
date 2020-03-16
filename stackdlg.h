#ifndef STACKDLG_H
#define STACKDLG_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QLabel>
#include <QTreeView>
#include <QStandardItemModel>
#include <QStandardItem>

class StackDlg : public QDialog
{
    Q_OBJECT

public:
    StackDlg(QWidget *parent = 0);
    ~StackDlg();
private:
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1, *label2,*label3;
//    QTreeView *root;


};

#endif // STACKDLG_H
