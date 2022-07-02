

#include <iostream>
#include "question2.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double Meal_Price;
    double Grat_Rate;
    double Amount_Tax;
    double Amount_Grat;
    double Final_Amount;

    
    bool done = false;
    char ans = ' ';
    
    while (!done) {
        cout << "Please Enter Meal Price: ";
        cin>>Meal_Price;
        
        cout << "Please Rate of Gratuity: ";
        cin>>Grat_Rate;
        
        
        Reciept Rec(Meal_Price,Grat_Rate);
        
        Amount_Tax = Rec.calculate_tax();
        
        Amount_Grat = Rec.calculate_gratuity();
        
        Final_Amount = Meal_Price + Amount_Tax + Amount_Grat;
        
        Rec.display_receipt(Final_Amount);
        
        cout<<"Do you want to continue? Y or N";
        cin>>ans;
        
        if (ans == 'N' || ans == 'n') {
            done = true;
        }
        
    }
    
   
    
    //Testers
    //cout<<Amount_Tax<<endl;
    //cout<<Amount_Grat<<endl;
    
   
    
    
    
    return 0;
}
