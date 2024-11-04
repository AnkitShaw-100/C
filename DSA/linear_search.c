#include <stdio.h>
int linearsearch(int arr[], int n, int target){
  for(int i = 0; i < n; i++){
  if(arr[i] == target)
  return i;
  }
  return -1;
}
int main(){
int arr[] = {3,5,2,8,6};
int n = sizeof(arr) / sizeof(arr[0]);
int target = 80;
int result =  linearsearch(arr , n, target);
if(result == -1){
printf("Target element not found ");
}
else{
printf("Target element found ");
}
return 0;
}
