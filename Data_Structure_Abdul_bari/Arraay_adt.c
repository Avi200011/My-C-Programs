#include<stdio.h>
#include<stdlib.h>

// These are the structures
struct Array{
    int *A;
    int size;
    int length;
};
// These are the functions

// function number 1
void display_arr(struct Array ex_arr){

    for(int i=0; i<ex_arr.length; i++){
        printf("The %d Element of the Array is:- %d\n" ,i, ex_arr.A[i]);
    }
}

// Function number 2
void arr_len (struct Array ex_arr){
    printf("The length of the Array is:- %d" ,ex_arr.length);
    
}

// Function number 3

void append (struct Array *arr, int x){
    if (arr ->length < arr -> size)(
        arr -> A[arr -> length++]=x;
    )
    else{
        printf("This Is a invalid value");
    }
}

// Function number 4

void Insert (struct Array *arr, int index, int x){
    if(index >= 0 && index <= arr -> length){ // impliment a conditional value for invalid index
        for (int i = arr -> length ; i > index ; i--){
            arr -> A[i] = arr -> A[i-1]; // arrow operator for acessing the structurs pointers and shifting the value 
        }
        arr -> A[index]= x;
        arr -> length++;

    }
}


// This is the main function
int main(){
    int n, i;
    struct Array arr;
    printf("Enter the size of the array:- " );
    scanf("%d", &arr.size);
    arr.A= (int*)malloc(arr.size * sizeof(int)); // making a array in the heap memory according to user input 

    arr.length=0; // Initial length set to be zero
    
    printf("Enter the Length of the Elements of the Array:- ");
    scanf("%d", &n);

    printf("Enter all the elements:-"); // Traverse all the elements according to the user input 
    for ( i = 0; i < n; i++){
        scanf("%d", &arr.A[i]);
    }

    arr.length=n; // After the updating the length of the element set to be zero

    display_arr(arr);
    arr_len(arr);
    
    return 0;
}