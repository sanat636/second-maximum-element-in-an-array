#include <stdio.h>
#include<limits.h>
  int main() {
  int n;
  
printf("enter size of the array");
scanf("%d", &n);
int arr[n];  //Declare an array of size n
int max=INT_MIN;
  int secmax=INT_MIN;
  printf("enter elements of array\n");
for (int i=0; i<n; i++) {
scanf("%d", &arr[i]);
}
printf("the array is\n");
for (int i=0;i<n;i++){
printf("%d\t", arr[i]);

}
printf("\n");

for(int i=0; i<n; i++) {
  if(max<arr[i]) {
    secmax=max;
    max=arr[i];
  }

  else if(max !=arr[i] && secmax<arr[i]) {
    secmax=arr[i];
  }
}
printf("the second max element is %d", secmax);

    return 0;
  }


