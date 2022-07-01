#include "question1.h"

bool test_config()
{
    return true;
}

double get_fahrenheit(double c)
{
    double FHeit;
    
    const double X = double(9)/double(5);
    
    FHeit = X*c + 32;
    
    return FHeit;
}
