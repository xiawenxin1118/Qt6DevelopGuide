#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_btnCurrentDateTime_clicked();

    void on_btnQDebugTime_clicked();

    void on_btnQDebugDate_clicked();

    void on_btnSetTimeString_clicked();

    void on_calendarWidget_selectionChanged();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
