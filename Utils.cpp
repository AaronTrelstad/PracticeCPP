//
// Created by Aaron Trelstad on 6/7/24.
//
#include <cstdio>

class Utils {
private:
public:
    static void print(const char* str) {
        while(*str) {
            putchar(*str++);
        }
    }

    static void printInt(int value) {
        if (value == 0) {
            putchar('0');
            return;
        }

        // Can hold a 32-bit integer
        char buffer[10];
        int i = 0;

        if (value < 0) {
            putchar('-');
            value = -value;
        }

        while (value != 0) {
            buffer[i++] = '0' + (value % 10);
            value /= 10;
        }

        while (i > 0) {
            putchar(buffer[--i]);
        }
    }
};