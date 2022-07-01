#include <iostream>
#include <iomanip>
#include "question1.h"
using namespace std;
int main()
{
 
 
 
  int Celcius;
 
  int Celcius;
  
  double Farhenheit;
  bool done = false;
  char ans = ' ';
 
  while (!done) {
        
       cout<<"Please Enter Temperature in C: ";
       cin>>Celcius;
       
       Farhenheit = get_fahrenheit(Celcius);
       
       cout<<"emperature in F is: "<<Farhenheit<<endl;

       
        cout<<"Are you done? " <<"Y or N: ";
        cin>>ans;
        
        if (ans == 'y' || ans == 'Y') {
            done = true;
        }
    }
    return 0;
}
