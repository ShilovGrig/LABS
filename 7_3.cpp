#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    cout << "Введите радуис окружности\n";
    double r; cin >> r;
    double res = 2 * M_PI * r;

    cout << fixed << setprecision(3) << res << endl;


    std::ifstream myfile; myfile.open("a.txt");
    std::string mystring;
    if ( myfile.is_open() ) {
        char mychar;
        while ( myfile ) {
            mychar = myfile.get();
            std::cout << mychar;
        }
    }

    while(true) {
        cout << "Введите слова или команду read, erase или exit:\n";
        string s; cin >> s;
        if(s == "read") {
            std::ifstream myfile; myfile.open("a.txt");
            std::string mystring;
            if ( myfile.is_open() ) {
                char mychar;
                while ( myfile ) {
                    mychar = myfile.get();
                    std::cout << mychar;
                }
            }
        } else if(s == "erase") {
            std::ofstream ofs ("a.txt", std::ios::out | std::ios::trunc);
            ofs.close();
        } else if(s == "exit") {
            break;
        } else {
            std::ofstream ofs ("a.txt", std::ios::out | std::ios::app);
            ofs << s << std::endl;
            ofs.close(); 
        }
    }
}