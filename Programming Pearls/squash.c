#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define WORDMAX 100

int main(void){
	char word[WORDMAX],sig[WORDMAX],oldsig[WORDMAX];
	int lineNum=0;
	strcpy(oldsig,"");
	strcpy(word,"");
	strcpy(sig,"");
	while(scanf("%s %s",sig,word)!=EOF){
		if(strcmp(oldsig,sig)!=0&&lineNum>0){
			printf("\n");
		}
		strcpy(oldsig,sig);
		// printf("DEBUG\n");
		// printf("%s",word);
		// printf("%s\n",oldsig);
		// printf("%s\n",sig);
		// printf("DEBUG Stop\n");
		lineNum++;
		printf("%s ",word);
	}
	printf("\n");
	return 0;
}