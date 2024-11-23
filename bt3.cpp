#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap vao mot so nguyen: ");
    scanf("%d", &n);

    
    if (n % 3 == 0 && n % 5 == 0) {
        printf("So %d chia het cho 3 va 5.\n", n);
    } else if (n % 3 == 0) {
        printf("So %d chia het cho 3.\n", n);
    } else if (n % 5 == 0) {
        printf("So %d chia het cho 5.\n", n);
    } else {
        printf("So %d khong chia het cho 3 hay 5.\n", n);
    }

    return 0;
}
