#include<iostream>
using namespace std;

void longestTime(float h, float m);


main()
{
   int h, m;
 
   cout << "Enter the number of hours: ";
   cin >> h;

   cout << "Enter the number of minutes: ";
   cin >> m;

   longestTime(h, m);

}


void longestTime(float h, float m)

{
   if(h*60 > m) //to convert hours to min for comparison
   {
       cout << h <<endl;
   }
   else
   {
       cout << m <<endl;
   }
}
