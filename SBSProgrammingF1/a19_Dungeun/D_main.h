#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//#include "Item.h"
typedef enum Dungeon_Room {
	Uproom,
	Downroom,
	V_Area1,
	V_Area2,
	V_Area3,
	Itemroom,
	Swarm1room,
	Swarm2room,
	Swarm3room,
	Swarm4room
}Dungeon_room;

void Start()
{
	printf("");
}

void Ending()
{

}

//void SectionEncount(int DungeonSection);