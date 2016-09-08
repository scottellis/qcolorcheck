#include <qboxlayout.h>
#include <qlabel.h>
#include <qtimer.h>

#include "qcolorcheck.h"

#define DEFAULT_TIMEOUT_SECONDS 15

QColorCheck::QColorCheck(QWidget *parent)
	: QMainWindow(parent)
{
	m_timeout = DEFAULT_TIMEOUT_SECONDS;

	layoutWindow();

	startTimer(1000);
}

void QColorCheck::timerEvent(QTimerEvent *)
{
	m_timeout--;

	if (m_timeout < 1)
		close();
	else
		m_timerLabel->setText(QString::number(m_timeout));
}

void QColorCheck::layoutWindow()
{
	QVBoxLayout *layout = new QVBoxLayout;
	QLabel *label;

    int end = height() < 500 ? 1 : 2;

	for (int i = 0; i < end; i++) {
		label = new QLabel("Red");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: red; color: white");
		layout->addWidget(label);

		label = new QLabel("Green");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: green; color: white");
		layout->addWidget(label);

		label = new QLabel("Blue");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: blue; color: white");
		layout->addWidget(label);
	}

	m_timerLabel = new QLabel(QString::number(m_timeout));
	m_timerLabel->setAlignment(Qt::AlignCenter);
	m_timerLabel->setStyleSheet("background-color: white; color: black");
	layout->addWidget(m_timerLabel);

	for (int i = 0; i < end; i++) {
		label = new QLabel("Red");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: red; color: white");
		layout->addWidget(label);

		label = new QLabel("Green");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: green; color: white");
		layout->addWidget(label);

		label = new QLabel("Blue");
		label->setAlignment(Qt::AlignCenter);
		label->setStyleSheet("background-color: blue; color: white");
		layout->addWidget(label);
	}

	QWidget *widget = new QWidget;
	widget->setLayout(layout);
	widget->setStyleSheet("background-color: black");

	setCentralWidget(widget);			
}