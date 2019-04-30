#include <iostream>

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
		std::cout << "我玩南派麻将" << std::endl;
	}

};

class CSouthChinese :public IChinese
{
public:
	virtual void playMahjongV() const override
	{
		std::cout << "我玩北派麻将" << std::endl;
	}
};


class CWorker
{
public:
	CWorker()
	{
		m_pNorthWorker = new CNorthChinese;
		m_pSouthWorker = new CSouthChinese;
	}
	~CWorker()
	{
		delete m_pNorthWorker;
		m_pNorthWorker = nullptr;
		delete m_pSouthWorker;
		m_pSouthWorker = nullptr;
	}

	const CNorthChinese* getNorthWorker() const { return m_pNorthWorker; }
	const CSouthChinese* getSouthWorker() const { return m_pSouthWorker; }

private:
	CNorthChinese *m_pNorthWorker;
	CSouthChinese *m_pSouthWorker;
};