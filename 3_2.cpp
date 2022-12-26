#include <iostream>

using namespace std;

int sm_arr(int*begin, int*end) {
    int sm = 0;
    for(int* e = begin; e != end; e++) {
        sm += *e;
    }
    return sm;
}

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int (*func(char e))(int, int) {
    auto c = diff;
    if(e == '+') {
        return sum;
    } else if(e == '-') {
        return diff;
    }
    return NULL;
}

int main() {
    // 1 - 6
    int a[] = {1,2,3};
    cout << sm_arr(a, a + 3) << endl;
    cout << func('+')(1, 2) << endl;
    cout << func('-')(1, 2) << endl;
    // 7 - 8
    float *ptr = new float(1.2);
    cout << "ptr_data: " << *ptr << endl;
    delete(ptr);
}