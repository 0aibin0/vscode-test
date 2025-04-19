#include <stdio.h>

// 函数声明
void bubbleSort(int arr[], int n);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("原始数组: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(arr, n);

    printf("排序后的数组: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

// 冒泡排序函数
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)
        // 最后i个元素已经排好序，不需要再比较
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                // 交换arr[j]和arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}
