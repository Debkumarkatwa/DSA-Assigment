#include<stdio.h>
void merge(int a[],int l,int mid,int h){
	int i,j,k;
	int size_1=mid-l+1;
	int size_2=h-mid;
	
	int L[size_1], R[size_2];
	for(i=0;i<size_1;i++){
		L[i]=a[l+i];
	}
	for(j=0;j<size_2;j++){
		R[j]=a[mid+1+j];
	}
	i=0;
	j=0;
	k=l;
	while(i<size_1 && j<size_2){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;	
		}
		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<size_1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<size_2){
		a[k]=R[j];
		j++;
		k++;
	}
}

void Merge_sort(int a[],int l,int h)
{
	if(l<h)
	{
		int mid=(l+h)/2;
		Merge_sort(a,l,mid);
		Merge_sort(a,mid+1,h);
		
		merge(a,l,mid,h);
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

        Merge_sort(array,0,size-1);

        printf("\n After Sorting The Array is:: ");
        for(i=0; i<size; i++){
            printf("%d\t",array[i]);
        }
    }
   return 0;
}
