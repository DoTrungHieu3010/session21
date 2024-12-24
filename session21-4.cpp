#include <stdio.h>
int main(){
	FILE *file = fopen("bt01.txt","r");
	char dongthu1[100];
	if(fgets(dongthu1,sizeof(dongthu1),file) == NULL){
		printf("Rong");
		return 1;
	}
	printf("Chuoi dau tien trong file : %s", dongthu1);
	fclose(file);
	printf("Da dong file.");
	return 0;
}
