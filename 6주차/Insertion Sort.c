#include <stdio.h>

// 삽입 정렬 함수 (오름차순)
void insertionSortAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // 현재 정렬할 대상 원소
        int j = i - 1;
        
        // 정렬된 배열을 뒤에서부터 탐색하며 key보다 큰 원소를 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // 반복문이 끝난 위치의 바로 오른쪽에 key를 삽입
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 34, 12, 52, 6, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSortAscending(arr, n);

    printf("정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}