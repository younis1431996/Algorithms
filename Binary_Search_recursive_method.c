#include <stdio.h>

// linear search function
typedef int BinaerySearchEntry;

int Binaery_Search_Rec(BinaerySearchEntry arr[],int l, int r, BinaerySearchEntry e){
    
    if(r >= l){
        int mid = l + (r - l) / 2;
        
        if(arr[mid] == e){ 
            return mid; 
            
        }
        else if(arr[mid] > e){
            return Binaery_Search_Rec(arr, l, mid-1, e);
        }
        else{
            return Binaery_Search_Rec(arr, mid+1, r, e);
        }
    }
    else{
        return -1;
    }
    
    
}

int main() {
    BinaerySearchEntry arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    BinaerySearchEntry x1 = 30;
    BinaerySearchEntry x2 = 80;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int result = Binaery_Search_Rec(arr, 0, n-1, x1);
    (result==-1)
    ? printf("Element %d is not present.\n",x1)
    : printf("Element %d is present at index %d.\n",x1, result);
    
    result = Binaery_Search_Rec(arr, 0, n-1, x2);
    (result==-1)
    ? printf("Element %d is not present.\n",x2)
    : printf("Element %d is present at index %d.\n",x2 ,result);
    
    return 0;
}
