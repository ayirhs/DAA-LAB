//selection sort//

#include<stdio.h> 
#include<time.h> 
#include<stdlib.h> 
int selection_sort(int a[], int n); 
int selection_sort(int a[],int n); 
int main() 
{ 
int a[500000], n,i,j,temp, randNum; 
double time; 
clock_t start, end; 
printf("Enter the size of the array:\n"); 
scanf("%d",&n); 
for(i=0; i<n;i++) 
{ 
randNum=(rand()%10000); 
a[i]=randNum; 
printf("%d \t",a[i]); 
} 
start=clock(); 
selection_sort(a, n); 
end=clock(); 
printf("\nThe sorted array is:"); 
for(i=0; i<n;i++) 
{ 
printf("%d \t",a[i]); 
} 
time=((double)(end-start)*1000000000)/ CLOCKS_PER_SEC; 
printf("\nTime=%lf nano seconds",time); 
} 
int smallest(int arr[], int k, int n) 
{ 
int pos = k, small=arr[k], i; 
for(i=k+1;i<n;i++) 
{ 
if(arr[i]< small) 
{ 
small = arr[i]; 
pos = i; 
} 
} 
return pos; 
} 
int selection_sort(int arr[],int n) 
{ 
int k, pos, temp; 
for(k=0;k<n;k++) 
{ 
pos = smallest(arr, k, n); 
temp = arr[k]; 
arr[k] = arr[pos]; 
arr[pos] = temp; 
} 
return 0; 
} 
