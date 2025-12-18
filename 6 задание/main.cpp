#include <iostream>
int main() {
    int a;
    std::cin >> a;
    int f1 = 0;
    int f2 = 1;
    int temp = 0;
    int k = 1;
    while (f2 < a) {
        temp = f2;
        f2 = f1+f2;
        f1 = temp;
        k += 1;
    }
    if (f2 == a) {
        std::cout << k;
    } else {
        std::cout << -1;
    }
}