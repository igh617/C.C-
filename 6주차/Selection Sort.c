#include <stdio.h>

// 선택 정렬 함수 (오름차순)
void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // 가장 작은 원소의 인덱스를 i로 가정
        
        // 미정렬 부분에서 더 작은 원소가 있는지 탐색
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // 더 작은 원소를 찾으면 minIndex 갱신
            }
        }
        
        // 찾은 최소값과 현재 위치(i)의 값을 교환 (temp 변수 사용)
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortAscending(arr, n);

    printf("정렬된 배열: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}