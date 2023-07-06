#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n) {
    int num_bits = sizeof(n) * 8;  // Number of bits in the unsigned long int type

    // Start from the most significant bit and print each bit using bitwise operations
    for (int i = num_bits - 1; i >= 0; i--) {
        unsigned long int mask = 1UL << i;  // Create a mask to extract each bit

        // Check if the current bit is set or not
        if (n & mask) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
    }

    std::cout << std::endl;
}

