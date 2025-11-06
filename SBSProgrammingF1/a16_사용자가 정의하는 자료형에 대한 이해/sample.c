#include "sample.h"

void SelectJob(JOB* myJOBptr)
{

	int input = 0;

	scanf("%d", &input);

	*myJOBptr = input;
	JOB tempjob = *myJOBptr;


	if (tempjob == 전사)
	{
		printf("전사를 선택했습니다.\n");

	}
	else if (tempjob == 마법사)
	{
		printf("마법사를 선택했습니다.\n");

	}
	else if (tempjob == 도적)
	{
		printf("도적을 선택했습니다.\n");

	}
	else if (tempjob == 궁수)
	{
		printf("궁수를 선택했습니다.\n");

	}
	else if (tempjob == 승려)
	{
		printf("승려를 선택했습니다.\n");

	}
	else
	{
		printf("다시\n");
	}
}

void setPlayerStat(JOB selectJob, int* HPptr, int* ATKptr)
{
	switch (selectJob)
	{
	case 전사:
		*HPptr = 100;
		*ATKptr = 20;
		break;
	case 마법사:
		*HPptr = 75;
		*ATKptr = 40;
		break;
	case 궁수:
		*HPptr = 80;
		*ATKptr = 30;
		break;
	case 도적:
		*HPptr = 60;
		*ATKptr = 25;
		break;
	case 승려:
		*HPptr = 90;
		*ATKptr = 20;
		break;
	default: 정의되지않음;
		break;
	}
}