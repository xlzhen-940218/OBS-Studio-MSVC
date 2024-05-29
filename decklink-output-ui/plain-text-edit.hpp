#pragma once

#include <QTWidgets/QPlainTextEdit>

class OBSPlainTextEdit : public QPlainTextEdit {
	Q_OBJECT

public:
	explicit OBSPlainTextEdit(QWidget *parent = nullptr,
				  bool monospace = true);
};
