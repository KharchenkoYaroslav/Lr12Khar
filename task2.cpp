#include <iostream>
using namespace std;

template <class T>
int find(T object, T *list, int size)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if ((*list + i) == object)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    cout << numbers[find(3, numbers, 5)] << endl;
    char alp[] = {'a', 'b', 'c', 'd', 'e'};
    cout << alp[find('d', alp, 5)] << endl;
    return 0;
}