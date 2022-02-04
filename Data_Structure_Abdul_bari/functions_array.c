#include<stdio.h>
#include<stdlib.h>
// making a Array structure
struct Array
{
    int A[10];
    int size;
    int length;
};

// This is the function for the displaying the array
void Display (struct Array dis_arr){
    for(int i=0; i< dis_arr.length ; i++){
        printf("The %dth element is:- %d\n" ,i+1, dis_arr.A[i]);
    }
}

// Appennd at the last of the array
void Append (struct Array *app_array, int append){
    if (app_array -> length < app_array -> size){
        app_array -> A[app_array -> length++] = append;
    }
    else{
        printf("This is a Invalid Index...!!");
    }

}

// Insert a value in a given index position 
void Insert (struct Array *ins_array, int ins_position, int ins_element){

    if (ins_position>=0 && ins_position <= ins_array->length){
        for(int i = ins_array->length ; i>ins_position ; i--){
            ins_array->A[i] = ins_array->A[i-1];
        }
        ins_array->A[ins_position] = ins_element;
        ins_array->length++;
    }
    else{
        printf("This is Invalid Index");
    }
}

// Delete a particular element in a given index
int Delete (struct Array *del_arr, int del_index){
    int x =0;

    if(del_index >=0 && del_index<del_arr->length){
        x= del_arr->A[del_index]; // This is fro the returning the element what is deleated
        for( int i = del_index; i<= del_arr->length; i++){   // This is the condition for the shifting
            del_arr->A[i] = del_arr->A[i+1]; // The next element is copied to the previous
        }
        del_arr-> length--; // After the deleting the element the length should be decreased.
        return x;
    }
    else{
        printf("Invalid Index please reenter");
        return 0;
    }
    
}


int main(){

    struct Array My_array = {{2,4,1,6,7,3}, 10, 6};
    Display(My_array);
    Append(&My_array, 25);
    printf("\n\n");
    Display(My_array);
    printf("Your deleated element is:- %d\n",Delete(&My_array, 3));
    Display(My_array);
    
    

    return 0;
}