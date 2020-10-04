#include "AWindow.h"
#include <QtWidgets/QAbstractButton>

MessageBoxAboutWindow::MessageBoxAboutWindow(QWidget* parent)
{
	this->setWindowTitle(QString::fromUtf16(u"Window Title"));

	this->setStandardButtons(QMessageBox::Ok);
	this->setIcon(QMessageBox::Icon::Information);

	this->setFont(QFont("Microsoft YaHei"));
	this->setText(QString::fromUtf16(u"\n\n\nCopyright (C) 2020 "));

	this->Title->setText(QString::fromUtf16(u"Title"));
	this->Title->resize(2147483647, 100);
	this->Title->setFont(QFont("Microsoft YaHei", 12));
	this->Title->move(80, -20);
	this->Title->setStyleSheet("* {color:rgb(0, 51, 153)}");
}

void MessageBoxAboutWindow::setTitle(const QString title)
{
	this->Title->setText(title);
}

void MessageBoxAboutWindow::setButtonText(const QString button_text)
{
	QAbstractButton* button = this->button(QMessageBox::Ok);
	button->setText(button_text);
}

void MessageBoxAboutWindow::setButtonFont(const QFont font)
{
	QAbstractButton* button = this->button(QMessageBox::Ok);
	button->setFont(font);
}

void MessageBoxAboutWindow::setButtonStyleSheet(const QString style_sheet)
{
	QAbstractButton* button = this->button(QMessageBox::Ok);
	button->setStyleSheet(style_sheet);
}

QLabel* MessageBoxAboutWindow::title()
{
	return this->Title;
}
