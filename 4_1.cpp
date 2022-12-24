#include <iostream>


class Weapon {
public:
    std::string name;
    double damage;
    double weight;

    Weapon(std::string name, double damage, double weight) : name(name), damage(damage), weight(weight) {}
    Weapon() : name("default"), damage(0), weight(0) {}
};

int main() {
    Weapon a("sword", 10.0, 5.0), b;

    std::cout << "Значения объекта a: \n";
    std::cout << "name: " << a.name << "\n";
    std::cout << "damage: " << a.damage << "\n";
    std::cout << "weight: " << a.weight << "\n";
    std::cout << "Значения объекта b: \n";
    std::cout << "name: " << b.name << "\n";
    std::cout << "damage: " << b.damage << "\n";
    std::cout << "weight: " << b.weight << "\n";
}