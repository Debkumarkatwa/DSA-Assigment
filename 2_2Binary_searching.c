#include<stdio.h>

int binary_search(int a[],int l, int h, int x){
	if(h>=l){
		int mid=(l+h)/2;
		if(a[mid]==x)
		return mid;
		
		if(a[mid]>x){
			return binary_search(a,l,mid-1,x);
		}
      return binary_search(a,mid+1,h,x);
	}
   return -1;
}

int main(){
int array[10],size,find,i;
   
   printf("Enter the size of the array:: ");
   scanf("%d",&size);

   if(size>10){
      printf("\nSORRY!! The array is Overflows");
   }
   else{
      printf("\n Enter the SORTED elements of the array:: ");
      for(i=0; i<size; i++){
         scanf("%d",&array[i]);
      }

      printf("\n The elements of the array:: ");
      for(i=0; i<size; i++){
         printf("%d\t",array[i]);
      }

      printf("\n Enter the element you want to find:: ");
      scanf("%d",&find);

      int index=binary_search(array,0,size-1,find);

		if(index==-1){
         printf("\n \n SORRY!! the element is not present in this Array");
      }
      else{
         printf("\n The POSITION of the element is :: %d",index+1);
         printf("\n The INDEX of the element is :: %d",index);
      }
   }
   return 0;
}
