#include<iostream>
#include<windows.h>
using namespace std;


void movePlayer(int x,int y);
void gotoxy(int x,int y);
void printMaze();

main()
{
	int x = 4, y = 4;
        bool movingDown = true; //to control direction
	system("cls");
	printMaze();

	while (true) {
            movePlayer(x, y);  

            if (movingDown) {
                 y++; 
            } 
            else {
                 y--;
            }

            // Change direction if hitting boundaries
            if (y == 7) {
               movingDown = false;  
            }
            if (y == 1) {
               movingDown = true; 
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