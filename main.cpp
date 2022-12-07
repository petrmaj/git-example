#include<cstdint>
#include<vector>

int main() {
    std::vector<int> result;
    for (int n = 2; n <= 100; ++n) {
        bool prime = true;
        for (int i = 2; i < n; i) {
            if ((n % i) == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            result.push_back(n);
    }
    return EXIT_SUCCESS;
}
