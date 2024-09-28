#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void H();
void A();
void S();
void N();

main()
{
	H();
	A();
	S();
	S();
	A();
	N();
}

void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void H()
{
cout<< "H"<<endl;
}

void A()
{
cout<< "A"<<endl;
}

void S()
{
cout<< "S"<<endl;
}

void N()
{
cout<< "N"<<endl;
}