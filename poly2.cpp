#include <iostream> 
using namespace std; 
class Base 
{ 
   public:
      void print() { cout << "Base Function" << endl; } 
}; 

class Derived : public Base 
{ 
   public: 
              

void print() { cout << "Derived Function" << endl; } 
}; 
int main()
 { 
Derived derive; 

// pointer of Base type that points to derived1 
Base  *ptr =   &derive; 

// call function of Base class using ptr 
                                    //derived1.print();
ptr    ->   print(); 

return 0; 
}
