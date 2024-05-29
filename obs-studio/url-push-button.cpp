#include "url-push-button.hpp"

#include <QTCore/QUrl>
#include <QTGui/QMouseEvent>
#include <QTGui/QDesktopServices>

void UrlPushButton::setTargetUrl(QUrl url)
{
	setToolTip(url.toString());
	m_targetUrl = url;
}

QUrl UrlPushButton::targetUrl()
{
	return m_targetUrl;
}

void UrlPushButton::mousePressEvent(QMouseEvent *event)
{
	Q_UNUSED(event)
	QUrl openUrl = m_targetUrl;
	if (openUrl.isEmpty())
		return;

	QDesktopServices::openUrl(openUrl);
}
