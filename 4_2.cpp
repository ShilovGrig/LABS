#include <iostream>


class Weapon {
public:
    std::string name;
    double damage;
    double weight;

    Weapon(std::string name, double damage, double weight) : name(name), damage(damage), weight(weight) {}
    Weapon() : name("default"), damage(0), weight(0) {}
    ~Weapon() {
        std::cout << "Удаление объекта" << std::endl;
    }

    bool is_max_weight(double max_weight) {
        return max_weight < weight;
    }
    double sum_weight(Weapon* weapon) {
        return sum_weight(weapon->weight);
    }
    double sum_weight(double weight) {
        return this->weight + weight;
    }

};

int main() {
    Weapon* a = new Weapon("sword", 10.0, 5.0);
    std::cout << "Данные объекта a: \n";
    std::cout << a->name << std::endl;
    std::cout << a->damage << std::endl;
    std::cout << a->weight << std::endl;
    delete(a);
    // Тестирование работы всех функций
    Weapon b("sword", 10.0, 5.0), c("sword_2", 10.0, 6.0);
    assert(b.sum_weight(&c) == 11.0);
    assert(b.sum_weight(c.weight) == 11.0);
    assert(b.is_max_weight(4.0) == true);
}