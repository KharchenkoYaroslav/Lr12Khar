#include <iostream>
using namespace std;

#define SIZE 10

template <class StackType>
class Stack
{
    StackType stck[SIZE]; // holds the stack
    int tos;              // index of top of stack
public:
    void init() { tos = 0; };  // initialize stack
    void push(StackType obj); // push object on stack
    StackType pop();         // pop object from stack
};
template <class StackType>
void Stack<StackType>::push(StackType obj)
{
    if (tos == SIZE)
    {
        cout << "stack is full";
        return;
    }
    stck[tos] = obj;
    tos++;
}
// Pop a character (Выталкивание символа из стека)
template <class StackType>
StackType Stack<StackType>::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty";
        return 0; // return null on empty stack
    }
    tos--;
    return stck[tos];
}

int main()
{
    Stack<int> s1;
    Stack<char> s2;

    s1.init();
    s2.init();

    s1.push(1);
    s1.push(2);
    s1.push(3);

    s2.push('a');
    s2.push('b');
    s2.push('c');

    for (int i = 0; i < 3; i++)
    {
        cout << "S1 pop:" << s1.pop() << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "S2 pop:" << s2.pop() << endl;
    }

    return 0;
}