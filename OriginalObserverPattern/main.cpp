#include "Subject.h"

void main()
{
	COrganizer *pOrganizer = new COrganizer;
	CWorker *pWorker = new CWorker;

	pOrganizer->addPlayMahjongList(pWorker->getNorthWorker());
	pOrganizer->addPlayMahjongList(pWorker->getSouthWorker());

	pOrganizer->noticePlayMahjong();

	delete pOrganizer;
	pOrganizer = nullptr;
	delete pWorker;
	pWorker = nullptr;
}
