#include <stdio.h>
#include <stdlib.h>
#define IS_PRIME(n) (isPrime(n))
int isPrime(int n) {
    if (n <= 1) return 0; // 0 và 1 không phải là số nguyên tố
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Nếu n chia hết cho một số khác 1 và chính nó thì không phải là số nguyên tố
    }
    return 1; // Nếu không có số nào chia hết thì là số nguyên tố
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Sử dụng: %s <số_nguyên_dương_a> <số_nguyên_dương_b>\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (a < 1 || b > 1000000000 || a > b)
    {
        printf("Đối số không hợp lệ. Yêu cầu: 1 <= a <= b <= 10^9\n");
        return 1;
    }

    printf("Các số nguyên tố từ %d đến %d là:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (IS_PRIME(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}