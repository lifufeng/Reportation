#pragma once
#include "Observers.h"
#include <vector>
#include <iostream>

class COrganizer
{
public:
	COrganizer() {}
	~COrganizer() {}

	void noticePlayMahjong()
	{
		for (auto iter : m_pPlayMahjongList)
			iter->playMahjongV();
	}

	void noticePlayBaseball()
	{
		for (auto iter : m_pPlayBaseballList)
			iter->playBaseballV();
	}

	void noticePlaySoccer()
	{
		for (auto iter : m_pPlaySoccerList)
			iter->playSoccerV();
	}

	void addPlayMahjongList(const IChinese* vChineseWorker)
	{
		m_pPlayMahjongList.push_back(vChineseWorker);
	}

	void addPlayBaseballList(const IAmerican* vAmericanWorker)
	{
		m_pPlayBaseballList.push_back(vAmericanWorker);
	}

	void addPlaySoccerList(const IBritish* vCBritish)
	{
		m_pPlaySoccerList.push_back(vCBritish);
	}

private:
	std::vector<const IChinese*>  m_pPlayMahjongList;
	std::vector<const IAmerican*> m_pPlayBaseballList;
	std::vector<const IBritish*>  m_pPlaySoccerList;
};
