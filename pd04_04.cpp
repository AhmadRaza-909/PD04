#include<iostream>
using namespace std;

void checkSpeed(int speed);


main()
{
   int speed;
 
   cout << "Enter speed (in km/h): ";
   cin >> speed;

   checkSpeed(speed);

}


void checkSpeed(int speed)
{
   if(speed > 100)
   {
       cout << "Halt... YOU WILL BE CHALLENGED!!!"<<endl;
   }
   else
   {
       cout << "perfect! You're going good. "<<endl;
   }




}