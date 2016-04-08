/*
 * about manager user path operation
 * */

#ifndef userpath_h
#define userpath_h
#include <QtCore/QVariant>
#include <QtCore/QObject>
#include <QtCore/QDir>

class UserPath : public QObject
{
  Q_OBJCET

public:
	/*!
	 * ɾ��Ŀ¼�Լ���Ŀ¼
	 * */	
	static bool RemovePath(const QDir &pPath, bool pStopFailed);

	/*!
	 * ���Ŀ¼�Լ�ɾ����Ŀ¼
	 * */	
	static bool ClearPath(const QDir &pPath, bool pStopFailed);

	/*!
	 * ����Ŀ¼�Լ���Ŀ¼�µ������ļ�
	 * */	
	static bool CopyPath(const QDir &pSrcPath, const QDir&pDesPath);

	/*!
	 * �ƶ�Ŀ¼�Լ���Ŀ¼�µ������ļ���ע�⣺�ú���������ԭĿ¼�µ�������Ŀ¼
	 * */	
	static bool MovePath(const QDir &pSrcPath, const QDir &pDesPath);	

	/*!
	 * ���캯����ͬʱ�����û�Ŀ¼�Ƿ���ڣ���������ʱ�Զ�������Ŀ¼
	 * */	
	UserPath();

	~UserPath();

	/*!
	 * ��ȡ�û�Ŀ¼
	 * */	
	QDir GetUserPath() const;	

	/*!
	 * ���ָ�����û���Ŀ¼�Ƿ����
	 * */	
	bool IsUserSubPathExists(const QString &pSubPathName) const;

	/*!
	 * ��ȡ�û�Ŀ¼�µ�ĳ����Ŀ¼�����ƣ�����Ŀ¼�����ڣ��Զ�����
	 * */	
	QDir GetUserSubPath(const QString pSubPathName, bool pCreatePath = true) const;

	/*!
	 * ɾ���û�Ŀ¼�µ�ָ����Ŀ¼
	 * */	
	bool RemoveUserSubPath(const QString &pSubPathName) const;

	/*!
	 * ��ȡϵͳĿ¼��������İ�װĿ¼
	 * */	
	QDir GetSystemPath() const;

	/*!
	 * ��ȡϵͳĿ¼�µ�ĳ����Ŀ¼������
	 * */	
	QDir GetSystemSubPath(const QString &pSubPathName) const;

private:
	QDir mUserPath;

	QDir mSystemPath;
};

#endif //userpath_h
