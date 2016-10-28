#include "bst.h"
template <class T>
Node<T>::Node()
{
    value_ = nullptr;
    right_ = nullptr;
    left_ = nullptr;
}

template <class T>
Node<T>::Node(T value)
{
    value_ = value;
    right_ = nullptr;
    left_ = nullptr;
}

template <class T>
Node<T>::Node(T value, Node *right, Node *left)
{
    value_ = value;
    right_ = right;
    left_ = left;
}

template <class T>
BST<T>::BST()
{
    root_ = nullptr;
}

template <class T>
BST<T>::BST(T val)
{
    root_ = new Node<T>(val);
}


template <class T>
int BST<T>::insert(T value)
{
    if(root_ == nullptr) {
        root_ = new Node<T>(value);
    } else {
        insertNode(root_);
    }
    return 1;
}

template <class T>
int insert_node(Node<T> *current, T value)
{
    if(value < current.value_)  {
        if(current.left_ == nullptr) {
            current.left_ = new Node<T>(value);
        } else {
            insertNode(current.left_, value);
        }
    } else {
        if(current.right_ == nullptr) {
            current.Right = new Node<T>(value);
        } else {
            insertNode(current.right_, value);
        }
    }
    return 1;
}

template <class T>
int contains(Node<T> *current, T value)
{
    return 1;
}


template <class T>
int remove(T value)
{
    return 1;
}

