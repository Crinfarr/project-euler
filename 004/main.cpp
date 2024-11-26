#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int max = 0;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            string num = to_string(i*j);
            string n2 = num;
            reverse(n2.begin(), n2.end());
            if (n2 == num) {
                if ((i * j) > max)
                    max = i * j;
                // cout << n2;
                // printf("\t%i x %i", i, j);
                // cout << endl;
            } 
        }
    }
    cout << max << endl;
}