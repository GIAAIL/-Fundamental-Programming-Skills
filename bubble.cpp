
/*1. 冒泡排序（Bubble Sort）
冒泡排序是一種簡單的排序算法。它重複地遍歷要排序的數列，比較相鄰的兩個元素
，如果它們的順序錯誤就把它們交換過來。這個過程會重複進行，直到沒有再需要交換的元素為止，此時數列就排序完成了。*/
#include <stdio.h>
#include <stdlib.h>

// 冒泡排序函數
void bubbleSort(int* arr, int n) {
    //每一個都要遍歷假設有5個數就只要找4次
    for (int i = 0; i < n - 1; i++) {
        //每一次都少一次 下一輪變成4個數找3次
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // 如果當前元素大於下一個元素，則交換
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("請輸入元素個數: ");
    scanf("%d", &n);

    // 動態分配記憶體
    int* arr = (int*)malloc(n * sizeof(int));

    printf("請輸入 %d 個整數: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n); // 呼叫冒泡排序函數

    printf("排序後的數組: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // 釋放記憶體
    return 0;
}
