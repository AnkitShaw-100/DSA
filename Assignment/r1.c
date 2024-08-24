#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1. Array Sum
int arraySum(int arr[], int n) {
    if (n == 0) {
        return 0;
    }
    return arr[n - 1] + arraySum(arr, n - 1);
}

// 2. String Reversal
void reverseString(char* str, int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
}

// 3. Palindrome Check
int isPalindrome(char* str, int start, int end) {
    while (start < end && !isalnum(str[start])) start++;
    while (start < end && !isalnum(str[end])) end--;
    if (start >= end) return 1;
    if (tolower(str[start]) != tolower(str[end])) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

// 4. Power Function
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

// 5. Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

// 6. Permutations
void swap(char* x, char* y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
    } else {
        for (int i = left; i <= right; i++) {
            swap(&str[left], &str[i]);
            permute(str, left + 1, right);
            swap(&str[left], &str[i]);
        }
    }
}

int main() {
    // 1. Array Sum
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = arraySum(arr, n);
    printf("Sum of array elements: %d\n", sum);

    // 2. String Reversal
    char str[100];
    printf("Enter a string to reverse: ");
    scanf("%s", str);
    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    // 3. Palindrome Check
    printf("Enter a string to check palindrome: ");
    scanf("%s", str);
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // 4. Power Function
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("%d raised to the power %d is: %d\n", base, exponent, power(base, exponent));

    // 5. Tower of Hanoi
    int num_disks;
    printf("Enter number of disks for Tower of Hanoi: ");
    scanf("%d", &num_disks);
    towerOfHanoi(num_disks, 'A', 'C', 'B');

    // 6. Permutations
    printf("Enter a string to find permutations: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Permutations of the string:\n");
    permute(str, 0, len - 1);

    return 0;
}
