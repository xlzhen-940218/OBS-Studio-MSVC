#pragma once

#include <QTWidgets/QSlider>
#include <QTGui/QMouseEvent>

class BalanceSlider : public QSlider {
	Q_OBJECT

public:
	inline BalanceSlider(QWidget *parent = 0) : QSlider(parent) {}

signals:
	void doubleClicked();

protected:
	void mouseDoubleClickEvent(QMouseEvent *event)
	{
		emit doubleClicked();
		event->accept();
	}
};
