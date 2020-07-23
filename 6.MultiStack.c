#include <stdio.h>
#include <stdlib.h>
int max=10;
static int a[10],topa=-1,topb=10;
int pushA(int e){
    if(topa==max-1 || topb==0 || topb==topa+1) printf("Stack Overflow!!!\n");
    else {
        topa++;
        a[topa]=e;
    }
    return 0;
}
int pushB(int e){
    if(topa==max-1 || topb==0 || topa+1==topb) printf("Stack Overflow!!!\n");
    else {
     topb--;
     a[topb]=e;
    }
    return 0;
}
int popA(){
 if(topa==-1) printf("Stack A is in Under Flow");
 else{
    printf("%d is deleted from stack A",a[topa]);
    topa--;
 }
 return 0;
}
int popB(){
 if(topb==max) printf("Stack B is in Under Flow");
 else{
  printf("%d is deleted from stack B",a[topb]);
  topb++;
 }
 return 0;
}
void display(){
  int i;
  if(topa==-1) printf("No elements in stack A!!\n");
  else{
     printf("The elements in stack A are: ");
     for(i=topa;i>=0;i--) printf("%d ",a[i]);
  }
  if(topb==max) printf("\nNo elements in stack B!!\n");
  else{
     printf("\nThe elements in stack B are: ");
    for(i=topb;i<max;i++) printf("%d ",a[i]);
 } 
}
int main()
{
    int n,e;
    while(1){
        printf("\n\nEnter your choice:\n1.Insert in A\n2.Insert in B\n3.Delete in A\n4.Delete in B\n5.Display\n6.Exit\n");
        scanf("%d",&n);
        switch(n){
        case 1:printf("Enter element to insert in stack A:\n"); scanf("%d",&e); pushA(e); break;
        case 2:printf("Enter element to insert in stack B:\n"); scanf("%d",&e); pushB(e); break;
        case 3:popA(); break;
        case 4:popB(); break;
        case 5:display(); break;
        case 6:exit(0);
        default:printf("Enter valid choice\n");
        }
    }
    return 0;
}
