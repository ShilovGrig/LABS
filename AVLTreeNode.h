#ifndef AVLTreeNode_hpp
#define AVLTreeNode_hpp

#include <string>
#include <algorithm>

template <typename T>
struct AVLTreeNode {
    AVLTreeNode *left;
    AVLTreeNode *right;
    
    const T value;
    int count;
    int height;
    
    AVLTreeNode(T value);
    virtual void updateValues();
    virtual int balanceFactor();
    
    AVLTreeNode* left_rotate();
    AVLTreeNode* right_rotate();
};

#endif
