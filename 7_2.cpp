#include <iostream>
#include <regex>

using namespace std;

bool is_valid_name(string name) {
    regex reg("^[A-Z]{1}[a-zA-Z]{1,31}$");
    return regex_search(name, reg);
}



int main() {
    cout << "Введите имя: \n";
    string name; cin >> name;
    if(is_valid_name(name)) {
        cout << "Ваше имя корректно" << endl;
    } else {
        cout << "Ваше имя не корректно" << endl;
    }
    string email_string = " name@mail.ru name name sec@mail.com";
    smatch matches;
    regex reg("\\w*@\\w*[.]\\w{2,5}");
    while(regex_search(email_string, matches, reg)) {
        cout << matches[0] << endl;
        email_string = matches.suffix().str();
    };
}