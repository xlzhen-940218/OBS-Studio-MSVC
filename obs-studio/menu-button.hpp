#pragma once

#include <QTWidgets/QPushButton>

class MenuButton : public QPushButton {
	Q_OBJECT

protected:
	void mousePressEvent(QMouseEvent *event) override;
	void keyPressEvent(QKeyEvent *event) override;

public:
	explicit inline MenuButton(QWidget *parent = nullptr)
		: QPushButton(parent)
	{
	}

	explicit inline MenuButton(const QString &text,
				   QWidget *parent = nullptr)
		: QPushButton(text, parent)
	{
	}
};
