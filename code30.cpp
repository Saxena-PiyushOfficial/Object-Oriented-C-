#include<iostream>
using namespace std;

class BigInt {
private:
    int num;

public:
    BigInt() : num(0) {
    }

    BigInt(int n) : num(n) {
    }

    friend bool operator ==(const BigInt& left, const BigInt& right);
};

bool operator ==(const BigInt& left, const BigInt& right) {
    return left.num == right.num;
}

int main() {
    BigInt n1 = 30;
    BigInt n2 = 30;

    if (n1 == n2) {
        cout << "Successful operator overloading";
    } else {
        cout << "Fail";
    }

    return 0;
}
