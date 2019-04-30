#pragma once
#include "ObserverChinese.h"
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

	void addPlayMahjongList(const IChinese* vChineseWorker)
	{
		m_pPlayMahjongList.push_back(vChineseWorker);
	}

private:
	std::vector<const IChinese*> m_pPlayMahjongList;
};
