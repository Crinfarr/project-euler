#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);
    unsigned long i = 3;
    while (primes.size() < 10001) {
        bool isPrime = true;
        for (unsigned long prime : primes) {
            if (i % prime != 0)
                continue;
            isPrime = false;
            break;
        }
        if (isPrime) {
            primes.push_back(i);
        }
        i+=2;
    }
    cout << primes.back() << endl;
}