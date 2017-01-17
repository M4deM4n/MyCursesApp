#pragma once
#include "curses.h"
#include <string.h>
#include <string>
#include <windows.system.h>
#include "typewriter.h"
#include <time.h>
#include <algorithm>
#include "CurseHelper.h"

class Adventure {
public:
	char * playerName;
	int row, col, width, height;

	void Init();
	void Intro();
	void Start();
	void SetPlayerName(char * name);

private:
	char inputBuffer[80];
};