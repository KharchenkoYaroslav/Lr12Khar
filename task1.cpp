#include <iostream>
using namespace std;

template <class T> T Mymin(T a, T b){
    return (a < b)? a : b;
};


int main()
{
    cout << Mymin(3,4) << endl;
    cout << Mymin('c', 'a') << endl;

    return 0;
}