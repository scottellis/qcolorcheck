#ifndef QCOLORCHECK_H
#define QCOLORCHECK_H

#include <QtWidgets/QMainWindow>
#include <qlabel.h>

class QColorCheck : public QMainWindow
{
	Q_OBJECT

public:
	QColorCheck(QWidget *parent = 0);

protected:
	void timerEvent(QTimerEvent *);

private:
	void layoutWindow();

	int m_timeout;
	QLabel *m_timerLabel;
};

#endif // QCOLORCHECK_H
