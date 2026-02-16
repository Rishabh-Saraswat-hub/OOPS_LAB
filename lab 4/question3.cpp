#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }

    void show() {
        cout << "Inside member function" << endl;
    }
};

int main() {
    Demo obj;
    obj.show();
    return 0;
}