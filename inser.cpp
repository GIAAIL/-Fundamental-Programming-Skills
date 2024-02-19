/*3. 插入排序（Insertion Sort）
插入排序的工作方式是通過構建有序序列，對於未排序數據，在已排序序列中從後向前掃描，
找到相應位置並插入。插入排序在實現上通常採用 in-place 排序，因為在排序過程中只需要常數級別的額外空間。*/
#include <stdio.h>
#include <stdlib.h>

// 插入排序函數
void insertionSort(int* arr, int n) {
    //插入是從第二位開始看起
    for (int i = 1; i < n; i++) {
        //假設key是第二位開始
        int key = arr[i];
        //j是前一位
        int j = i - 1;
        // 將 arr[i] 插入到已排序的序列中
        //如果前一位大於第二位
        while (j >= 0 && arr[j] > key) {
            //第二位 與第一位互換
            arr[j + 1] = arr[j];
            //while結束
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("請輸入元素個數: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("請輸入 %d 個整數: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n); // 呼叫插入排序函數

    printf("排序後的數組: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
