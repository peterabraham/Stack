#ifndef _ARRAY_STACK_H_
#define _ARRAY_STACK_H_
/**
 * Array stack template class.
 */
template<class T, int nMax>
class Stack
{
public:

    /**
     * Constructor.
     */
    Stack() : m_nCount( 0 )
    {
        m_pStackElements = new T[nMax];
    }

    /**
     * Destructor.
     */
    ~Stack()
    {
        delete [] m_pStackElements;
    }

    /**
     * Function to data into a stack.
     */
    void Push( T value_i )
    {
        if( m_nCount < nMax )
        {
            m_pStackElements[m_nCount++] = value_i;
        }
        else
        {
            throw 1;
        }
    }

    /**
     * Function to pop data from a stack.
     */
    int Pop( T& value_o )
    {
        if( m_nCount > 0 )
        {
            value_o = m_pStackElements[--m_nCount];
            return 1;
        }
        else
        {
            return 0;
        }
    }

private:

    T* m_pStackElements;
    int m_nCount;
};

#endif //_ARRAY_STACK_H_