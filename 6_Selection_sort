#include<stdio.h>

void Selection_sort(int a[],int s){
	int i,j,min,temp;
	for(i=0; i<s-1; i++){
		min=i;
        for(j=i+1; j<s; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
        	temp=a[min];
        	a[min]=a[i];
        	a[i]=temp;
		}
    }
}

int main(){
int array[10],size,i;
   
   printf("Enter the size of the array:: ");
   scanf("%d",&size);

   if(size>10){
        printf("\nSORRY!! The array is Overflows");
    }
   else{
        printf("\n Enter the elements of the array:: ");
        for(i=0; i<size; i++){
            scanf("%d",&array[i]);
        }

        printf("\n The elements of the array:: ");
        for(i=0; i<size; i++){
            printf("%d\t",array[i]);
        }

        Selection_sort(array,size);

        printf("\n After Sorting The Array is:: ");
        for(i=0; i<size; i++){
            printf("%d\t",array[i]);
        }
    }
   return 0;
}
