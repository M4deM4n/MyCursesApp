#include "Adventure.h"

void Adventure::Init() {
	initscr();
	curs_set(0);
	getmaxyx(stdscr, row, col);
	width = 34;
	height = 5;
}

void Adventure::Intro() {
	CurseHelper::drawBorder('#', row, col);
	refresh();
	Sleep(1000);
	char intro[] = "Jeff Pizano Presents";
	mvprintw((row / 2), (col - strlen(intro)) / 2, "%s", intro);
	refresh();

	Sleep(2000);
	CurseHelper::drawBG(row, col);
	refresh();

	Sleep(1000);
	CurseHelper::drawRect((col - width) / 2, (row - height) / 2, width, height, '=');
	char title[] = " Shitty Text Adventure ";
	mvprintw(row / 2, (col - strlen(title)) / 2, "%s", title);
	refresh();

	Sleep(3000);
	char anykey[] = "- Press Any Key -";
	mvprintw((row / 2) + 5, (col - strlen(anykey)) / 2, "%s", anykey);
	refresh();
	getch();
}

void Adventure::SetPlayerName(char * name) {
	playerName = name;
}

void Adventure::Start() {
	clear();
	move(0, 0);
	CurseHelper::typeWriter("Enter your name: ");
	getstr(inputBuffer);
	playerName = inputBuffer;
	clear();


	Sleep(1000);
	char buffer[255];
	sprintf_s(buffer, "You have no idea what you've just done,"); // >= 
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(250);
	sprintf_s(buffer, " do you,");
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(250);
	sprintf_s(buffer, " %s.\n", playerName);
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(2000);
	sprintf_s(buffer, "This is not going to be good for you, or your computer..\n");
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(3000);
	sprintf_s(buffer, "Goodnight.");
	CurseHelper::typeWriter(buffer);
	refresh();
	Sleep(200);
	
	//CurseHelper::fillScreen('#', row, col);
	//refresh();
	//Sleep(250);

	//CurseHelper::fillScreen('!', row, col);
	//refresh();
	//Sleep(250);

	//CurseHelper::fillScreen('@', row, col);
	//refresh();
	//Sleep(250);

	std::string chars = "#!@&";
	CurseHelper::animateFlashFill(chars, 200, false, row, col);

	clear();
	refresh();
	Sleep(4370);

	char text[80];
	sprintf_s(text," Are you still there, %s? ", playerName);
	mvprintw(row / 2, (col - strlen(text)) / 2, "%s", text);
	refresh();

	Sleep(2000);
	clear();
	refresh();
	Sleep(2000);
	sprintf_s(text, "Did I scare you?");
	mvprintw(row / 2, (col - strlen(text)) / 2, "%s", text);
	refresh();

	Sleep(3000);
	clear();
	move(0, 0);
	sprintf_s(buffer, "You really need to lighten up, %s.\n", playerName);
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(1000);
	sprintf_s(buffer, "We're friends after all. ");
	CurseHelper::typeWriter(buffer);
	
	Sleep(1000);
	sprintf_s(buffer, "Aren't we? ");
	CurseHelper::typeWriter(buffer);
	refresh();

	Sleep(1000);
	sprintf_s(buffer, "%s?\n", playerName);
	printw("%s", buffer);

	getch();
}