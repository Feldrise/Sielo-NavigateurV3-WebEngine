#pragma once 

#include <QWidget>
#include <QtWebEngineWidgets>

class STabWidget;

class SWebView : public QWebEngineView
{
public:
	SWebView(QWidget* parent = nullptr, STabWidget *parentTab = nullptr, QUrl url = QUrl("http://google.fr"));
	~SWebView();

	void changeParent(QWidget *parent, STabWidget *parentTab);
protected:

	SWebView * createWindow(QWebEnginePage::WebWindowType type);

public slots:
    void setFullScreen(QWebEngineFullScreenRequest request);

private:
	QWidget* m_parent{ nullptr };
	STabWidget *m_parentTab{ nullptr };
    bool m_fullScreen{ false };
};
