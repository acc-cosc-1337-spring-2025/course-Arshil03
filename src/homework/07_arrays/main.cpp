#include <iostream>
#include <vector>
#include "arrays.h"

int main() {
    std::vector<int> numbers = {4, 10, 3, 7, 9};

    int max = get_max_from_vector(numbers);
    double avg = get_average_from_vector(numbers);

    std::cout << "Max: " << max << "\n";
    std::cout << "Average: " << avg << "\n";

    return 0;
}
