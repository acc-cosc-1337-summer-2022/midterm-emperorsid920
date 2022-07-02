bool test_config();

class Reciept {       // The class
   private:
    // Private attribute
    double Gratuity;
    const double Tax = 0.08;
    double Price;
  
  public:             // Access specifier
    Reciept(double, double); 
    double calculate_tax(double);
    double  calculate_gratuity(double);
    void display_receipt(double);
  
};
