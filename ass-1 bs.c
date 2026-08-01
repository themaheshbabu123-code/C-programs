
#include<stdio.h>
void input(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
    printf(" Enter element %d  ",i);
    scanf("%d",arr+i);
  }
}
void output(int *arr,int n)
{
  for(int i=0;i<n;i++)
  {
    printf("%d ",*(arr+i));
  }
}
void swap(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int checkSort(int *arr,int n)
{ int flag=0;
for(int i=0;i<n-1;i++) 
   { if(arr[i]<arr[i+1])
     {flag++;
     }
   }
return flag;
}

void compareandswap(int *arr,int limit)
{ 
 for(int i=0 ; i<limit ; i++)
  {
    if(arr[i]>arr[i+1])
    swap(&arr[i],&arr[i+1]);
  }
 
}
void bubblesort(int *arr,int n)
{int a,flag=0;
 { for(int i=n-1;i>0;i--)
   { if (checkSort(arr,n)==n-1)
   {printf(" ");
   break;
   }
   else
   {
    compareandswap(arr,i);
    flag++;
   }
   }
  printf("\nThe elements are sorted for %d pass",flag);
 
}
}
int main ()
{  int n;
  printf("enter thr size of array");
  scanf("%d",&n);
  int arr[n];
  input (arr,n);
  printf("elements befor sorting");
  output(arr,n);
  bubblesort(arr,n);
  printf("\nelements aftersorting \n");
  output(arr,n);
  return 0;
}