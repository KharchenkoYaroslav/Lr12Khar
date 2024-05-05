#include <iostream>

#define SIZE 100

using namespace std;

template <class T> class arraytype {
private:
    T arr[SIZE];
public:
    T& operator [](int i) {
        if (i < 0 || i >= SIZE) {
            cout << "Index value of " << i << " is out of bounds.\n";
            exit(1);
        }
        return arr[i];
    }
};

int main() {
    // arraytype <double> obj1;
    // obj1[1] = 11.5;
    // cout << obj1[1] << endl;

    // arraytype <char> obj2;
    // obj2[2] = 'b';
    // cout << obj2[2] << endl;

    arraytype <int> obj3;
    obj3[SIZE+100] = 99;
    return 0;
}