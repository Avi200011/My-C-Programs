#include<stdio.h>
#include<stdlib.h>
struct Array{
    int A[10];
    int size;
    int length;
};

// This is the Binary Search Algorithm with the iterative Approach
int Bin_search_iterative( struct Array bin_arr, int key){
    int low=0, mid, high=bin_arr.length-1;
    while(low<=high){
        mid = (low+high)/2;
        if (key == bin_arr.A[mid]){
            return mid;
        }
        else if ( key < bin_arr.A[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
}

// This is the Binary Search Algo recurssive Approach
int bin_search_recursive(int r_bin_arr[], int low, int high, int key){
    int mid;
    if( low <= high){
        mid = (low + high)/2;
        if( key == r_bin_arr[mid]){
            return mid;
        }
        else if (key < r_bin_arr[mid]){
            return bin_search_recursive(r_bin_arr, low, mid-1, key);
        }
        else{
            return bin_search_recursive(r_bin_arr, mid+1, high, key);
        }
    }
    return -1;
}

int main(){
    struct Array my_array = {{2,3,1,4,5,9}, 10, 6};
    int r = Bin_search_iterative(my_array, 3);
    printf("This is the Iterative Approach Index:- %d", r);
    printf("\n");
    int p = bin_search_recursive(my_array.A, 0, my_array.length, 3);
    printf("This is the Recursive  Approach Index:- %d", p);

    return 0;
}