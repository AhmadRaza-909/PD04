#include<iostream>
#include<windows.h>
using namespace std;


void movePlayer(int x,int y);
void gotoxy(int x,int y);
void printMaze();

main()
{
	int x = 4, y = 4;
	system("cls");
	printMaze();
	while(true)
	{
		movePlayer(x,y);
		x= x+1;
		if(x==22)
			{
				x = 3;
			}
	}
}

void movePlayer(int x,int y)
{
	gotoxy(x,y);
	cout << "P";
	Sleep(100);
	gotoxy(x,y);
	cout << " ";
}

void printMaze()
{
	cout << "#########################" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#                       #" <<endl;
	cout << "#########################" <<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}