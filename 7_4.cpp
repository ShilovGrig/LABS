#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Settings {
public:
    static std::map<int, int> m;

    static void Add(int key, int val);
    static int Get(int key);
    static void Print();
};

map<int,int> Settings::m;

void Settings::Add(int key, int val) { Settings::m[key] = val; }
int Settings::Get(int key) { return Settings::m[key]; }
void Settings::Print() { for(auto &u : Settings::m) cout << u.first << " : " << u.second << " "; cout << endl;}

void print_vector(vector<float> &v) {
    for(auto &u : v) {
        cout << u << " ";
    }
    cout << endl;
}

int main() {
    vector<float> v;
    for(int i = 0; i < 5; i++) {
        v.push_back(i * 1.2);
    }
    print_vector(v);
    v.resize(6);
    for(int i = 5; i >= 4; i--) {
        v[i] = v[i - 1];
    }
    v[3] = 7;
    print_vector(v);
    v.resize(5);
    print_vector(v);

    // Settings set;
    // set.Add(1, 2);
    // set.Add(3, 1);
    // assert(set.Get(1) == 2);
    // assert(set.Get(3) == 1);
    // set.Add(1, 5);
    // assert(set.Get(1) == 5);

    Settings::Add(1, 2);
    Settings::Add(3, 1);
    assert(Settings::Get(1) == 2);
    assert(Settings::Get(3) == 1);
    Settings::Add(1, 5);
    assert(Settings::Get(1) == 5);

}