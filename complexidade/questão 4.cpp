#include <iostream>
#include <cmath>

using namespace std;

// Definição da função f(n)
double f(double n) {
    return pow(n, 3) - 49 * n + 500;
}

int main() {
    double a = 0, b = 10, tol = 0.0001;
    double n_min = (a + b) / 2.0;

    while (abs(f(n_min)) > tol) {
        if (f(a) * f(n_min) < 0) {
            b = n_min;
        } else {
            a = n_min;
        }
        n_min = (a + b) / 2.0;
    }

    cout << "O menor valor de n para o qual A leva menos tempo que B é aproximadamente: " << n_min << endl;

    return 0;
}
