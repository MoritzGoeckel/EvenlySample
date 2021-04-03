#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

template <typename T>
std::vector<T> sample(const std::vector<T>& input, int elements) {
    std::vector<T> output;
    output.reserve(elements);

    float stepSize = (input.size() - 1) / float(elements - 1);
    for (int i = 0; i < elements; ++i) {
        output.push_back(input[std::round(float(i) * stepSize)]);
    }
    return output;
}

template <typename T>
void print(const std::vector<T>& input) {
    std::for_each(input.begin(), input.end(),
                  [](const T& elem) { std::cout << elem << " "; });
    std::cout << std::endl;
}

int main(int argc, char* argv[]) {
    std::vector<int> x{0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13,
                       14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    print<int>(x);
    print<int>(sample<int>(x, 10));
    return 0;
}
