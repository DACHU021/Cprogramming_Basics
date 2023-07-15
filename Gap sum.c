#include<stdio.h>
int main(){
	printf("Enter the n:");
	int n,i,j;
	scanf("%d",&n);
	printf("Enter the n Numbers:");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the gap:");
	int gap;
	scanf("%d",&gap);
	int sum=0;
	for(i=0;i<n;i++){
		sum=0;
		for(j=i;j<n;j=j+gap){
			sum+=a[j];
		}
		printf("sum = %d\n",sum);
	}
}

