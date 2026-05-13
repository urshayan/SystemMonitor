#include <iostream>
#include <ncurses.h>
int main()
{
//	std::cout << "First Commit  \n";
	// return 0;

	initscr();

	printw("System Monitor");

	refresh();

	getch();

	endwin();

}
