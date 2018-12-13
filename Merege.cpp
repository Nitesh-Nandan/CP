# include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int st, int mid, int end){
    int ls = mid-st+1, rs = end-mid;
    int i =0,j=0,k=0;

    int L[ls],R[rs];

    for(i = st;i<=mid;i++){
        L[k++] = arr[i];
    }
    
    k=0;
    for(i = mid+1;i<=end;i++) {
        R[k++] = arr[i];
    }
    i=0,j=0,k=st;

    while (i<ls && j<rs){
        if(L[i]>R[j]){
            arr[k++] = R[j++];
        }
        else{
            arr[k++] = L[i++];
        }
    }

    while(i<ls){
        arr[k++] = L[i++];
    }

    while(j<rs){
        arr[k++] = R[j++];
    }
    
}

int main(){
    int arr2 [] = {1,2,3,4,5,6};
    int arr [] = {4,5,6,1,2,3};
    merge(arr,0,2,5);
    for(int i =0;i<6;i++){
        cout <<arr[i]<<" ";
    }

    return 0;
}