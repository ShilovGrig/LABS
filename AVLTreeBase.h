#ifndef AVLTreeBase_h
#define AVLTreeBase_h

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include "AVLTreeNode.h"

template <typename T>
class AVLTreeBase {
protected:
    int _size;
    AVLTreeNode<T> *root;
    
    virtual void balance(std::vector<AVLTreeNode<T>**> path) {};
    void display(AVLTreeNode<T>* cur, int depth=0, int state=0);
public:
    AVLTreeBase();
    ~AVLTreeBase();
    
    void insert(T value);
    void erase(T value);
    
    void clear();
    bool empty() const;
    int size() const;
    
    int find(T value) const;
    int lower_bound(T value) const;
    int upper_bound(T value) const;
    
    const T& find_min() const;
    const T& find_max() const;
    const T& operator[](std::size_t idx) const;
    
    void display();
};

#endif
