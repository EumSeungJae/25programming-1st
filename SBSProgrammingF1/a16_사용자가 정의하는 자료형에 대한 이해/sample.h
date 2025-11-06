#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifndef JOB_H

#define JOB_H

typedef enum 
{
	전사,
	마법사,
	도적,
	궁수,
	승려,
	정의되지않음 = 100
}JOB;

#endif // !1

void SelectJob(JOB* myJOBptr);

void setPlayerStat(JOB selectJob, int* HPptr, int* ATKptr);