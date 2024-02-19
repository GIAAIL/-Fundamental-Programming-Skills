/*2. ��ܱƧǡ]Selection Sort�^
��ܱƧǺ�k�O�@�ح�a����ƧǺ�k�C�����u�@��z�O�C���q�ݱƧǪ��ƾڤ�������X�̤p�]�γ̤j�^���@�Ӥ����A
�s��b�ǦC���_�l��m�A��������ݱƧǪ��ƾڤ����Ƨ��C*/
#include <stdio.h>
#include <stdlib.h>

// ��ܱƧǨ��
void selectionSort(int* arr, int n) {
    //���]���Ӽ� ��|��
    for (int i = 0; i < n - 1; i++) {
        //�w�]��X�̤p������
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            //�]�p�p�G�ۤv���U�@�Ӷ��p��ۤv �h�̤p���H��
            if (arr[j] < arr[min_idx]) {
                min_idx = j; // ��s�̤p����������
            }
        }
        // �洫��e�����P��쪺�̤p����
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
//�����޿�j���O:���]�Ĥ@��arr[0]�Omin������
//�����n�O�̤p�� �Y�K���F�٬O�ۤv
//�A�Ӧp�G�Oarr[1]�|�����]�O�̤p ��U�@���ؤ�� ���]�U�Ӷ��ا�p ���ޥ洫
//�洫��U���|��arr[i]���u������


int main() {
    int n;
    printf("�п�J�����Ӽ�: ");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    printf("�п�J %d �Ӿ��: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n); // �I�s��ܱƧǨ��

    printf("�Ƨǫ᪺�Ʋ�: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
