#include "primes.h"

PrimeGen::PrimeGen() {
    this->iterVal = 3;
    this->primeBuffer.push_back(2);
    this->primeBuffer.push_back(3);
}
PrimeGen::PrimeGen(int pregenCount) {
    this->iterVal = 3;
    this->primeBuffer.push_back(2);
    this->primeBuffer.push_back(3);
    this->pregen(pregenCount);
}
PrimeGen::~PrimeGen() { }
unsigned long PrimeGen::next() {
    while (true) {
        iterVal += 2;
        bool isPrime = true;
        for (unsigned long prime : primeBuffer) {
            if (iterVal % prime != 0)
                continue;
            isPrime = false;
        }
        if (isPrime) {
            this->primeBuffer.push_back(iterVal);
            return iterVal;
        }
    }
}

/**
 * unsigned long iterval = 3
 * std::vector<unsigned long> primeBuffer = {2, 3}
 */
void PrimeGen::pregen(int nprimes) {
    while (primeBuffer.size() < (nprimes)) {
        bool isPrime = true;
        for (unsigned long prime : primeBuffer) {
            if (iterVal % prime != 0)
                continue;
            isPrime = false;
            break;
        }
        if (isPrime)
            primeBuffer.push_back(iterVal);
        iterVal += 2;
    }
}