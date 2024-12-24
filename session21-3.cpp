#include <stdio.h>
int main(){
	FILE *file = fopen("bt01.txt","a");
	if(file == NULL){
		printf("Khong hte mo file.");
		return 1;
	}
	char s[100];
	printf("Moi ban nhap them ki tu vao file bt01.txt : ");
	fgets(s,100,stdin);
	fprintf(file,"%s",s);
	fclose(file);
	printf("Dang dong file.");
	return 0;
}
