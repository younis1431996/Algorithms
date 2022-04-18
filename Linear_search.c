#include <stdio.h>

// linear search function
typedef int LinearSearchEntry;

int linear_search(LinearSearchEntry arr[], int size, LinearSearchEntry e){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==e) { return i; }
        else { /* Do nothing.*/ }
    }
    return -1;
}

int main() {
    LinearSearchEntry arr[] = {50, 6, 30, 8, 1, 110};
    LinearSearchEntry x1 = 30;
    LinearSearchEntry x2 = 18;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = linear_search(arr, n, x1);
    (result==-1)
    ? printf("Element %d is not present.\n",x1)
    : printf("Element %d is present at index %d.\n",x1, result);
    
    result = linear_search(arr, n, x2);
    (result==-1)
    ? printf("Element %d is not present.\n",x2)
    : printf("Element %d is present at index %d.\n",x2 ,result);
    
    return 0;
}
