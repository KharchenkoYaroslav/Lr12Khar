#include <iostream>
using namespace std;

template <class T>
class Input
{
public: 
    T obj;
    Input(string message, T min, T max){
        while (true)
        {
            cout << message;
            cin >> obj;
            if ((obj >= min) && (obj <= max)){
                break;
            }
        }
    }

public:

};


int main()
{
    Input<int> num ("Enter number: ", 2, 6);

    cout << num.obj << endl;

    Input<char> alph ("Enter letter: ", 'a', 'e');

    cout << alph.obj << endl;
    return 0;
}