#pragma once
#include "Observers.h"
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

typedef std::function<void()> FunctionPlayMahjong;
typedef std::function<void()> FunctionPlayBaseball;
typedef std::function<void()> FunctionPlaySoccer;

class COrganizer
{
public:
	COrganizer() {}
	~COrganizer() {}

	
	void addPlayMahjongList(FunctionPlayMahjong vPlayMahjong)
	{
		m_PlayMahjongList.push_back(vPlayMahjong);
	}

	void addPlayBaseballList(FunctionPlayBaseball vPlayBaseball)
	{
		m_PlayBaseballList.push_back(vPlayBaseball);
	}

	void addPlaySoccerList(FunctionPlaySoccer vPlaySoccer)
	{
		m_PlaySoccerList.push_back(vPlaySoccer);
	}

	/*void deleteFromPlayMahjongList(FunctionPlayMahjong& vDeleteFromPlayMahjong)
	{
		m_PlayMahjongList.erase(remove(m_PlayMahjongList.begin(), m_PlayMahjongList.end(), vDeleteFromPlayMahjong));
	}

	void deleteFromPlayBaseballList(FunctionPlayBaseball& vDeleteFromPlayBaseball)
	{
		m_PlayBaseballList.erase(remove(m_PlayBaseballList.begin(), m_PlayBaseballList.end(), vDeleteFromPlayBaseball));
	}

	void deleteFromPlaySoccerList(FunctionPlaySoccer& vDeleteFromPlaySoccer)
	{
		m_PlaySoccerList.erase(remove(m_PlaySoccerList.begin(), m_PlaySoccerList.end(), vDeleteFromPlaySoccer));
	}*/

	void notifyPlayMahjong()
	{
		for (auto iter : m_PlayMahjongList)
			iter();
	}

	void notifyPlayBaseball()
	{
		for (auto iter : m_PlayBaseballList)
			iter();
	}

	void notifyPlaySoccer()
	{
		for (auto iter : m_PlaySoccerList)
			iter();
	}

private:
	std::vector<FunctionPlayMahjong>  m_PlayMahjongList;
	std::vector<FunctionPlayBaseball> m_PlayBaseballList;
	std::vector<FunctionPlaySoccer>   m_PlaySoccerList;
};

