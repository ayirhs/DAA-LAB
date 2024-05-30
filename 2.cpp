//insertion sort

#include <stdio.h> 

#include <time.h> 

#include <stdlib.h> 

 

int main() 

{ 

  int a[500000], n, i, j, temp, randNum; 

  double time; 

  clock_t start, end; 

  printf("Enter the size of the array:\n"); 

  scanf("%d", &n); 

  	  for (i = 0; i < n; i++) 

 	 { 

    		randNum = (rand() % 100000); 

            a[i] = randNum; 

printf("%d \t", a[i]); 

  	 } 

             start = clock(); 

  	 for (i = 1; i < n; i++) 

  	{ 

    	 	temp = a[i]; 

    	 	j = i - 1; 

     		while (temp <= a[j] && j >= 0) 

     		{ 

      			a[j + 1] = a[j]; 

      			j = j - 1; 

    		} 

    		a[j + 1] = temp; 

  	} 

  	end = clock(); 

  	printf("\nThe sorted array is:"); 

  	for (i = 0; i < n; i++) 

  	{ 

   		printf("%d \t", a[i]); 

  	} 

time = ((double)(end - start) * 1000000000) / CLOCKS_PER_SEC; 

printf("\nTime=%lf nano seconds", time);	 

} 
