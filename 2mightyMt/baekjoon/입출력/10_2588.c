// 2588 곱셈

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d\n %d", &A, &B );
    //  472 % 10 = 2 
    // (472/10)%10 = 7
    // (472/100) = 4

    // 385 % 10 = 5
    // (385/10)%10 = 8
    // (385/100) = 3
    
    printf("%d\n", A*(B%10)); // 3
    printf("%d\n", A*((B/10)%10)); // 4 
    printf("%d\n", A*(B/100)); // 5 
    printf("%d\n", A*B); // 6

    return 0;
}