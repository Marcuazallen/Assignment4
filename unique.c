#include <stdio.h>
#include <string.h>
/* Determines if an inputted string has all unique characters*/
int main(){
	int true=1;
	int x,y;
	char str[100];
	printf("Enter a string which shall have its uniqueness stated :");
	fgets(str,sizeof(str),stdin);
	for (x=0;x<strlen(str)-1;x++){
		for(y=x+1;y<strlen(str)-1;y++){
			if (str[y]==str[x]){
				true=0;}}}
	if(true==0){
		printf("Characters are not all unique\n");}
	else{
		printf("Characters are completely unique\n");}
	return 0;}
