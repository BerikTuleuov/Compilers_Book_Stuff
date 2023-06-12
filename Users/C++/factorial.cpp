/*
/opt/gcc-4.9.2/bin/g++ factorial.cpp
/opt/gcc-4.9.2/bin/g++ factorial.cpp -lgmp
g++ factorial.cpp -I/local/include -L/local/lib -lgmp -lgmpxx -std=c++11
cat 10000000.txt
./a.exe > 10000000.txt
*/

#define N 10000000

#include <iostream>
#include <chrono>
#include <gmpxx.h>

using namespace std;
using namespace std::chrono;


int main(){
//    steady_clock::time_point start;
//    steady_clock::time_point end;

    mpz_class fact = 1;

    std::chrono::steady_clock::time_point start = std::chrono::steady_clock::now();
    for (int i=2; i<=N; ++i)
        fact *= i;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Calculated in " << chrono::duration_cast<chrono::seconds>(end - start).count() << "s" << std::endl; // microseconds nanoseconds
    std::cout << "Calculated in " << chrono::duration_cast<chrono::microseconds>(end - start).count() << "mcs" << std::endl; // microseconds nanoseconds
    std::cout << "Calculated in " << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << "ns" << std::endl; // microseconds nanoseconds

//    std::cout << "0x" << fact.get_str(16) << "\n";
    std::cout << N << "! = " << fact.get_str(10) << "\n";
    return 0;
}
