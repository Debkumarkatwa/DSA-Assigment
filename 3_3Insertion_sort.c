#include<stdio.h>

void Insertion_sort(int a[],int s){
	int j,temp;
	for(int i=0;i<s;i++){
		temp=a[i];
		j=i-1;
    
        while(j>=0&&a[j]>temp){
    	    a[j+1]=a[j];
    	    j--;
	    }
	    a[j+1]=temp;
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
