#include<iostream>
using namespace std;

void tpChecker(int people, int tp);

main()
{
   int people, tp;
   
   cout << "Enter number of people: ";
   cin >> people;

   cout << "Enter number of rolls of TP: ";
   cin >> tp;

   tpChecker(people, tp);

}

void tpChecker(int people, int tp)

{
   int daysOfTp = (tp*500) / (people*57);
   if(daysOfTp < 14)
   {
       cout << "Your TP will only last " << daysOfTp << " days, buy more!";
   }

   else
   {
       cout << "Your TP will last " << daysOfTp << " days, no need to panic!";
   }

}