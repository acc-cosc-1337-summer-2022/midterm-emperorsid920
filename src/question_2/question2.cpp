#include <iostream>
#include <stdio.h>
#include "question2.h"

using namespace std;

Reciept::Reciept(double meal_price, double tip_rate){
    
    Price = meal_price;
    Gratuity = tip_rate;
}

double Reciept::calculate_tax(){
    
    double taxAmount = Price * Tax;
        
    return taxAmount;
}

double Reciept::calculate_gratuity(){
    
    double gratAmount = Price * (Gratuity/100);
    
    return gratAmount;
}

void Reciept::display_receipt( double Amount){
    
    cout<<"Total of Amount is: "<<Amount<<endl;
}
