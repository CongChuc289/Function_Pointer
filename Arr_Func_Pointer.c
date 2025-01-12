//3. Mảng con trỏ hàm
#include <stdio.h>

// Các hàm để sử dụng
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}

int main() {
    // Khai báo mảng con trỏ hàm
    int (*operations[3])(int, int) = {add, subtract, multiply};

    // Gọi các hàm thông qua mảng con trỏ hàm
    printf("Tổng: %d\n", operations[0](10, 5));        // Output: 15
    printf("Hiệu: %d\n", operations[1](10, 5));       // Output: 5
    printf("Tích: %d\n", operations[2](10, 5));       // Output: 50

    return 0;
}
