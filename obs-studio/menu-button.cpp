#include <QTWidgets/QMenu>
#include <QTGui/QKeyEvent>
#include <QTGui/QMouseEvent>
#include "menu-button.hpp"

void MenuButton::keyPressEvent(QKeyEvent *event)
{
	if (menu()) {
		switch (event->key()) {
		case Qt::Key_Enter:
		case Qt::Key_Return:
			emit clicked();
			return;
		case Qt::Key_Down:
		case Qt::Key_Space:
			showMenu();
			return;
		}
	}

	QPushButton::keyPressEvent(event);
}

void MenuButton::mousePressEvent(QMouseEvent *event)
{
	if (menu()) {
		if (width() - event->pos().x() <= 30)
			showMenu();
		else
			setDown(true);
	} else {
		QPushButton::mousePressEvent(event);
	}
}
