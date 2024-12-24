#include <stdio.h>
int main(){
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    char kyTuDauTien = fgetc(file);
    if (kyTuDauTien == EOF) {
        printf("File bt01.txt rong.\n");
    } else {
        printf("Ky tu dau tien trong file: %c\n", kyTuDauTien);
    }
    fclose(file);
	return 0;
}
