#include <iostream>

using namespace std;

int main() {
    cout << "Введите строку: \n";
    string s; cin >> s;
    cout << s.substr(1, 3) << endl;
    size_t f = s.find('a');
    if(f >= s.size()) {
        cout << "Символа a не найдено" << endl;
    } else {
        cout << "Интекс первого вождения символа а: " << f << endl;
    }
}