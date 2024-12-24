#include <stdio.h>
int main(){
	char s[100];
	printf("Moi ban nhap ki tu vao file bt01.txt : ");
	fgets(s,sizeof(s),stdin);
	FILE *ptr = fopen("bt01.txt","w+");
    fprintf(ptr, "%s",s);
    fclose(ptr);
    printf("Da ghi chuoi vao file bt01.txt.\n");
    return 0;
}
