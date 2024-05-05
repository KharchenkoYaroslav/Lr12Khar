#include <iostream>
using namespace std;

template <class T> T myAbc(T n){
    return n < 0 ? -n : n;
};


int main()
{
    cout << myAbc(-10) << endl;
    cout << myAbc(-10L) << endl;
    cout << myAbc(-10.01) << endl;

    return 0;
}