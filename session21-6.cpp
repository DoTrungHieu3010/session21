#include <stdio.h>
int main(){
	FILE *file = fopen("bt01.txt","r");
	FILE *ptr = fopen("bt06.txt","w+");
	char s[100];
	while(fgets(s,sizeof(s),file) != NULL){
		fputs(s,ptr);
	}
	printf("Da sao chep thanh cong toi file bt06.txt");
	fclose(file);
	fclose(ptr);
	return 0;
}
