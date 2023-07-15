#include<stdio.h>
#include<math.h>
int prime(int n)
{
int flag=0;
int i;
if(n==2){
	return 1;
}	
else if(n%2==0 && n!=2)
{
	return 0;
}
else
{
	for(i=3;i<sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
}
int main(){
	printf("Enter a Number:");
	int n,i;
	scanf("%d",&n);
	int f1=0,f2=1,f3;
	printf("%d %d ",f1,f2);
	for(i=3;i<n;i++)
	{
		f3=f1+f2;
		if(prime(f3))
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	}
}
