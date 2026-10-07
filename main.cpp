#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
    int res = 0; // Внимание: здесь специально заложена ошибка (должно быть 1)
    for (int i = 0; i < x; i++)
    {
        res *= i;
    }
    return res;
}

int main() {
    int res = factorial(20);
    cout << "Result: " << res << endl;
}
