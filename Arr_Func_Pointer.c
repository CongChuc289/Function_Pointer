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

void Func1(void){
    printf("Func1\n");
}

void Func2(void){
    printf("Func2\n");
}

// Khai báo mảng con trỏ hàm
int (*operations[3])(int, int) = {add, subtract, multiply}; // Có tham số truyền vào
void (*Function[2])(void) = {Func1, Func2};                 // không có tham sô truyền vào

int main() {
    Function[0]();
    Function[1]();
    
    // Gọi các hàm thông qua mảng con trỏ hàm
    printf("Tổng: %d\n", operations[0](10, 5));        // Output: 15
    printf("Hiệu: %d\n", operations[1](10, 5));       // Output: 5
    printf("Tích: %d\n", operations[2](10, 5));       // Output: 50

    return 0;
}
