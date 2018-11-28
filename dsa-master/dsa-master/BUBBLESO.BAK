#include<stdio.h>
#include<conio.h>
void main(){
     int a[10],i,j,n,temp;
     clrscr();
     printf("enter no of elements :");
     scanf("%d",&n);
     printf("enter values in array:\n");
     for(i=0;i<n;i++){
	 scanf("%d",&a[i]);
     }
     for(i=1;i<n;i++){
	for(j=0;j<n-i;j++){
	   if(a[j]>a[j+1]){
	      temp=a[j];
	      a[j]=a[j+1];
	      a[j+1]=temp;
	   }
	}
     }
     printf("sorted array is");
     for(i=0;i<n;i++){
	printf("%d\t",a[i]);
     }
     getch();
}