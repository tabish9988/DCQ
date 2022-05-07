/*So in order to create the code,
I need to learn a few prerequisites, 
I am making this code onn C btw(later I will make it on Python as well),

So heading to Leetcode now, the code demands for some operation related to usage of malloc,
So I visited Youtube , did a little research and came up with a few videos
Links of a few videos related to mallloc in C have bee shared below:
https://www.youtube.com/watch?v=phovjaAVuFY
https://www.youtube.com/watch?v=ohVRskLlHqM*/

//So anyway, the odds that i m going to check out this link again by copying and pasting this link back on the search bar is highly unlikely considering the lazy ass I am.
//So Imma just mention what needs to  be mentioned. NOw i wonder how i can make the message highlighted so that i can look at the code directly in case i come for revisiting.

//+++++++++++++++
// Code to understand Typecasting
//+++++++++++++++
int main(){
  float Avg_Profit;
  int Price_of_One=59;
  int Sales=10;
  int days_worked=7;
  
  Avg_Profit=(Price_of_One*Sales)/days_worked;
  printf("Average Daily Profit %.2f",Avg_Profit);
  
  return 0;
  
}
//+++++++++++++++
//Code to undderstand Malloc Array 
//+++++++++++++++
#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter the size of the array? \n");
    int size;
    scanf("%d",&size);
    int *A;
    A=(int*)malloc(size*sizeof(int));
    printf("Enter the elements of the array?");
    int i;
    for (i=0;i<size;i++)
        scanf("%d",&A[i]);

    printf("The values in the array are:\n");
    for (i=0;i<size;i++)
        printf("%d\t",A[i]);
    return 0;

}
//+++++++++++++++
