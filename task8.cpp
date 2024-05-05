#include <iostream>
using namespace std;

template <class T>
void MySort(T object, T* list, int size) {
    for (int i = 0; i < size -1;  i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (list[j] > list[j + 1]) {
                T temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[] = {1, 1, 3, 2, 3, 3, 4, 5};
    MySort(3, numbers, sizeof(numbers) / sizeof(numbers[0]));

    for(int i = 0; i < (int)(sizeof(numbers) / sizeof(numbers[0])); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    char alp[] = {'a', 'b', 'b', 'c', 'd', 'e'};
    MySort('d', alp, sizeof(alp) / sizeof(alp[0]));

    for(int i = 0; i < (int)(sizeof(alp) / sizeof(alp[0])); i++){
        cout << alp[i] << " ";
    }
    cout << endl;


    return 0;
}