// write a program to merge the unsorted arrays

#include <iostream>
using namespace std;

int main(){
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int arr3[10];
    for(int i=0;i<5;i++){
        arr3[i] = arr1[i];
    }
    for(int i=0;i<5;i++){
        arr3[i+5] = arr2[i];
    }   
    cout<<"The merged array is: ";
    for(int i=0;i<10;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;

}
