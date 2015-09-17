/**
 * Node structure of linked stack
 */
template<class T>
struct Node
{
    T data;
    Node<T>* pstNextNode;
};

/**
 * Linked Stack class
 */
template<class T>
class Stack
{
public:

    /**
     * Constructor
     */
    Stack() : pstStartNode( NULL )
    {
    }

    // Destructor
    ~Stack();

    /**
     * Function to push into the stack.
     */
    void Push( T data_i )
    {
        Node<T>* pstTemp = pstStartNode;
        pstStartNode = new Node<T>;
        pstStartNode->data = data_i;
        pstStartNode->pstNextNode = pstTemp;
    }

    /**
     * Function to pop from the stack.
     */
    int Pop( T& data_o )
    {
        if( NULL != pstStartNode )
        {
            Node<T>* pstTemp = pstStartNode;
            data_o = pstStartNode->data;
            pstStartNode = pstStartNode->pstNextNode;
            delete pstTemp;
            return 1;
        }
        return 0;
    }

private:

    Node<T>* pstStartNode;
};

/**
 * Destructor
 */
template<class T>
Stack<T>::~Stack()
{
    Node<T>* pstTemp = NULL;
    while( NULL != pstStartNode )
    {
        pstTemp = pstStartNode;
        pstStartNode = pstStartNode->pstNextNode;
        delete pstTemp;
    }
}