//add function(s) code here
#include "arrays.h"

int get_max_from_vector(const std::vector<int>& numbers) {
    int max = numbers[0];
    for (int num : numbers) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

double get_average_from_vector(const std::vector<int>& numbers) {
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}
