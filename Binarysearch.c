#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<limits.h>
int binarysearch(int *arr,int low,int high,int num);
int binarysearch2(int *arr,int low,int high,int num);
int fun();

int main()
{
    int a[]={1,2,3,4,6,7,8,9,10};
    int i,num,j,k;
    printf("the array is:\n");
    for(i=0;i<9;i++)
    printf("%2d",a[i]);
     printf("\n enter the element to be searched:\n");
     scanf("%d",&num);
     j=binarysearch2(a,0,8,num);
     //if(j== -1)
     //printf("element not found");
     // else
       printf("%d\n",j);
      // printf("%d",INT_MAX);





}
int binarysearch(int *arr,int low,int high,int num)
{
    int mid;


    mid=((low+high)/2);
    if(low<high)
    return -1;
    if(arr[mid]==num)
      return mid;
      else if(arr[mid]<num)
          return   binarysearch(arr,mid+1,high,num);
            else
           return  binarysearch(arr,low,mid-1,num);


}
int binarysearch2(int *arr,int low,int high,int num)
{
  int mid;
  while(low<high)
  {
      mid=ceil((low+high)/2);
      if(arr[mid]==num)
      return mid;
     else if(arr[mid]>num)
             high=mid-1;
             else
             low=mid+1;

}
return -1;

}





