#include <QApplication>
#include <QMainWindow>

#include "server.hxx"

int main (int argc, char* argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
  QApplication app(argc, argv);

  app.setApplicationName(QStringLiteral("qirc"));
  app.setApplicationDisplayName(QLatin1String("IRC for Qt"));
  app.setApplicationVersion(QLatin1String("git"));
  app.setOrganizationDomain(QLatin1String("com.rhg135.qirc.widgets"));

  QMainWindow w;
  // w.setWindowTitle(app.applicationName());
  w.setMinimumSize(800, 450);
  w.show();

  return app.exec();
}
