#include<iostream>
using namespace std;

void printMenu();
void calculateAggregate(string name, float matricMarks, float interMarks,float ecatMarks);
void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2);

main()
{
 int choice;
 printMenu();

 cout << "Enter 1 to calculate Aggregate and 2 to compare Marks: ";
 cin >> choice;

 if(choice ==1)
   {
    float matric,inter;
    float ecat;
    string name;


    cout<<"Enter your name: ";
    cin>> name;
    
    cout<<"Enter marks in  matric(out of 1100): ";
    cin>> matric;

    cout<<"Enter marks in  inter(out of 550): ";
    cin>> inter;

    cout<<"Enter marks in  ecat(out of 400): ";
    cin>> ecat;

    calculateAggregate(name, matric, inter, ecat);
   }

 else if(choice == 2)
   {
    int ecat1,ecat2;
    string std1,std2;
 
    cout<<"Enter name of 1st student: ";
    cin>> std1;
    
    cout<<"Enter marks in ecat of 1st student (out of 400): ";
    cin>> ecat1;

    cout<<"Enter name of 2nd student: ";
    cin>> std2;
    
    cout<<"Enter marks in ecat of 2nd student (out of 400): ";
    cin>> ecat2;

    compareMarks( std1, ecat1, std2, ecat2);
    
    }
 else 
    {
      cout << "Wrong choice :( ";
    }
}


void printMenu()
 {

    cout << "*     *     *     *     *    *****  " << endl;
    cout << "*     *   *   *   **   **   *     * " << endl;
    cout << "*     *  *     *  * * * *   *       " << endl;
    cout << "*     *  *******  *  *  *    *****   " << endl;
    cout << "*     *  *     *  *     *         * " << endl;
    cout << "*     *  *     *  *     *   *     * " << endl;
    cout << " *****   *     *  *     *    *****  " << endl << endl << endl;


 }


void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)

{

      float agg= (matricMarks/1100)*30 + (interMarks/550)*30 + (ecatMarks/400)*40;
      cout << "Aggregate of " << name << " is:"<<agg;

}


void compareMarks(string nameStd1, float ecatMarksStd1, string nameStd2,float ecatMarksStd2)

{
    
    if(ecatMarksStd1 >= ecatMarksStd2)
      {
        cout << nameStd1 << " is Roll number 1" <<endl; 
      }

     else if(ecatMarksStd2 > ecatMarksStd1)
      {
        cout << nameStd2 << " is Roll number 1" <<endl; 
      }
   

}









