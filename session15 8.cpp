#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int i;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    if (islower(chuoi[0])) chuoi[0] = toupper(chuoi[0]);

    for (i = 1; chuoi[i] != '\0'; i++) {
        if (chuoi[i - 1] == ' ' && islower(chuoi[i])) {
            chuoi[i] = toupper(chuoi[i]);
        }
    }

    printf("Chuoi sau khi chinh sua: %s", chuoi);

    return 0;
}
