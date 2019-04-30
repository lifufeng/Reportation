#pragma once
#include "Subject.h"

void main()
{
	COrganizer* pOrganizer = new COrganizer;
	CWorker*  pWorker  = new CWorker;

	pOrganizer->addPlayMahjongList(std::bind(&CSouthChinese::playMahjong, pWorker->getSouthWorker()));
	pOrganizer->addPlayMahjongList(std::bind(&CNorthChinese::playMahjong, pWorker->getNorthWorker()));
	pOrganizer->addPlayMahjongList(std::bind(&CEthnicChinese::playMahjong, pWorker->getEthnicChineseWorker()));
	
	pOrganizer->addPlayBaseballList(std::bind(&CEthnicChinese::playBaseball, pWorker->getEthnicChineseWorker()));
	pOrganizer->addPlayBaseballList(std::bind(&CAmerican::playBaseball, pWorker->getAmericanWorker()));
    
	pOrganizer->addPlaySoccerList(std::bind(&CBritish::playSoccer, pWorker->getBritishWorker()));

	/*bool IsExistBug = true;
	if (IsExistBug)
	{
		pOrganizer->deleteFromPlayMahjongList(std::bind(&CSouthChinese::playMahjong, pWorker->getSouthWorker()));
	}*/

	pOrganizer->notifyPlayMahjong();
	std::cout << std::endl;
	pOrganizer->notifyPlayBaseball();
	std::cout << std::endl;
	pOrganizer->notifyPlaySoccer();

	delete pOrganizer;
	pOrganizer = nullptr;
	delete pWorker;
	pWorker = nullptr;
}