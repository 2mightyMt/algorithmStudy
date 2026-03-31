#include <stdio.h>

int main() {
    int x, y;
	while (scanf("%d %d", &x, &y) != EOF) { // EOF: End Of File 발생
        int result = x + y; // x와 y의 합을 계산
        printf("%d\n", result);
    }
    return 0;
    }