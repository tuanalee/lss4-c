#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    int soDienTieuThu;
    long long tienDien = 0;

    printf("Nhap chi so c�ng to dien dau th�ng: ");
    scanf("%d", &chiSoCu);
    printf("Nhap chi so c�ng to dien cuoi th�ng: ");
    scanf("%d", &chiSoMoi);

    
    soDienTieuThu = chiSoMoi - chiSoCu;

    if (soDienTieuThu < 0) {
        printf("Chi so c�ng to moi phai lon hon chi so c�ng to cu.\n");
        return 1; 
    }

    if (soDienTieuThu < 50) {
        tienDien = soDienTieuThu * 10000;
    } else if (soDienTieuThu < 100) {
        tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu < 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu < 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    }

    printf("So dien ti�u thu trong th�ng: %d kWh\n", soDienTieuThu);
    printf("Tien dien phai tra: %lld VN�\n", tienDien);

    return 0;
}

