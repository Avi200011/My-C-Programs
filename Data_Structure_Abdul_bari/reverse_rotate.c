#include<stdio.h>
#include<stdlib.h>

struct array{
    int A[20];
    int size;
    int length;
};
// this is the display function for the Array
void display(struct array dis_array){
    for (int i = 0; i < dis_array.length; i++){
        printf("%d " ,dis_array.A[i]);
    }
}
//This is the auxiliary methode for reversing the array
void rev_array_ax (struct array *rev_array_ax){
    int *b;
    b = (int*)malloc(rev_array_ax->length*sizeof(int));
    for (int i= rev_array_ax->length-1, j=0; i>=0; i--, j++ ){
        b[j]= rev_array_ax->A[i];
    }
    for(int k=0; k> rev_array_ax->length; k++){
        rev_array_ax->A[k]= b[k];
    }
    
}


// This is the swapping methode of reversing the array
void reverse_array(struct array *rev_arr){
    for(int i=0, j=rev_arr->length ; i<rev_arr->length; i++,j--){
        int temp = rev_arr->A[i];
        rev_arr->A[i]= rev_arr->A[j];
        rev_arr->A[j]=temp;
        
    }
}

int main(){
    struct array my_array = {{2,3,4,5,6}, 20 ,5};
    rev_array_ax(&my_array);
    display(my_array);
    
    return 0;
}