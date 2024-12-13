#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[1000];
    int dem[256] = {0}, i;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] != '\n') dem[(int)chuoi[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (dem[i] > 0) printf("%c: %d\n", i, dem[i]);
    }

    return 0;
}

