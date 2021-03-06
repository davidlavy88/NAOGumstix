#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>

int winNumber = 0;

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->textX->clear();
	ui->textY->clear();
	ui->textTheta->clear();
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_Enter_clicked()
{
	if (winNumber == 0) {
		winNumber++;
	}
	else if (winNumber == 1) {
		winNumber++;
	}
	else if (winNumber == 2) {
		winNumber = 0;
	}
}

// Configure each button for setting numbers on the text edit box
void MainWindow::on_Num1_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("1");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("1");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("1");
	}
}

void MainWindow::on_Num2_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("2");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("2");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("2");
	}
}

void MainWindow::on_Num3_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("3");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("3");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("3");
	}
}

void MainWindow::on_Num4_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("4");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("4");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("4");
	}
}

void MainWindow::on_Num5_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("5");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("5");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("5");
	}
}

void MainWindow::on_Num6_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("6");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("6");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("6");
	}
}


void MainWindow::on_Num7_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("7");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("7");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("7");
	}
}

void MainWindow::on_Num8_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("8");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("8");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("8");
	}
}

void MainWindow::on_Num9_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("9");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("9");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("9");
	}
}

void MainWindow::on_Num0_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText("0");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText("0");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText("0");
	}
}

void MainWindow::on_NumDot_clicked()
{
	if(winNumber==0){
		ui->textX->moveCursor(QTextCursor::End);
		ui->textX->insertPlainText(".");
	}else if(winNumber==1){
		ui->textY->moveCursor(QTextCursor::End);
		ui->textY->insertPlainText(".");
	}else if(winNumber==2){
		ui->textTheta->moveCursor(QTextCursor::End);
		ui->textTheta->insertPlainText(".");
	}
}

void MainWindow::on_Delete_clicked()
{
	if(winNumber==0){
	ui->textX->textCursor().deletePreviousChar();
	}else if(winNumber==1){
	ui->textY->textCursor().deletePreviousChar();
	}else if(winNumber==2){
	ui->textTheta->textCursor().deletePreviousChar();
	}
}

void MainWindow::on_Reset_clicked()
{
	ui->textX->clear();
	ui->textY->clear();
	ui->textTheta->clear();
	winNumber = 0;
}

// Set the command buttons
void MainWindow::on_Walk_clicked()
{
	FILE *fp;
	char msg[40];
	const char ch ='.';
	QString xcoor, ycoor, thetacoor;
	xcoor = ui->textX->toPlainText();
	ycoor = ui->textY->toPlainText();
	thetacoor = ui->textTheta->toPlainText();
	char* xt = new char[xcoor.length()+1];
	char* yt = new char[ycoor.length()+1];
	char* tt = new char[thetacoor.length()+1];
	strcpy(xt, xcoor.toStdString().c_str());
	strcpy(yt, ycoor.toStdString().c_str());
	strcpy(tt, thetacoor.toStdString().c_str());
	if(strchr(xt,46)==strrchr(xt,46)&&strchr(yt,46)==strrchr(yt,46)&&strchr(tt,46)==strrchr(tt,46))//testing to see if multiple decimal places (invalid input)
	{
		printf("single decimal or no decimal\n");
		if(strcmp(xt,"")==0)
		{
			strcpy(xt,"0");
		}
		if(strcmp(yt,"")==0)
		{
			strcpy(yt,"0");
		}
		if(strcmp(tt,"")==0)
		{
			strcpy(tt,"0");
		}
		sprintf(msg, "/home/root/client walk,%s,%s,%s,", xt, yt, tt);
		printf("%s\n",msg);
		system(msg);
	}

}

void MainWindow::on_Stand_clicked()
{
	int pFile;
	FILE *fp;
	char msg[40];
	sprintf(msg, "/home/root/client stand,");
	system(msg);	

}

void MainWindow::on_Sit_clicked()
{
	int pFile;
	FILE *fp;
	char msg[40];
	sprintf(msg, "/home/root/client sit,");
	system(msg);

}

void MainWindow::on_Speak_clicked()
{
	int pFile;
	FILE *fp;
	char msg[40];
	sprintf(msg, "/home/root/client speak,");
	system(msg);

}

void MainWindow::on_textX_textChanged()
{
	if (ui->textX->toPlainText().length() > 4)
		ui->textX->textCursor().deletePreviousChar();
}

void MainWindow::on_textY_textChanged()
{
	if (ui->textY->toPlainText().length() > 4)
		ui->textY->textCursor().deletePreviousChar();
}

void MainWindow::on_textTheta_textChanged()
{
	if (ui->textTheta->toPlainText().length() > 4)
		ui->textTheta->textCursor().deletePreviousChar();
}
