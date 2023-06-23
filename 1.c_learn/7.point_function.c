#include <stdio.h>

int* create_array(int size) {
    int* arr = (int*)malloc(size * sizeof(int)); // 动态分配内存
    return arr;
}

int main() {
    int* ptr; // 声明一个指针

    ptr = create_array(5); // 调用指针函数，获取指向数组的指针

    // 使用指针访问数组元素
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); // 释放动态分配的内存

    return 0;
}
