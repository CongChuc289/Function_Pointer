#include <stdio.h>

// Hàm bình thường
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b, int c){
    return c - b - a;
}

int main() {
    // Khai báo con trỏ hàm
    int (*func_ptr_1)(int, int);
    int (*func_ptr_2)(int, int, int);    

    // Gán địa chỉ hàm add cho con trỏ
    func_ptr_1 = add;
    func_ptr_2 = subtract;

    // Gọi hàm thông qua con trỏ
    printf("result: %d\n", func_ptr_1(3, 4)); // Output: 7
    printf("result: %d\n", func_ptr_2(1, 2, 3)); // Output: 0

    return 0;
}
