#include <stdio.h>
#include <string.h>
/* takes in an input and outputs it without any vowels*/
int main(){
	int x,y=0;
	char in[100];
	char out[100];
	printf("Enter something which shall have it's vowels removed :");
	fgets(in,sizeof(in),stdin);
	for(x=0;x<strlen(in)-1;x++){
		if (in[x]!='a' && in[x]!='e'&& in[x]!='i'&& in[x]!='o'&& in[x]!='u'){
			out[y]=in[x];
			y++;}}
	strcpy(in,out);
	printf("\n%s\n",in);
	return 0;
	}
