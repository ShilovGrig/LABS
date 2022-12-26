#include <iostream>
#include <vector>

using namespace std;

int f_1 (int num = 1){
    int summ = 0;
    if(num > 0){
        for(int i = 1; i <= num; ++i){
            summ += i;
        }
        return summ;
    }
    else{
        return summ;
    }
}

void f_2 (int a, int b, int &c, int &d){
    c = a + b;
    d = a * b;
}

int main() {
    // 1 - 5
    vector < vector <int> > v (2, vector <int> (3));
    v[0][0] = 12;
    v[0][1] = 23;
    v[0][2] = 43;
    v[1][0] = 54;
    v[1][1] = 16;
    v[1][2] = 67;
    int sum = 0;
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            sum += v[i][j];
        }
    }
    cout << sum << endl;
    // 6 - 9
    vector <int> x (3);
    for(int i = 0; i < 3; ++i){
        x[i] = v[0][i]+ v[1][i];
        cout << x[i] << " ";
    }
    cout << endl;
    float a = 20.84;
    float *a_link1 = &a;
    float *a_link2 = &a;
    cout << a << " " << *a_link1 << " " << *a_link2 << endl;
    *a_link1 = 4.23;
    cout << a << " " << *a_link1 << " " << *a_link2 << endl;
    // 10 - 11
    int b;
    cin >> b;
    int ans1;
    ans1 = f_1(b);
    cout << ans1 << endl;
    int ans2;
    ans2 = f_1();
    cout << ans2 << endl;
    // 12 - 14
    int param_1 = 4, param_2 = 6;
    int res_1 = 1, res_2 = 3;
    cout << "res_1: " << res_1 << " res_2: " << res_2 << endl;
    f_2(param_1, param_2, res_1, res_2);
    cout << "res_1: " << res_1 << " res_2: " << res_2 << endl;
    // 15 - 18
    int variable = 7;
    cout << "variable: " << variable << endl;
    for(int i = 0; i < 3; i++) {
        int val = 9;
        cout << "variable: " << variable << endl;
        cout << "val: " << val;
    }
    // cout << val << endl; // Выдаёт ошибку identifier "val" is undefined
}