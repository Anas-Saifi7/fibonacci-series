#include<stdio.h>
int main(){
	int n;
	int a = 0;
	int b=1;
	int c;
	int i;
	printf("enter number of term");
	scanf ("%d",&n);
	for( i=1;i<=n;i++){
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
