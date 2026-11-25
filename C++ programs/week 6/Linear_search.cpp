#include <iostream>
using namespace std;
// FUNCTION: linearsearch

int linearsearch(int arr[],int size, int target){
    for(int i = 0; i < size; i++){
        if(arr [i] == target){
            return i;

        }
    }
    return -1;
int main(){
    int numbers[8] = (15, 42, 7, 89, 23, 56, 11, 74);
    int size = sizeof(numbers)/ sizeof(numbers[0]);
    
}
    
}
