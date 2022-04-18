#include <stdio.h>

// linear search function
typedef int BinarySearchEntry;

int Binary_Search_it(BinarySearchEntry arr[],int l, int r, BinarySearchEntry e){
    
   while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if e is present at mid
        if (arr[m] == e)
            return m;
 
        // If e greater, ignore left half
        if (arr[m] < e)
            l = m + 1;
 
        // If e is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}

int main() {
    BinarySearchEntry arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    BinarySearchEntry x1 = 30;
    BinarySearchEntry x2 = 80;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = Binary_Search_it(arr, 0, n-1, x1);
    (result==-1)
    ? printf("Element %d is not present.\n",x1)
    : printf("Element %d is present at index %d.\n",x1, result);
    
    result = Binary_Search_it(arr, 0, n-1, x2);
    (result==-1)
    ? printf("Element %d is not present.\n",x2)
    : printf("Element %d is present at index %d.\n",x2 ,result);
    
    return 0;
}
