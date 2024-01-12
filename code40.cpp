#include<iostream>
using namespace std;
class Array {
 int* pData;
 int size;
 void copyArray(int *dest, int *src, int size) {
 for (int i = 0; i < size; ++i) {
 dest[i] = src[i];
 }
 }
public:
 Array(int n) : size(n) {
 std::cout << "Allocate memory for array of size " << size << "\n";
 pData = new int[size];
 }
 ~Array() {
 std::cout << "Free array memory of size " << size << "\n";
 delete pData;
 }
 int& operator[](int i) {
 static int temp;
 if ((i < 0) || (i >= size)) {
 return temp;
 }
 return pData[i];
 }
 Array(Array& obj) : size(obj.size) {
 std::cout << "Array copy constructor of size " << size << "\n";
 pData = new int[size];
 copyArray(pData, obj.pData, size);
 }
 Array operator=(Array& obj) {
 std::cout << "Assign array of size " << obj.size << " to array of size " << size << "\n";
 size = obj.size;
 delete pData;
 pData = new int[size];
 copyArray(pData, obj.pData, size);
 return *this;
 }
};
int main() {
 Array arr1(5);
 Array arr2(10);
 arr1[0] = 1;
 arr1 = arr2;
 arr2[0] = 2;
 std::cout << "1st element of arr1 = " << arr1[0] << "\n";
 std::cout << "1st element of arr2 = " << arr2[0] << "\n";
 return 0;
}

/*int main() {
 Array arr1(5);
 Array arr2(10);
 arr1[0] = 1;
 arr1 = arr2;
 arr2[0] = 2;
 std::cout << "1st element of arr1 = " << arr1[0] << "\n";
 std::cout << "1st element of arr2 = " << arr2[0] << "\n";
 return 0;
}*/
