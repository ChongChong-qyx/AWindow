#include "test.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget* widget = new QWidget();

    MessageBoxAboutWindow* test_window = new MessageBoxAboutWindow(widget);
    test_window->setWindowTitle(QString::fromUtf16(u"About"));
    test_window->setText(QString::fromUtf16(u"\n\n\nCopyright (C) 2020 Yixiang Qi\t\t"));
    test_window->setTitle(QString::fromUtf16(u"About"));
    test_window->setButtonText(QString::fromUtf16(u"Okay"));
    QLabel* test_window_title = test_window->title();
    test_window_title->setText(QString::fromUtf16(u"About AWindow Test Application"));

    widget->show();
    test_window->exec();
    return a.exec();
}
