#include<iostream>
using namespace std;

void pet(int holidays);

main()
{
   int holidays;
   
   cout << "Enter Holidays: ";
   cin >> holidays;

   pet(holidays);
}

void pet(int holidays)

{
  int workingDays, playTime;
  int normTime = 30000;

  workingDays = 365-holidays;
  playTime = (workingDays*63) + (holidays*127);

  if(playTime > normTime)
  {
      int difference = playTime - normTime;
      cout << "Tom will run away. " << endl;
      cout << difference/60 <<" hours and " << difference%60 << " minutes more for play " << endl;
  }

  else
  {
      int diff = normTime - playTime;
      cout << "Tom sleeps well. " << endl;
      cout << diff/60 <<" hours and " << diff%60 << " minutes less for play " << endl;
  }
}