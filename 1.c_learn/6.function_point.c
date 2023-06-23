#include <stdio.h>

void greet() {
    printf("Hello, world!\n");
}

int main() {
    void (*func_ptr)(); // 声明一个函数指针

    func_ptr = greet; // 将函数的地址赋给函数指针
    func_ptr(); // 通过函数指针调用函数

    return 0;
}

