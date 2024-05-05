#include <iostream>
#include <exception>


using namespace std;

void myUnexpected() {
    cout << "Unexpected function called\n";

    terminate();
}

void myTerminate() {
    cout << "Terminate function called\n";

    abort();
}

int main() {
    set_unexpected(myUnexpected);
    set_terminate(myTerminate);

    unexpected();

    //throw 1;  

    // try {
    //     //func();
    //     throw "abc";  
    // } catch (double) {

    // }

    return 0;
}