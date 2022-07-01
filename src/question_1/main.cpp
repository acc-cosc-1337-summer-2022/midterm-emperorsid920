#include <iostream>
#include <iomanip>
#include "question1.h"
using namespace std;
int main()
{
 
 
 
  int Celcius;
 
    do {
             
          
            
             
            Cout<<"Please enter the temperature in Celcius: ";
            cin>>Celcius;
            

            
             cout<<"Are you done? " <<"Y or N: ";
             cin>>ans;
             
             if (ans == 'y' || ans == 'Y') {
                 done = true;
             }
         }
         while (!done);
    return 0;
}
