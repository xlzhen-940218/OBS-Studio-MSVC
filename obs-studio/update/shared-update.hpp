#pragma once

#include <QTCore/QThread>
#include <QTCore/QString>

#include <vector>
#include <string>

bool FetchAndVerifyFile(const char *name, const char *file, const char *url,
			std::string *out,
			const std::vector<std::string> &extraHeaders =
				std::vector<std::string>());

class WhatsNewInfoThread : public QThread {
	Q_OBJECT

	virtual void run() override;

signals:
	void Result(const QString &text);

public:
	inline WhatsNewInfoThread() {}
};

class WhatsNewBrowserInitThread : public QThread {
	Q_OBJECT

	QString url;

	virtual void run() override;

signals:
	void Result(const QString &url);

public:
	inline WhatsNewBrowserInitThread(const QString &url_) : url(url_) {}
};
