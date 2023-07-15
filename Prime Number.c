#include<stdio.h>
int main() {
	printf("Enter the Number:");
		int n,i;
		scanf("%d",&n);
		int flag=0;
		if(n==2) {
			printf("Prime");
		}
		else if(n%2==0 && n!=2) {
		     printf("Not Prime");
		} 
		else
		{
			for(i=3;i<=sqrt(n);i++) {
				if(n%2==0) {
					flag=1;
					break;
				}
			}
			if(flag==1) {
				printf("Not Prime");
			}
			else
			{
				printf("Prime");
			}
		}
	}

