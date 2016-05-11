#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_Enter_clicked();

    void on_Num1_clicked();

    void on_Num2_clicked();

    void on_Num3_clicked();

    void on_Num4_clicked();

    void on_Num5_clicked();

    void on_Num6_clicked();

    void on_Num7_clicked();

    void on_Num8_clicked();

    void on_Num9_clicked();

    void on_Num0_clicked();

    void on_NumDot_clicked();

    void on_Delete_clicked();

    void on_Reset_clicked();

    void on_Walk_clicked();

    void on_Stand_clicked();

    void on_Sit_clicked();

    void on_Speak_clicked();

    void on_textX_textChanged();

    void on_textY_textChanged();

    void on_textTheta_textChanged();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
