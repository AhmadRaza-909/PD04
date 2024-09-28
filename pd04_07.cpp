#include<iostream>
using namespace std;

void flowerShop(int redRose, int whiteRose, int tulip);


main()
{
   int redRose, whiteRose, tulip;
 
   cout << "Red Roses: ";
   cin >> redRose;

   cout << "White Roses: ";
   cin >> whiteRose;

   cout << "Tulips: ";
   cin >> tulip;

   flowerShop(redRose, whiteRose, tulip);

}

void flowerShop(int redRose, int whiteRose, int tulip)

{
   float redPrice = redRose*2.00;
   float whitePrice = whiteRose*4.10;
   float tulipPrice = tulip*2.50;

   float originalPrice = tulipPrice + whitePrice + redPrice;

   if(originalPrice > 200)
   {
       float discountPrice = originalPrice - (originalPrice*0.2);

       cout << "Original Price: $" << originalPrice << endl;
       cout << "Price after Discount: $" << discountPrice << endl;
   }

   else
   {
       cout << "Original Price: $" << originalPrice << endl;
       cout << "No discount offered. " << endl;     
   }

}