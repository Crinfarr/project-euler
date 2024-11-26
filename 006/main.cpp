#include <iostream>

using namespace std;
int main() {
    unsigned long squares = 0L;
    unsigned long summed = 0L;
    for (int i = 1; i <= 100; i++) {
        summed += i;
        squares += i * i;
    }
    summed *= summed;
    cout << (summed - squares) << endl;
}