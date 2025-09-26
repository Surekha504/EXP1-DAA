#include<stdio.h>
#include<time.h>
void main() {
int arr[10],i,n,c,found=0;
clock_t start,end;
double cpu_time_used;
start=clock();
printf("Enter n:");
scanf("%d",&n);
printf("Enter Array of %d element:",n);
for(i=0;i<n;i++) {
scanf("%d",&arr[i]);
  }
printf("Enter search element c:");
scanf("%d",&c);
for(i=0;i<n;i++) {
   if(arr[i]==c) {
     printf("Element %d found in the position %d",c,i+1);
     found=1;
     break;
     }
   }
 if(!found) {
 printf("Element %d not found",c);    }
 end=clock();
 cpu_time_used=((double)(end - start))/ CLOCKS_PER_SEC;
 printf("\nExecution time: %f seconds",cpu_time_used);
  }
