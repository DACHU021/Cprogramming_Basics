#include <stdio.h>    
     
int compare(const void* a, const void* b)
{
    int l=*(int*)a;
    int p=*(int*)b;
    return (l-p);
}
int containsDuplicate(int a[], int n) {
    qsort(a,n,sizeof(int),compare);
    int i;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            return 1;
            
        }
    }
    return 0;
}
int main(){
	printf("Enter the n:");
	int n,i;
	scanf("%d",&n);
	printf("Enter the n numbers:");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(containsDuplicate(a,n)){
	   printf("True");
	}
	else
	{
		printf("False");
	}
}

