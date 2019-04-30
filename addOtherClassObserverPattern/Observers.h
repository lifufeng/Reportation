#include <iostream>

class IBritish
{
public:
	IBritish() {}
	~IBritish() {}

	virtual void playSoccerV() const { std::cout << "����Ӣ���ˣ���������" << std::endl; }
};

class IAmerican
{
public:
	IAmerican() {}
	~IAmerican() {}

	virtual void playBaseballV() const { std::cout << "���������ˣ��������" << std::endl; }
};

class IChinese
{
public:
	IChinese() {}
	~IChinese() {}

	virtual void playMahjongV() const = 0;
};

class CNorthChinese :public IChinese
{
public:
	virtual void playMahjongV() const override
	{
		std::cout << "�����й��ˣ����������齫" << std::endl;
	}
};

class CSouthChinese :public IChinese
{
public:
	virtual void playMahjongV() const override
	{
		std::cout << "�����й��ˣ����汱���齫" << std::endl;
	}
};


class CWorker
{
public:
	CWorker()
	{
		m_pNorthWorker    = new CNorthChinese;
		m_pSouthWorker    = new CSouthChinese;
		m_pAmericanWorker = new IAmerican;
		m_pBritishWorker  = new IBritish;
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
	}

	const CNorthChinese* getNorthWorker()    const { return m_pNorthWorker; }
	const CSouthChinese* getSouthWorker()    const { return m_pSouthWorker; }
	const IAmerican*     getAmericanWorker() const { return m_pAmericanWorker; }
	const IBritish*      getBritishWorker()  const  { return m_pBritishWorker; }

private:
	CNorthChinese *m_pNorthWorker;
	CSouthChinese *m_pSouthWorker;
	IAmerican     *m_pAmericanWorker;
	IBritish      *m_pBritishWorker;
};