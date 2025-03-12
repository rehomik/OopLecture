#include <stdio.h>

int main() {
    int numbers[10]; // 정수를 저장할 배열
    int max, min;    // 최댓값과 최솟값 변수

    // 사용자 입력 받기
    printf("10개의 정수를 입력하세요: ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &numbers[i]);
    }

    // 초기값 설정 (첫 번째 요소로)
    max = min = numbers[0];

    // 배열을 순회하며 최댓값과 최솟값 찾기
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    // 결과 출력
    printf("최댓값: %d\n", max);
    printf("최솟값: %d\n", min);

    return 0;
}
