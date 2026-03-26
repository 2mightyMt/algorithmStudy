// 빠른 A + B , 15분 소요 , 15552
#include <stdio.h>

int main() {

    int t;
    int a, b;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d \n", a + b);
    }

    return 0;
}