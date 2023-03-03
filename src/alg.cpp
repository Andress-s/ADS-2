// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, std::int64_t n) {
    if (n == 0)
        return 1;
    double result = 1;
    for (int i = 0; i < n; i++) {
        result *= value;
    }
    return result;
}

std::int64_t fact(std::int16_t n) {
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}

double calcItem(double x, std::int16_t n) {
    double sum = 0;
    sum += (pown(x, n) / fact(n));
    return sum;
}

double expn(double x, std::int16_t count) {
    double ex = 1, p = 1, f = 1;
    for (int i = 0; i < count; i++) {
        ex += (pown(x, p) / fact(f));
        p++;
        f++;
    }
    return ex;
}

double sinn(double x, std::int16_t count) {
    double result = 0;
    int n = 1;
    for (int i = 0; i < count; i++) {
        result += pown(-1, n - 1) * (pown(x, 2 * n - 1) / fact(2 * n - 1));
        n++;
    }
    return result;
}

double cosn(double x, std::int16_t count) {
    double result = 0, n = 1;
    for (int i = 0; i < count; i++) {
        result += pown(-1, n - 1) * (pown(x, 2 * n - 2) / fact(2 * n - 2));
        n++;
    }
    return result;
}
