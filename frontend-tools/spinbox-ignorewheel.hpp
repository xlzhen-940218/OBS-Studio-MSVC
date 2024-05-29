#pragma once

#include <QTWidgets/QSpinBox>
#include <QTGui/QInputEvent>
#include <QtCore/QObject>

class SpinBoxIgnoreScroll : public QSpinBox {
	Q_OBJECT

public:
	SpinBoxIgnoreScroll(QWidget *parent = nullptr);

protected:
	virtual void wheelEvent(QWheelEvent *event) override;
};
