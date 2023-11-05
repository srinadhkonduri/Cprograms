#include<stdio.h>
int main() 
{
int arr[19], j, k, count, n;
scanf("%d",&n);
for(j=0;j<n;j++)
scanf("%d",&arr[j]);

for(j=0;j<n;j++){
count=0;
for(k=0;k<n;k++)
{
if(arr[j]==arr[k]){
count++;
}

if(count>=3)
{
break;}}
if(count==2)
printf("%d\n",arr[j]);

}
return 0;
}