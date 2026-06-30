//Write a program to Write function for palindrome.

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    if (num < 0) {
        return false; 
    }

    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        if (reversed > (2147483647 - digit) / 10) {
            return false;
        }
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
