#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000], ky_tu, ket_qua[1000];
    int i, j = 0;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ky_tu);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != ky_tu) {
            ket_qua[j++] = chuoi[i];
        }
    }
    ket_qua[j] = '\0';

    printf("Chuoi sau khi xoa: %s", ket_qua);

    return 0;
}
