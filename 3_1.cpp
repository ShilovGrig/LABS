#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 3;
    int*ptr = &n;
    cout << "Указатель: " << ptr << " Значение указателя: " << *ptr << endl;
    *ptr = 4;
    cout << "Переменная первого пункта: " << n << " Значение указателя: " << *ptr << endl;
    int a[] = { 3,2,7,5 };
    cout << "vector<int> a : ";
    for(int i = 0; i < 4; i++) {
        cout << *(a + i) << " ";
    }
    cout << endl;
    int var = 5, var_2 = 3;
    int* const var_ptr = &var;
    cout << "Старый var: " << var << endl;
    *var_ptr = 3;
    cout << "Новый var: " << var << endl;
    // var_ptr = &var_2;
}