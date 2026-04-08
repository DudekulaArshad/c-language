#include <stdio.h>
int findMax(int arr[], int n){
    int low=0,high=n-1;
    if(arr[low]<arr[high]) return arr[high];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid<n-1 && arr[mid]>arr[mid+1]) return arr[mid];
        if(mid>0 && arr[mid]<arr[mid-1]) return arr[mid-1];
        if(arr[low]<=arr[mid]) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={38,56,2,5,8,12,16,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Largest element: %d\n",findMax(arr,n));
    return 0;
}
