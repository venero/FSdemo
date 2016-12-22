#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char word[100];
	char speed[100];
	char string[100];
	char ansd[100];
	FILE *fp;
	int start=0;
	int end=0;
	int i;
	int stage=0;
	double ans=0;
	int len=0;
	word[0]='\0';
	speed[0]='\0';
	strcat(&word[0],"Summary:\0");
	strcat(&speed[0],"mb/s\0");
	fp = fopen("target.txt","r");
	printf("%s\n",word);
	while(!feof(fp)){
		fscanf(fp,"%s",string);
    	if(!strcmp(string,&word[0])){
			printf("%s\n",string);
			stage=1;
		}
		if (stage==1){
			len = strlen(string);
			if(!strcmp(&string[len-4],&speed[0])){
				string[len-4]='\0';
				ans=atof(&string[0]);
				printf("ans:%f\n",ans);
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}
