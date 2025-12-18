#include <iostream>
int main() {
    int a;
    int b;
    std::cin >> a >> b;
    for (int i = b; i >= a; i -= 1) {
        if (i%7 == 0){
            std::cout << i;
            return 0;
        }
    }
    std::cout << -1;
    return 0;
}
