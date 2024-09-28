#include<iostream>
using namespace std;

void discountPrice(string, float);

main()
{

   string country;
   float ticket;
   
while(true){
   cout<<"Enter the country's name (in small letters): ";
   cin>> country;

   cout<<"Enter the ticket price in dollars: $";
   cin>> ticket;   

   discountPrice(country, ticket);

   }
}


void discountPrice(string country, float ticket)
{
    float finalPrice;

    if(country == "pakistan")
    {
        finalPrice = ticket - (ticket*0.05);
    } 

    else if(country == "ireland")
    {
        finalPrice = ticket - (ticket*0.1);
    } 

    else if(country == "india")
    {
        finalPrice = ticket - (ticket*0.2);
    } 

    else if(country == "england")
    {
        finalPrice = ticket - (ticket*0.3);
    } 

    else if(country == "canada")
    {
        finalPrice = ticket - (ticket*0.45);
    } 
    else
    {
        cout << "Wrong Input Somewhere or Country out of scope.";
    } 


    cout << "Final ticket price after Discount: $" << finalPrice << endl <<endl; 
}