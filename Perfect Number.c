#include<stdio.h>
int main(){
	printf("Enter the Number:");
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
		    sum=sum+i;
		}
	}
	if(sum==n){
		printf("\n %d is Perfect number",n);
		return 0;
	}
	printf("\n %d is not a Perfect Number",n);
}

