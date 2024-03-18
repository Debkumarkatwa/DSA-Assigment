#include <stdio.h>
#include<stdlib.h>

void print(int arr[], int s)
{
    printf("\nThe Array is :::-----------------------");
    for (int i = 0; i < s; i++)
    {
        printf(" [%d] ,", arr[i]);
    }
}

void insertion(int arr[], int *s, int indx)
{
    int element;
    if (indx < 1 || indx > *s)
    {
        printf("Invalid POSITION! Please enter a valid POSITION between 1 and %d.", *s);
    }
    else
    {
        printf("\nEnter the Element that you want to Insert: ");
        scanf("%d", &element);
        *s += 1;
        for (int i = *s - 1; i > indx - 1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[indx - 1] = element;
    }
}

void deletion(int arr[], int *s, int indx)
{
    if (indx < 1 || indx > *s)
    {
        printf("Invalid Index! Please enter a valid Index between 1 and %d.\n", *s);
    }
    else
    {
        for (int i = indx - 1; i < *s - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        *s -= 1;
    }
}

void searching(int arr[], int s, int key)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (arr[i] == key)
        {
            printf("\n The POSITION of the element is :: %d", i + 1);
            printf("\n The INDEX of the element is :: %d", i);
            break;
        }
    }
    if (i == s)
    {
        printf("\n \n SORRY!! the element is not present in this Array");
    }
}

void sorting(int arr[], int s)
{
    int flag=0;
	for(int i=0; i<s-1; i++){
        for(int j=0; j<s-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];    
                arr[j+1]=arr[j];         
                arr[j]=temp;

                flag++;
            }
        }
        if(flag==0){
            printf("\n The array is already Sorted");
            break;
        }
    }
}


int main()
{

    int size;
    printf("Enter the size of the array:: ");
    scanf(" %d", &size);
    
    int *array=malloc(size*sizeof(int));

        printf("Enter the elements of the array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    // Printing the original array
    print(array, size);
    int option;
    printf("\n=====================================================");
    printf("\n\t\t\t\t\t\tMenu\n");
    printf("======================================================");
    printf("\nA: Insert an Element at a specified position [Enter 1].");
    printf("\nB: Delete an Element from a specified position [Enter 2].");
    printf("\nC: Search an Element in the Array the Array[Enter 3].");
    printf("\nF: Sort the Elements of the Array [Enter 4].");
    printf("\nE: Display the Array [Enter 5].");
    printf("\nF: Exit [Enter 6].");
    do
    {
        printf("\n\n------------------------------------------");
        printf("\n   Enter What You Want to Do[for exit (6)]: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            int index;
            printf("\nEnter the POSITION where you want to Insert the Elemen:: ");
            scanf("%d", &index);
            
            insertion(array, &size, index);
            
            printf("Insertion is Completed......");
            break;
            
        case 2:
            int delIndex;
            printf("\nEnter the POSITION of which Element you want to Delete:");
            scanf("%d", &delIndex);
            deletion(array, &size, delIndex);
            
            printf("Deletion is Completed......");
            break;
            
        case 3:
            int value;
            printf("\nEnter the Element that you want to Search: ");
            scanf("%d", &value);
            searching(array, size, value);
            break;
            
        case 4:
            sorting(array,size);
            printf("Sorting is Completed......");
            break;
            
        case 5:
            print(array, size);
            break;
        
        case 6:
            printf("Thank you for using.......");
            break;
        }
        if (option > 6 || option < 1)
        {
            printf("SORRY!! You choose a Invalid option.....");
            printf("Please Choose a Correct Option.....");
        }
    }
    while (option != 6);
    
    free(array);
    return 0;
}

