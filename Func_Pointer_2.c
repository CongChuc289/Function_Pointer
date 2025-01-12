#include <stdio.h>

// Hàm để truyền làm tham số
int multiply(int a, int b) {
    return a * b;
}

// Hàm nhận con trỏ hàm làm tham số
void execute(int (*operation)(int, int), int x, int y) {
    printf("result: %d\n", operation(x, y));
}

int main() {
    // Gọi hàm execute với hàm multiply
    execute(multiply, 5, 6); // Output: 30

    return 0;
}
