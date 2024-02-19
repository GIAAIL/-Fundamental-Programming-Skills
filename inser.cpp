/*3. ���J�Ƨǡ]Insertion Sort�^
���J�ƧǪ��u�@�覡�O�q�L�c�ئ��ǧǦC�A��󥼱ƧǼƾڡA�b�w�ƧǧǦC���q��V�e���y�A
��������m�ô��J�C���J�ƧǦb��{�W�q�`�ĥ� in-place �ƧǡA�]���b�ƧǹL�{���u�ݭn�`�ƯŧO���B�~�Ŷ��C*/
#include <stdio.h>
#include <stdlib.h>

// ���J�ƧǨ��
void insertionSort(int* arr, int n) {
    //���J�O�q�ĤG��}�l�ݰ_
    for (int i = 1; i < n; i++) {
        //���]key�O�ĤG��}�l
        int key = arr[i];
        //j�O�e�@��
        int j = i - 1;
        // �N arr[i] ���J��w�ƧǪ��ǦC��
        //�p�G�e�@��j��ĤG��
        while (j >= 0 && arr[j] > key) {
            //�ĤG�� �P�Ĥ@�줬��
            arr[j + 1] = arr[j];
            //while����
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("�п�J�����Ӽ�: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("�п�J %d �Ӿ��: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n); // �I�s���J�ƧǨ��

    printf("�Ƨǫ᪺�Ʋ�: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
