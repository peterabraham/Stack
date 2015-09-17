#include <iostream>
//#include "ArrayStack.h"
#include "LinkedStack.h"

using namespace std;

int main( int argc, char** argv )
{
    int nNum = 0;
    //Stack<int, 10> stack;
    Stack <int> stack;
    cout << "Enter some numbers followed by a non numeric character" << endl;
    try
    {
        while( cin >> nNum )
        {
            stack.Push( nNum );
        }
    }
    catch( ... )
    {
        cout << "Stack overflow!!!..." << endl;
    }

    cout<< "\nItems droped from int stack" << endl;
    while( stack.Pop( nNum ))
    {
        cout<< nNum << endl;
    }

    return 0;
}