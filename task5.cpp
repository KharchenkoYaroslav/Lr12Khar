#include <iostream>
using namespace std;

double divide (double a, double b) {
    if (b == 0) {
        throw "Division by zero is not allowed.";
    }
    return a / b;
}


int main()
{
    try{
        cout << "Test1: " << divide(10.0, 2.0) << endl;
        cout << "Test2: " << divide(10.0, 0.0) << endl;
    }
    catch (const char* str){
        cout << str;
    }
    return 0;
}