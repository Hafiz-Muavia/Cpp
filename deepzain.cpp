#include <iostream>
using namespace std;

class Example {
    public:
    int* x;
    Example(int a) {
        x = new int;
        *x = a;
    }
    // Define a copy constructor for deep copy
    Example(const Example &obj) {
        x = new int;
        *x = *(obj.x);
    }
};

int main() {
    Example obj1(1);

    Example obj2 = obj1; // Deep copy
    *(obj2.x) = 3;
    cout << "*(obj1.x): " << *(obj1.x) << endl; // Output: *(obj1.x): 1
}
