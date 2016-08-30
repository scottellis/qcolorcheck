#include "qcolorcheck.h"
#include <QtWidgets/QApplication>

#ifdef Q_OS_LINUX
#define SHOW_FULLSCREEN
#endif

int main(int argc, char *argv[])
{
	QApplication *app = new QApplication(argc, argv);
	QColorCheck *w = new QColorCheck;

#ifdef SHOW_FULLSCREEN
	w->showFullScreen();
#else
	w->show();
#endif

	return app->exec();
}
