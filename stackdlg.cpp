#include "stackdlg.h"
#include <QHBoxLayout>

#include <QTreeWidgetItem>
StackDlg::StackDlg(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle(tr("ADAMOS"));

//    root = new QTreeView(this);
    //root->setTextElideMode(Qt::);

/*
    QStandardItemModel* model = new QStandardItemModel(this);
    model->setHorizontalHeaderLabels(QStringList()<<QStringLiteral("项目名")<<QStringLiteral("信息"));
    QStandardItem* itemProject = new QStandardItem(m_publicIconMap[QStringLiteral("treeItem_Project")],QStringLiteral("项目"));
    model->appendRow(itemProject);
*/


//    QTreeWidgetItem child1 = new QTreeWidgetItem(&root);
//    child1.setText(0,tr("child1"));
    //child1.setText();
 //   child1.setText(1,tr("ios"));

 //   QTreeWidgetItem child2 = new QTreeWidgetItem(&root);
 //   child2.setText(0,tr("child2"));
 //   child2.setText(1,tr("JAVA"));

    list = new QListWidget(this);
    list->insertItem(0,tr("Home"));
    list->insertItem(1,tr("DEVICES"));
    list->insertItem(2,tr("Registration"));
    list->insertItem(3,tr("All devices"));
    list->insertItem(2,tr("Map"));
    list->insertItem(2,tr("Simulators"));
    list->insertItem(2,tr("Service monitoring"));
    list->insertItem(2,tr("OVERVIEWS"));
    list->insertItem(2,tr("Alarms"));
    list->insertItem(2,tr("Device control"));

    //list->insertIt;
    //QListWidgetItem
    //QStringList

    label1 = new QLabel(tr("你真棒！"));
    label2 = new QLabel(tr("我自己知道啊！"));
    label3 = new QLabel(tr("不用你提醒!"));

    stack = new QStackedWidget(this);
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    QHBoxLayout *mainlayout = new QHBoxLayout(this);
    mainlayout->setMargin(5);
    mainlayout->addSpacing(5);
    mainlayout->addWidget(list,1);
    mainlayout->addWidget(stack,0,Qt::AlignHCenter);                //addLayout(stack,);
    //mainlayout->addWidget(model,3);
    mainlayout->setStretchFactor(list,1);
    mainlayout->setStretchFactor(stack,3);

    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));
   // connect()
}

StackDlg::~StackDlg()
{

}
