#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long max_factor(long n) {
    long max = 0;
    unsigned long z = 2L;
    while (z*z <= n) {
        if (n % z == 0) {
            if (z > max) {
                max = z;
            }
            n /= z;
            
        } else {
            z++;
        }
    }
    if (n > 1)
        if (n > max)
            max = n;
    return max;
}

int main() {
    cout << max_factor(600851475143L) << endl;
}