#include<stdio.h>

void Insertion_sort(int a[],int s){
	int i,j,temp;
	for(i=1; i<s; i++){
        for(j=0; j<i; j++){
            if(a[j]>a[i]){
                int temp=a[i];
        		a[i]=a[j];
        		a[j]=temp;
            }
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

        Insertion_sort(array,size);

        printf("\n After Sorting The Array is:: ");
        for(i=0; i<size; i++){
            printf("%d\t",array[i]);
        }
    }
   return 0;
}
