#include<stdio.h>
int partition(int a[],int l,int h){
	int pivot=a[l];
	int start=l;
	int end=h;
	int temp_1,temp_2;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
			temp_1=a[start];
			a[start]=a[end];
			a[end]=temp_1;
		}
	}
	temp_2=a[l];
	a[l]=a[end];
	a[end]=temp_2;
	
	return end;
}
void quick_sort(int a[],int l,int h){
	int loc;
	if(l<h){
		loc=partition(a,l,h);
		quick_sort(a,l,loc-1);
		quick_sort(a,loc+1,h);
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

        quick_sort(array,0,size-1);

        printf("\n After Sorting The Array is:: ");
        for(i=0; i<size; i++){
            printf("%d\t",array[i]);
        }
    }
   return 0;
}
