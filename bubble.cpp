
/*1. �_�w�Ƨǡ]Bubble Sort�^
�_�w�ƧǬO�@��²�檺�ƧǺ�k�C�����Ʀa�M���n�ƧǪ��ƦC�A����۾F����Ӥ���
�A�p�G���̪����ǿ��~�N�⥦�̥洫�L�ӡC�o�ӹL�{�|���ƶi��A����S���A�ݭn�洫����������A���ɼƦC�N�Ƨǧ����F�C*/
#include <stdio.h>
#include <stdlib.h>

// �_�w�ƧǨ��
void bubbleSort(int* arr, int n) {
    //�C�@�ӳ��n�M�����]��5�ӼƴN�u�n��4��
    for (int i = 0; i < n - 1; i++) {
        //�C�@�����֤@�� �U�@���ܦ�4�ӼƧ�3��
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // �p�G��e�����j��U�@�Ӥ����A�h�洫
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("�п�J�����Ӽ�: ");
    scanf("%d", &n);

    // �ʺA���t�O����
    int* arr = (int*)malloc(n * sizeof(int));

    printf("�п�J %d �Ӿ��: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    bubbleSort(arr, n); // �I�s�_�w�ƧǨ��

    printf("�Ƨǫ᪺�Ʋ�: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // ����O����
    return 0;
}
