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

        bool contains(T value);
        bool contains(Node<T> *current, T value);

        Node<T>* find_node(Node<T> *current, T value);
        Node<T>* find_min(Node<T> *current);
        Node<T>* find_max(Node<T> *current);

        int remove(T value);
    private:
        Node<T> *root_;
};
