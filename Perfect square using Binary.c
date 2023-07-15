#include<stdio.h>
int Perfect(int n){

int low=0,high=n,mid;
while(low<=high)
{
	mid=low+((high-low)/2);
	if(mid*mid==n){
		printf("True");
	}
	else if(mid*mid<n){
	low=mid+1;
}
else
{
	high=mid-1;
}
}
printf("False");
}
int main(){
	printf("Enter the Number:");
	int n;
	scanf("%d",&n);
	printf("%d",Perfect(n));
}

