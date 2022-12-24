#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, sum = 0;
    while(true){
        cin >> a;
        if( a > 0){
            break;
        }
    }
    while(a > 0){
        sum += a;
        a--;
    }
    cout << sum << endl;
    vector<int> v;
    v.resize(10);
    v[0] = 17;
    v[1] = 43;
    v[2] = 12;
    v[3] = 65;
    v[4] = 132;
    v[5] = 46;
    v[6] = 82;
    v[7] = 113;
    v[8] = 742;
    v[9] = 94;
    cout << "ПЕРВОЕ "  << v[0] << " ВТОРОЕ " << v[1] << " ТРЕТЬЕ " << v[2]<< " ЧЕТВЕРТОЕ " << v[3] << " ПЯТОЕ " << v[4] << " ШЕСТОЕ " << v[5] << " СЕДЬМОЕ " << v[6] << " ВОСЬМОЕ " << v[7] << " ДЕВЯТОЕ " << v[8] << " ДЕСЯТОЕ " << v[9] << endl;
    for(int i = 0; i < 10; ++i){
        if(i % 2  == 0){
            cout << v[i] << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < 10; ++i){
        if(i % 2  == 1){
            cout << v[i] << " ";
        }
    }
    cout << endl;
    int sum_odd = 0, sum_even = 0;
    for(int i = 0; i < 10; ++i){
        if(i % 2  == 0){
            sum_even += v[i];
        }
    }
    for(int i = 0; i < 10; ++i){
        if(i % 2  == 1){
            sum_odd += v[i];
        }
    }
    cout << "Сумма чётных элементов: " << sum_even << endl;
    cout << "Сумма нечётных элементов: " << sum_odd << endl;
    
}