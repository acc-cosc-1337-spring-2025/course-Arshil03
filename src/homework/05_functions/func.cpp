//add include statements
#include "func.h"
#include <algorithm>

//add function code here
double get_gc_content(const std::string &dna) {
    if (dna.empty()) return 0.0;

    int gc_count = 0;
    for (char base : dna) {
        if (base == 'G' || base == 'C') {
            gc_count++;
        }
    }
    return (static_cast<double>(gc_count) / dna.size()) * 100;
}

std::string reverse_string(std::string dna) {
    int n = dna.length();
    for (int i = 0; i < n / 2; i++) {
        std::swap(dna[i], dna[n - i - 1]);
    }
    return dna;
}

std::string get_dna_complement(std::string dna) {
    dna = reverse_string(dna); // Reverse first
    for (char &base : dna) {
        switch (base) {
            case 'A': base = 'T'; break;
            case 'T': base = 'A'; break;
            case 'C': base = 'G'; break;
            case 'G': base = 'C'; break;
        }
    }
    return dna;
}