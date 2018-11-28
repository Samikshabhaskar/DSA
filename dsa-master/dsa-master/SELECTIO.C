#include<stdio.h>
#include<conio.h>
 void sort(int ar[],int s){
     int i,j,min,index;
     for(i=0;i<s;i++){
	 min=ar[i];
	 index=i;
	 for(j=i+1;j<s;j++){
	     if(min>ar[j]){
		min=ar[j];
		index=j;
	     }
	 }
	 ar[index]=ar[i];
	 ar[i]=min;
     }
 }
 void main(){
     int i,j,ar[50],s;
     clrscr();
     printf("enter no of elements: ");
     scanf("%d",&s);
     printf("\nenter values in array:\n");
     for(i=0;i<s;i++){
	 scanf("%d",&ar[i]);
     }
     sort(ar,s);
     printf("sorted array is:\n");
     for(i=0;i<s;i++){
	printf("%d\t",ar[i]);
     }
     getch();
}