#include <iostream>
using namespace std;


void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
}

int main() {
    int a = 10, b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

   
    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

/*OUTPUT
Before swap: a = 10, b = 20
Inside swap function: a = 20, b = 10
After swap: a = 10, b = 20
*/
