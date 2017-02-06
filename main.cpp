#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

#include "BigInt.h"

int main() {
    BigInt a = 2;
    BigInt n = 100;

    cout << pow(a, n) << endl;

    return 0;
}