#include "AVLTreeBase.h"


#ifndef AVLTree_h
#define AVLTree_h

template <typename T>
class AVLTree : public AVLTreeBase<T> {
protected:
    void balance(std::vector<AVLTreeNode<T>**> path) override;
public:
    std::vector<T> get_nodes_num();
};

#endif



