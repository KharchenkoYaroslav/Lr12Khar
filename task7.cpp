#include <iostream>
using namespace std;

template <class T>
T Mysum(T object, T* list, int size) {
    T sum = *list;

    for (int i = 1; i < size; i++) {
        sum += *(list + i);
    }
    return sum;
}

int main() {
    int numbers[] = {1, 1, 3, 2, 3, 3, 4, 5};
    cout << Mysum(3, numbers, sizeof(numbers) / sizeof(numbers[0])) << endl;
    char alp[] = {'a', 'b', 'b', 'c', 'd', 'e'};
    cout << Mysum('d', alp, sizeof(alp) / sizeof(alp[0])) << endl;
    return 0;
}