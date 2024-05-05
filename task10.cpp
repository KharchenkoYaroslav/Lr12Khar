#include <iostream>
using namespace std;

#define SIZE 3

template <class T1, class T2>
class Obj
{
    T1 i;
    T2 j;

public:
    Obj &set_get(T1 a, T2 b)
    {
        i = a;
        j = b;
        return *this;
    }
    friend ostream &operator<<(ostream &os, const Obj &o)
    {
        os << "i: " << o.i << ", j: " << o.j;
        return os;
    }
};

template <class T1, class T2>
class Stack
{
    Obj<T1, T2> stck[SIZE]; // holds the stack
    int tos;                // index of top of stack
public:
    Stack() : tos(0){};          // initialize stack
    void push(Obj<T1, T2> &obj); // push object on stack
    Obj<T1, T2> pop();           // pop object from stack
};

template <class T1, class T2>
void Stack<T1, T2>::push(Obj<T1, T2> &obj)
{
    if (tos == SIZE)
    {
        throw "Stack is full";
    }
    stck[tos] = obj;
    tos++;
}

template <class T1, class T2>
Obj<T1, T2> Stack<T1, T2>::pop()
{
    if (tos == 0)
    {
        throw "Stack is empty";
    }
    tos--;
    return stck[tos];
}

int main()
{
    Stack<int, char> s1;

    Obj<int, char> o;

    try
    {
        s1.push(o.set_get(1, 'a'));
        s1.push(o.set_get(2, 'b'));
        s1.push(o.set_get(3, 'c'));
        s1.push(o.set_get(4, 'd'));
    }
    catch (const char *str)
    {
        cout << str << endl;
    }

    for (int i = 0; i < 6; i++)
    {
        try
        {
            cout << "S1 pop: " << s1.pop() << endl;
        }
        catch (const char *str)
        {
            cout << str << endl;
        }
    }

    return 0;
}