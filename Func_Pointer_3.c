//4. Con trỏ hàm trả về con trỏ hàm
#include <stdio.h>

// Hàm trả về con trỏ hàm
int add(int a, int b) {
    return a + b;
}

int (*getOperation())(int, int) {
    return add;
}

int main() {
    // Lấy con trỏ hàm thông qua hàm trả về
    int (*operation)(int, int) = getOperation();

    // Gọi hàm thông qua con trỏ
    printf("Kết quả: %d\n", operation(7, 8)); // Output: 15

    return 0;
}
