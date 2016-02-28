//
// Created by Sai Prashanth Chandramouli on 2/28/16.
//

#include <stdio.h>

void merge(int *arr,int l,int m,int r){
    int nLH=(m-l)+1;
    int nRH=(r-m);
    int arrLeft[nLH],arrRight[nRH];
    for (int i=0; i<m-l+1; i++) {
        arrLeft[i]=arr[i+l];
    }
    for (int i=0; i<r-m; i++) {
        arrRight[i]=arr[i+m+1];
    }
    int j,il=0,ir=0;
    for (j=l; j < r + 1; j++) {//(r-l)
        if (arrLeft[il]<arrRight[ir]&&il<nLH) {
            arr[j]=arrLeft[il];
            il++;
        }
        else{
            arr[j]=arrRight[ir];
            ir++;
        }
    }
}

void mergeSort(int *arr,int l,int r){
    if (l<r) {
        int m=(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}

void display(int *array,int n){
    for (int i=0; i<n; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    int n=6;
    int arr[6]={12, 11, 13, 5, 6, 7};
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}
