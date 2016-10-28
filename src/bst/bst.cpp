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
int BST<T>::insert_node(Node<T> *current, T value)
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
bool BST<T>::contains(T value)
{
    return contains(root_, value);
}

template <class T>
bool BST<T>::contains(Node<T> *current, T value)
{
    if(current == nullptr) {
        return false;
    }
    if(current.value_ == value) {
        return true;
    } else if(current.value_ < value) {
        return contains(current.right_, value);
    } else {
        return contains(current.left_, value);
    }
}

template <class T>
Node<T>* BST<T>::find_node(Node<T> *current, T value)
{
    if(current == nullptr) {
        return nullptr;   
    }
    if(current.value_ == value) {
        return current;
    } else if(value < current.value_) {
        return find_node(current.left_, value);
    } else {
        return find_node(current.right_, value);
    }

    return nullptr;
}

template <class T>
Node<T>* BST<T>::find_min(Node<T> *current) 
{
    if(current == nullptr) {
        return nullptr;
    } 
    if(current.left_ == nullptr) {
        return current;
    } else {
        return find_min(current.left_);
    }
}

template <class T>
Node<T>* BST<T>::find_max(Node<T> *current)
{
    if(current == nullptr) {
        return nullptr;
    }
    if(current.right_ == nullptr) {
        return current;
    } else {
        return find_max(current.right_);
    }
}


template <class T>
int BST<T>::remove(T value)
{
    Node<T> *delete_node = find_node(value);

    if(delete_node == nullptr) {
        return -1;
    }

}

