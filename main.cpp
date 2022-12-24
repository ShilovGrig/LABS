#include "AVLTree.h"

int main() {
    std::cout << "Введите количество элементов в последовательности:\n";
    int n; std::cin >> n;
    std::cout << "Введите элементы для вставки в дерево:\n";
    AVLTree<int> root;
    for(int i = 0; i < n; i++) {
        int x; std::cin >> x;
        root.insert(x);
    }
    // root.display();
    // Получение элементов дерево, после вставки которых балансировка производиться не будет
    auto v = root.get_nodes_num();
    std::vector<int> res;
    AVLTree<int> root2;
    std::cout << "Набор чисел, входящих в заданную последовательность на основе которой можно сформировать сбалансированное дерево без дополнительной балансировки:\n";
    for(auto &u : v) {
        root2.insert(u);
        std::cout << u << " ";
    }
    std::cout << std::endl;
    return 0;
}
