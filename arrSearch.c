#include<stdio.h>
int main(){
int i,search,range;
printf("Enter a range: ");
scanf("%d",&range);
int arr[range];
printf("Enter a element to search: ");
scanf("%d",&search);
printf("Enter the element of array: ");
for(i=1;i<=range;i++)
scanf("%d",&arr[i]);

for(i=1;i<=range;i++){
if(search == arr[i]){
printf("Search element found in the location %d ",i);
}
else{
printf("The Search element is not in the array");
}
printf("The element of the array are: %d\n",arr[i]);
}
}