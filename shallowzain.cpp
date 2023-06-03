#include <iostream>
using namespace std;

class Example {
    public:
    int* x;
    Example(int a) {
        x = new int;
        *x = a;
    }
    Example(const Example &obj) {
        x = obj.x;
    }
};

int main() {
    Example obj1(1);

    Example obj2 = obj1; // Shallow copy
    *(obj2.x) = 3;
    cout << "*(obj1.x): " << *(obj1.x) << endl; // Output: *(obj1.x): 3
}
