#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class QTreeWidgetItem;
class QLabel;
class QSpinBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    enum treeColNum {colItem = 0,colItemType = 1, colDate};
    enum treeItemType {itTopItem = 1001,itGroupItem,itImageItem};

    void changeItemCaption(QTreeWidgetItem *item);

    QLabel *labFileName;
    QLabel *labNodeText;
    QSpinBox *spinRatio;
    QPixmap x_pixmap;
    float x_ratio;

    void displayImage(QTreeWidgetItem *item);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actAddFolder_triggered();

    void on_actAddFiles_triggered();

    void on_actPointDelete_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actPointIterate_triggered();

    void on_actZoomFitW_triggered();

    void on_actZoomFitV_triggered();

    void on_actZoomRealSize_triggered();

    void on_actZoomIn_triggered();

    void on_actZoomOut_triggered();

    void on_actDockVisible_triggered(bool checked);

    void on_actDockFloat_triggered(bool checked);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
