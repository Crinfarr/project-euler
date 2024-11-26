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
        for_each(primes.begin(), primes.end(), [&](int prime) {
            if (i % prime != 0)
                return;
            isPrime = false;
            });
        if (isPrime) {
            primes.push_back(i);
        }
        i+=2;
    }
    cout << primes.back() << endl;
}