

#ifndef question_h
#define question_h

class Reciept {       // The class
   private:
    // Private attribute
    double Gratuity;
    const double Tax = 0.08;
    double Price;
  
  public:             // Access specifier
    Reciept(double, double);
    double calculate_tax();
    double  calculate_gratuity();
    void display_receipt(double);
  
};




#endif /* Reciept_h */
