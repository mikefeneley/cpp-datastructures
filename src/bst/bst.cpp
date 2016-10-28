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
Node<T>::~Node()
{
    delete(value_);
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
BST<T>::~BST()
{
     preorder_delete(root_);  
}

template <class T>
int BST<T>::preorder_delete(Node<T> *current)
{
    if(current != nullptr) {
        preorder_delete(current.left_);
        preorder_delete(current.right_);
        delete current;
    }
    return 1;
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
Node<T>* find_parent(Node<T> *current, T value)
{
    if(current.value_ == value) {
        return nullptr;
    }
    if(value < current.value_) {
        if(current.left_ == nullptr) {
            return nullptr;
        } else if(current.left_.value_ == value) {
            return current;
        } else {
            return find_parent(current.left_, value);
        }
    } else {
        if(current.right_ == nullptr) {
            return nullptr;
        } else if(current.right_.value_ == value) {
            return current;
        } else {
            return find_parent(current.right_, value);
        }
    }
    return nullptr;
}

template <class T>
int BST<T>::remove(T value)
{
    Node<T> *delete_node = find_node(value);
    Node<T> *parent_node; 
    Node<T> *left = delete_node.left_;
    Node<T> *right = delete_node.right_;
    if(delete_node == nullptr) {
        return 0;
    }
    parent_node = find_parent(delete_node);
    if(delete_node.left_ != nullptr && delete_node.right == nullptr) {
        if(delete_node.value_ < parent_node.value_) {
            delete delete_node;
            parent_node.left_ = nullptr;  
        } else {
            delete delete_node;
            parent_node.right_ = nullptr;
        }
    }     
    
    return 0;   

}

