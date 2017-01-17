#include "curses.h"
#include <string.h>
#include <Windows.h>
#include <windows.system.h>
#include <time.h>
#include <algorithm>
//#include <string>


#include "Adventure.h"

int row, col;

int main()
{
	Adventure game = Adventure();
	game.Init();
	game.Intro();
	game.Start();
	endwin();

	return 0;	
}
