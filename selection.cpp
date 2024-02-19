/*2. 選擇排序（Selection Sort）
選擇排序算法是一種原地比較排序算法。它的工作原理是每次從待排序的數據元素中選出最小（或最大）的一個元素，
存放在序列的起始位置，直到全部待排序的數據元素排完。*/
#include <stdio.h>
#include <stdlib.h>

// 選擇排序函數
void selectionSort(int* arr, int n) {
    //假設五個數 找四次
    for (int i = 0; i < n - 1; i++) {
        //預設找出最小的索引
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            //設計如果自己的下一個項小於自己 則最小換人當
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // 更新最小元素的索引
            }
        }
        // 交換當前元素與找到的最小元素
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
//整體邏輯大概是:假設第一個arr[0]是min的索引
//那麼剛好是最小的 即便換了還是自己
//再來如果是arr[1]會先假設是最小 跟下一項目比較 假設下個項目更小 索引交換
//交換後下面會做arr[i]的真正替換


int main() {
    int n;
    printf("請輸入元素個數: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("請輸入 %d 個整數: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n); // 呼叫選擇排序函數

    printf("排序後的數組: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
