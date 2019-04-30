#pragma once
#include <iostream>

class CBritish
{
public:
	CBritish() {}
	~CBritish() {}

	void playSoccer() const { std::cout << "����Ӣ���ˣ���������" << std::endl; }
};

class CAmerican
{
public:
	CAmerican() {}
	~CAmerican() {}

	void playBaseball() const { std::cout << "���������ˣ��������" << std::endl; }
};

class CNorthChinese
{
public:
	CNorthChinese() {}
	~CNorthChinese() {}

	void playMahjong() const
	{
		std::cout << "�����й��ˣ����������齫" << std::endl;
	}
};

class CSouthChinese
{
public:
	CSouthChinese() {}
	~CSouthChinese() {}

	void playMahjong() const
	{
		std::cout << "�����й��ˣ����汱���齫" << std::endl;
	}
};

class CEthnicChinese
{
public:
	CEthnicChinese() {}
	~CEthnicChinese() {}

	void playMahjong() const
	{
		std::cout << "���ǻ��ᣬ����㶫�齫" << std::endl;
	}

	void playBaseball() const 
	{
		std::cout << "���ǻ��ᣬ�������" << std::endl;
	}
};

class CWorker
{
public:
	CWorker()
	{
		m_pNorthWorker = new CNorthChinese;
		m_pSouthWorker = new CSouthChinese;
		m_pAmericanWorker = new CAmerican;
		m_pBritishWorker = new CBritish;
		m_pEthnicChineseWorker = new CEthnicChinese;
	}
	~CWorker()
	{
		delete m_pNorthWorker;
		m_pNorthWorker = nullptr;
		delete m_pSouthWorker;
		m_pSouthWorker = nullptr;
		delete m_pAmericanWorker;
		m_pAmericanWorker = nullptr;
		delete m_pBritishWorker;
		m_pBritishWorker = nullptr;
		delete m_pEthnicChineseWorker;
		m_pEthnicChineseWorker = nullptr;
	}

	const CNorthChinese*  getNorthWorker()         const { return m_pNorthWorker; }
	const CSouthChinese*  getSouthWorker()         const { return m_pSouthWorker; }
	const CAmerican*      getAmericanWorker()      const { return m_pAmericanWorker; }
	const CBritish*       getBritishWorker()       const { return m_pBritishWorker; }
	const CEthnicChinese* getEthnicChineseWorker() const { return m_pEthnicChineseWorker; }

private:
	CNorthChinese  *m_pNorthWorker;
	CSouthChinese  *m_pSouthWorker;
	CAmerican      *m_pAmericanWorker;
	CBritish       *m_pBritishWorker;
	CEthnicChinese *m_pEthnicChineseWorker;
};