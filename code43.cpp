#include <iostream>

class Example {
public:
    char data;  // Character data member
    virtual void func1() {}  // Virtual function 1
    virtual void func2() {}  // Virtual function 2
};

int main() {
    std::cout << "Size of Example class: " << sizeof(Example) << " bytes" << std::endl;
    return 0;
}
