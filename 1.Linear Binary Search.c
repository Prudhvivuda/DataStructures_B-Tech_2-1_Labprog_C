#include <stdio.h>
#include <stdlib.h>
void display();
void create();
void lsearch();
void binarySearch();
int BinarySearch(int a[],int,int,int); 
int i,j,key,choice,n,a[50];

int main()
{
    printf(" 1)create array\n 2)Display array\n 3)lsearch\n 4)Binary search");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:    create();   break;
        case 2:    display();  break;
        case 3:    lsearch();  break;
        case 4:    binarySearch();  break;
        case 5:    exit(0);           
        default: printf("invalid choice");
    }


    return 0;
}
void create()
{
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements into array\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);     
    display();
}
void display()
{
    printf("The elements in the array are\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);       
        lsearch();
        binarySearch();
}
void lsearch()
{
    printf("enter the value to find");
     scanf("%d",&key);
     for(i=0;i<n;i++)
     {
          if(a[i]==key)
           {
             printf("value found at %d position",i+1);
             break;
           }
     }

           if(i==n)
            printf("element not found\n");
}
void binarySearch()
{    
    
    printf("enter key to find:\n");
    scanf("%d",&key);
    int result = BinarySearch(a, 0, n - 1, key);
    (result == -1) ? printf("Element is not present"
                            " in array") 
                   : printf("Element is present at "
                            "index %d", 
                            result);
    
                 
}
int BinarySearch(int a[], int l, int r, int key) 
  { 
    while (l <= r)
     { 
        int m = l + (r - l) / 2; 
        if (a[m] == key) 
            return m; 
        if (a[m] < key) 
            l = m + 1; 
        else
            r = m - 1; 
       } 
    return -1; 
  } 
