#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char a[50],b[50],t;
printf("Enter two Strings\n");
scanf("%s %s",a,b);
if(strlen(a)!=strlen(b)){
printf("The Strings are not an Anagram");
return 0;
}
int n=strlen(a);
for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){
if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;
}
if(b[i]>b[j]){
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
for(i=0;i<n;i++){
if(a[i]!=b[i]){
printf("The Strings are not an Anagram");
return 0;
}
}
printf("The Strings are Anagram");
}

