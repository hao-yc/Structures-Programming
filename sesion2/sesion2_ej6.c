#include <stdio.h>

int main(){

	int num;
	num= 5/2 +20%6;
	printf("%d\n",num);
	
	num= (4*6/2 - 15/2);
	printf("%d\n",num);
	
	num= (5*15/2/(4 - 2));
	printf("%d\n",num);
	
	num=(8 == 16 || 7 != 4 && 4 < 1);
	printf("%d\n",num);
	
	num=((4*3 < 6 || 3 > 5 - 2) && 3 + 2 < 12);
	printf("%d\n",num);
	
	num =(2 || 0);
	printf("%d\n",num);
	
	num=(1 && 0);
	printf("%d\n",num);
}
