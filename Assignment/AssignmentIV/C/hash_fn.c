/*
   ========================================
   hash_fn.c — implement your hash functions
   ========================================

   Description:
    This file contains the hash functions for integer and string keys.

   Development History:
    - 2025/11/11: Initial implementation
    - 2025/11/17: Refactored to use hash_fn.h

   Developer: Yu-Feng Huang <yfhuang@saturn.yzu.edu.tw>
 */

#include "hash_fn.h"
#include <stdio.h>
#include <stdlib.h> // For abs()

int myHashInt(int key, int m) {
    // TODO: replace with your own design
    if (m <= 0) {     
        return 0;
    }
    return abs(key) % m;  
    // division method example
}

int myHashString(const char* str, int m) {
    if (m <= 0) return 0;
    unsigned long hash = 0;
    int c;

    while ((c = *str++)) {
        hash = hash * 31 + c;
    }
    // TODO: replace with your own design
    return (int)(hash % m); // basic division method
}
