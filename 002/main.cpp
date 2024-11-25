#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    unsigned long sumval = 0;
    unsigned int fibv = 0;
    unsigned int iter = 0;
    while (true) {
        fibv = fib(iter++);
        if (fibv > 4000000)
            break;
        if ((fibv&1) == 0) {
            sumval += fibv;
        }
    }
    cout << sumval << endl;
}