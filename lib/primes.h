#pragma once
#include <vector>

class PrimeGen {
    public:
        PrimeGen();
        PrimeGen(int pregenerate);
        ~PrimeGen();
        unsigned long next();
        void pregen(int nprimes);
        std::vector<unsigned long> primeBuffer;
    private:
        int iterVal;
};