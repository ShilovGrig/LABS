#include <iostream>

using namespace std;

int main() {
    double a, b;
    cout << "Введите два числа: \n";
    cin >> a >> b;
    cout << (a + b)/2 << endl;
    char sign;
    cout << "Введите знак операции: +, -, * или / \n";
    cin >> sign;
    /*
    if(sign == '+'){
        cout << a + b << endl;
        return 0;
    }
    else if( sign == '-'){
        cout << a - b << endl;
        return 0;
    }
    else if( sign == '*'){
        cout << a * b << endl;
        return 0;
    }
    else {
        cout << a / b << endl;
        return 0;
    }
    */
   switch (sign){
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
   }
}