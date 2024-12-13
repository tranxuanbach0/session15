#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int so_chu_cai = 0, so_chu_so = 0, so_ky_tu_dac_biet = 0;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    for (int i = 0; i < strlen(chuoi); i++) {
        if (isalpha(chuoi[i])) so_chu_cai++;
        else if (isdigit(chuoi[i])) so_chu_so++;
        else if (!isspace(chuoi[i])) so_ky_tu_dac_biet++;
    }

    printf("So ky tu la chu cai: %d\n", so_chu_cai);
    printf("So ky tu la chu so: %d\n", so_chu_so);
    printf("So ky tu dac biet: %d\n", so_ky_tu_dac_biet);

    return 0;
}
