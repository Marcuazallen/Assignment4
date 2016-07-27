#include <stdio.h>
/* User enters an array with integers larger than 1, and it prints the same array but with each number being the sum of the previous numbers. */
int main(){
	int array[8];
	int counter,num, total=0, i=0;
	for (counter=0;counter<8;counter++){
		printf("\nEnter a number :");
		scanf("%d",&num);
		total=(total+num);
		array[i]=total;
		i++;}
	for (counter=0;counter<sizeof(array)/4;counter++){
		printf("%d\n",array[counter]);}
		
return 0;
}
