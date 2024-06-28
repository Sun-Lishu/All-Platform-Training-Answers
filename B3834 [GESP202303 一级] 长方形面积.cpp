#include <iostream>
#include <cmath>

int countsss(int area) {
    int count = 0;
    for (int i = 1; i <= std::sqrt(area); ++i) {
        if (area % i == 0) {
            int j = area / i;
            if (i <= j) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int A;
    std::cin >> A;
    std::cout << countsss(A) << std::endl;
    return 0;
}
