#include <iostream>
using namespace std;

void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
int main() {
    int a=10, b=20;
        cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    


    return 0;
}

/*OUTPUT
Before swap: a = 10, b = 20
After swap: a = 20, b = 10
*/
