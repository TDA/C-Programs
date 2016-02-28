#include <iostream>
using namespace::std;


void display(int *array,int n){
    for (int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    cout << endl;
}

void merge(int *arr,int l,int m,int r){
    //cout<<endl;
    int nLH=(m-l)+1;
    int nRH=(r-m);
    int arrLeft[nLH],arrRight[nRH];
    for (int i=0; i < nLH; i++) {
        arrLeft[i]=arr[i+l];
    }
    for (int i=0; i < nRH; i++) {
        arrRight[i]=arr[i+m+1];
    }

    cout << "left array";
    display(arrLeft, nLH);
    cout << "right array";
    display(arrRight, nRH);

    int j = l,il=0,ir=0;
    while (il < nLH && ir < nRH) {//(r-l)
        if (arrLeft[il]<arrRight[ir]) {
            arr[j++]=arrLeft[il];
            il++;
        }
        else{
            arr[j++]=arrRight[ir];
            ir++;
        }
    }
    while (il < nLH) {
        arr[j++] = arrLeft[il++];
    }
    while (ir < nRH) {
        arr[j++] = arrRight[ir++];
    }
    return;
}

void mergeSort(int *arr,int l,int r){
    if (l<r) {
        int m=(l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}


int main(int argc, const char * argv[]) {
    int n=6;
    int arr[6]={12, 11, 13, 5, 6, 7};
    mergeSort(arr, 0, n-1);
    display(arr, n);
    return 0;
}