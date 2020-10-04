#pragma once

#include "awindow_global.h"
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QLabel>

class AWINDOW_EXPORT MessageBoxAboutWindow : public QMessageBox
{
    Q_OBJECT

public:
    MessageBoxAboutWindow(QWidget* parent);

public:
    QLabel* Title = new QLabel(this);

public:
    void setTitle(const QString title);
    void setButtonText(const QString button_text);
    void setButtonFont(const QFont font);
    void setButtonStyleSheet(const QString style_sheet);

public:
    QLabel* title();
};
