#include<stdio.h>

int main(){
   
   int array[10],size,find,i;
   
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

      printf("\n Enter the element you want to find:: ");
      scanf("%d",&find);
      for(i=0; i<size; i++){
         if(array[i]==find){
            printf("\n The POSITION of the element is :: %d",i+1);
            printf("\n The INDEX of the element is :: %d",i);
            break;
           }
         
        }
		if(i==size){
            printf("\n \n SORRY!! the elment is not present in this Array");
           }
    }


   return 0;
}
