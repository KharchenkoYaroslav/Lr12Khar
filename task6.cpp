#include <iostream>
using namespace std;

template <class T>
T find_most_occurrences(T object, T* list, int size) {
    T temp[size];
    int count[size];

    for (int i = 0; i < size; i++) {
        temp[i] = list[i];
        count[i] = 0;
    }

    int index = 0;

    for (int i = 0; i < size; i++) {
        bool found = false;
        for (int j = 0; j < index; j++) {
            if (temp[j] == list[i]) {
                count[j]++;
                found = true;
                break;
            }
        }

        if (!found) {
            temp[index] = list[i];
            count[index] = 1;
            index++;
        }
    }

    int maxCount = 0;

    for (int i = 0; i < index; i++) {
        if (count[i] > maxCount) {
            maxCount = i;
        }
    }

    return temp[maxCount];
}

int main() {
    int numbers[] = {1, 1, 3, 2, 3, 3, 4, 5};
    cout << find_most_occurrences(3, numbers, sizeof(numbers) / sizeof(numbers[0])) << endl;
    char alp[] = {'a', 'b', 'b', 'c', 'd', 'e'};
    cout << find_most_occurrences('d', alp, sizeof(alp) / sizeof(alp[0])) << endl;
    return 0;
}