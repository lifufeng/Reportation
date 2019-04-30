#include "Subject.h"

void main()
{
	COrganizer *pOrganizer = new COrganizer;
	CWorker *pWorker = new CWorker;

	pOrganizer->addPlayMahjongList(pWorker->getNorthWorker());
	pOrganizer->addPlayMahjongList(pWorker->getNorthWorker());

	pOrganizer->addPlayBaseballList(pWorker->getAmericanWorker());

	pOrganizer->addPlaySoccerList(pWorker->getBritishWorker());

	pOrganizer->noticePlayMahjong();
	std::cout << std::endl;
	pOrganizer->noticePlayBaseball();
	std::cout << std::endl;
	pOrganizer->noticePlaySoccer();
	std::cout << std::endl;

	delete pOrganizer;
	pOrganizer = nullptr;
	delete pWorker;
	pWorker = nullptr;
}