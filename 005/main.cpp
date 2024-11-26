#include <iostream>
#include <algorithm>

using namespace std;
//could be easily optimized to run several hundred times faster
//by calculating the least common multiple of all numbers [1, 20]
int main() {
    int bf = 1;
    for (int i = 20; i <= 1; i++) {
        if (bf % i == 0)
            continue;
        else {
            bf++;
            i = 20;
        } 
    }
    cout << bf << endl;
}