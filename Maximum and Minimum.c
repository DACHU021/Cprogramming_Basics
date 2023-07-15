#include<stdio.h>
int main(){
	printf("Enter the n:");
	int i,n;
	scanf("%d",&n);
	printf("Enter the n Elements:");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=1;i<n;i++){
		if (a[i]>max){
		max=a[i];
    }
	if(a[i]<min){
		min=a[i];
	}
}
	printf("Maximum Number %d\n",max);
	printf("Minimum Number %d",min);
	return 0;
}

