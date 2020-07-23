#include<stdio.h>
#include<stdlib.h>
int n;
void heapify(int a[],int i){
int largest=i,l=2*i+1,r=2*i+2,t;
  if(l<n&&a[l]>a[largest])
    largest=l;
  if(r<n&&a[r]>a[largest])
    largest=r;
  if(i!=largest){
    t=a[i];
    a[i]=a[largest];
    a[largest]=t;
    heapify(a,largest);
  }
}
void delheap(int a[]){
  int last=a[n-1];
  a[0]=last;
  n=n-1;
  heapify(a,0);
}
void insert(int a[],int data){
  int i;
  n=n+1;
  a[n-1]=data;
  for(i=n/2-1;i>=0;i--)
    heapify(a,i);
}
void print(int a[]){
 int i;
   for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
int main(){
  int a[]={10,5,4,2,3},b,op;
  n=5;
  while(1){
    printf("\nMENU:\n1)insert\n2)delete\n3)print\n4)exit\n");
    printf("Enter choice:\n");
    scanf("%d",&op);
    switch(op){
       case 1:printf("Enter data to insert:\n");
              scanf("%d",&b);
              insert(a,b);
              break;
       case 2:delheap(a);
               break;
       case 3:print(a);
               break;
       case 4:exit(1);
       default:printf("Invalid choice\n");
    }
  }
  return 0;
}
