#include<stdio.h>
int main(){
	printf("Enter a Number:");
	int n,i;
	scanf("%d",&n);
	int f1=0,f2=1,f3;
	printf("%d %d ",f1,f2);
	for(i=3;i<n;i++)
	{
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	}
}
