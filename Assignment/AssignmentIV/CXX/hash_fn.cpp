/*
   ========================================
   hash_fn.cpp — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.hpp

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */
#include "hash_fn.hpp"
#include <iostream>
#include <cmath>   // for std::abs
#include <string>  // for std::string

int myHashInt(int key, int m) {
    if (m <= 0) return 0;
    // TODO: replace with your own design
    return std::abs(key) % m; // basic division method
}

int myHashString(const std::string& str, int m) {
    if (m <= 0) return 0;
    unsigned long hash = 0;
    for (char c : str) {
        hash = hash * 31 + c;
    }
    return (int)(hash % m);  // basic division method
}
