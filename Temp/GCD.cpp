#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int tmp;
    while(b != 0) {
        tmp = a % b;
        cout << tmp << " ";
        a = b;
        cout << a << " ";
        b = tmp;
        cout << b << " " << endl;
    }
    return a;
}

int main() {

    cout << gcd(234, 192);
}
