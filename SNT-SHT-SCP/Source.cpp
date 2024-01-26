/*
SNT: (prime) là số chỉ chia hết cho 1 và chính nó 
SHT: (complete number) tổng các ước số nhỏ hơn nó bằng số đó 
SCP: (orthography) căn bậc 2 là số nguyên 
*/
#include "Header.h"

bool isPrime(int number) {
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return number > 1;
}

bool isCompleteNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0)
            sum += i;
    }
    return sum == number;
}

bool isOrthography(int number) {
    int root = sqrt(number);
    return pow(root,2) == number;
}