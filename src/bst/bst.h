template <class T>
class Node
{
    public:
        Node();
        Node(T value);
        Node(T value, Node *left, Node *right);
    public:
        T value_; 
        Node *right_;
        Node *left_;

};



template <class T>
class BST
{
    public:
        BST();
        BST(T value); 
        int insert(T value);        
        int insert_node(Node<T> *current, T value);
        int contains(Node<T> *current, T value);
        int remove(T value);
    private:
        Node<T> *root_;
};
