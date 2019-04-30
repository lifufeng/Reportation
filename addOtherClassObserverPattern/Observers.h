#include <iostream>

class IBritish
{
public:
	IBritish() {}
	~IBritish() {}

	virtual void playSoccerV() const { std::cout << "我是英国人，我踢足球" << std::endl; }
};

class IAmerican
{
public:
	IAmerican() {}
	~IAmerican() {}

	virtual void playBaseballV() const { std::cout << "我是美国人，我玩棒球" << std::endl; }
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
		std::cout << "我是中国人，我玩南派麻将" << std::endl;
	}
};

class CSouthChinese :public IChinese
{
public:
	virtual void playMahjongV() const override
	{
		std::cout << "我是中国人，我玩北派麻将" << std::endl;
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