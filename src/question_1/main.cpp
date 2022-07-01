#include <iostream>
#include <iomanip>
#include ""
using namespace std;
int main()
{
 
    do {
             
          
            
            

            
             cout<<"Are you done? " <<"Y or N: ";
             cin>>ans;
             
             if (ans == 'y' || ans == 'Y') {
                 done = true;
             }
         }
         while (!done);
    return 0;
}
