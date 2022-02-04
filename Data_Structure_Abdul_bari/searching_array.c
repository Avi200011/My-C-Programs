#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
    int length;
    int size;
};

// This is the function for display the Array
void Display (struct Array dis_array){
    for(int i=0; i<dis_array.length ; i++){
        printf("%d ", dis_array.A[i]);
    }
}

// This is the function for swapping the element
void Swap (int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Searching is efficient, the index of the  key is decrement each search 
int Linier_search_transposition (struct Array *ls_trans_arr, int key){
    for (int i = 0; i < ls_trans_arr->length; i++){
        if(key == ls_trans_arr->A[i]){
            Swap(&ls_trans_arr->A[i], &ls_trans_arr->A[i-1]);
            printf("Element %d is found at the index:- %d ", key, i);
            return 0;
        }
    }
    printf("Element is not found...!");
    return -1;
}

// Searching Element is swap with the arr[0]/ 1st position, for the efficient searching
int Linier_search_move_to_head (struct Array *ls_move_to_head, int key){
    for (int i=0; i<ls_move_to_head->length; i++){
        if(key==ls_move_to_head->A[i]){
            Swap(&ls_move_to_head->A[i], &ls_move_to_head->A[0]);
            printf("Element %d is found at the index:- %d ", key, i);
            return 0;
        }
    }
    printf("Element is not found...!");
    return -1;
}

// This is the basic Linier search for the key in the Array 
int LinierSearch (struct Array ls_array, int key ){
    for(int i=0; i<ls_array.length ; i++){
        if( key == ls_array.A[i]){
            printf("element %d is found at the index:- %d" , key, i);
            return 0;
        }
    }
    printf("Element is not found");
    return -1;
}

int main(){
    struct Array search_array = {{2,1,3,5,4}, 5, 10};
    Display(search_array);
    printf("\n");
    LinierSearch(search_array, 2);
    printf("\n");
    Linier_search_transposition(&search_array, 3);
    printf("\n");
    Linier_search_transposition(&search_array, 3);
    return 0;
}