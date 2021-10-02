#include <stdio.h>

int main()
{
	int n=0;
	int x;
	scanf("%d",&x);
	n++;
	x/=10;
	while(x>0){
		x/=10;
		n++;
	}
	printf("%d\n",n);
	return 0;
 } 
