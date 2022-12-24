#include "AVLTree.h"
#include <queue>

template <class T>
void AVLTree<T>::balance(
    std::vector<AVLTreeNode<T> **> path) { // starting from root
  std::reverse(path.begin(), path.end());

  for (auto indirect : path) {
    (*indirect)->updateValues();

    if ((*indirect)->balanceFactor() >= 2 and
        (*indirect)->left->balanceFactor() >= 0) { // left - left
        // std::cout << "left - left" << std::endl;
      *indirect = (*indirect)->right_rotate();
    } else if ((*indirect)->balanceFactor() >= 2) { // left - right
      // std::cout << "left - right" << std::endl;
      (*indirect)->left = (*indirect)->left->left_rotate();
      *indirect = (*indirect)->right_rotate();
    }
    else if ((*indirect)->balanceFactor() <= -2 and
             (*indirect)->right->balanceFactor() <= 0) { // right - right
            // std::cout << "right - right" << std::endl;
      *indirect = (*indirect)->left_rotate();
    } else if ((*indirect)->balanceFactor() <= -2) { // right - left
    // std::cout << "right - left" << std::endl;
      (*indirect)->right = ((*indirect)->right)->right_rotate();
      *indirect = (*indirect)->left_rotate();
    }
  }
}

template<typename T>
std::vector<T> AVLTree<T>::get_nodes_num() {
    std::vector<T> v;
    auto root = this->root;
    std::queue<AVLTreeNode<T>*> q;
    q.push(root);
    q.push(root->left);
    q.push(root->right);
    while (!q.empty()) {
        auto data = q.front(); q.pop();
        root = data;
        if(root == nullptr) {
          continue;
        }
        v.push_back(root->value);
        if(root->left != nullptr) q.push(root->left->left);
        if(root->right != nullptr)q.push(root->right->right);
        if(root->left != nullptr) q.push(root->left->right);
        if(root->right != nullptr) q.push(root->right->left);

    }
    return v;
}

template class AVLTree<int>;
template class AVLTree<short>;
template class AVLTree<long>;
template class AVLTree<long long>;
template class AVLTree<std::string>;
