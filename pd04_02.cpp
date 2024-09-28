#include<iostream>
using namespace std;

void reverse(string);

main()
{
   string condition;
   
   cout<<"Enter 'true' or 'false': ";
   cin>> condition;

   reverse(condition);
}

void reverse(string condition)

{
   if(condition == "true"){
     cout<<"false"<<endl;
     }
   
   else if(condition == "false"){
     cout<<"true"<<endl;
     }

   else{
     cout<<"Wrong Input :( "<<endl;
     }
}