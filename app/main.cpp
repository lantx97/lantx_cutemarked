#include "mainwindow.h"

#include <QApplication>
#include <QCommandLineParser>
#include <QLibraryInfo>
#include <QTranslator>

#ifdef Q_OS_WIN
#include <QDir>
#include <QFileInfo>
#include <QSettings>

static void associateFileTypes(const QStringList &fileTypes)
{

}
#endif

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    app.setApplicationName("lantx_cutemarked");
    app.setApplicationDisplayName("lantx_cutemarked");
    app.setApplicationVersion("10.10.10");

// 定义windows系统下文件后缀
#ifdef Q_OS_WIN
    QStringList fileType;
    fileType << ".md" << ".markdown" << "mdown";
    associateFileTypes(fileType);
#endif

    MainWindow w;
    w.show();
    return app.exec();
}
