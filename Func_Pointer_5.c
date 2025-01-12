//5.Con trỏ hàm trong cấu trúc
#include <stdio.h>

// Cấu trúc chứa con trỏ hàm
struct Operation {
    int (*operation)(int, int);
};

// Hàm cộng
int add(int a, int b) {
    return a + b;
}

int main() {
    // Khởi tạo cấu trúc với con trỏ hàm
    struct Operation op;
    op.operation = add;

    // Gọi hàm thông qua cấu trúc
    printf("Kết quả: %d\n", op.operation(3, 9)); // Output: 12

    return 0;
}
