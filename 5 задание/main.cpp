#include <iostream>
#include <vector>
#include <climits>
int main() {
    int N;
    std::vector<int> a;
    std::cin >> N;
    int x;
    for (int i = 0; i < N; i+=1) {
        std::cin >> x;
        a.push_back(x);
    }
    int mn = INT_MAX;
    int k = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] < mn) {
            k = 1;
            mn = a[i];
        } else if (a[i] == mn) {
            k += 1;
        }
    
    }
    std::cout << k;
}
