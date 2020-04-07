#include <iostream>

using namespace std;

int a[10000];
int n;

void merge(int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    int a1[n1];
    int a2[n2];

    for(int i=0; i<n1; i++){
        a1[i] = a[l+i];
    }
    for(int i=0; i<n2; i++){
        a2[i] = a[m+1+i];
    }

    int k = l;
    int uk1 = 0;
    int uk2 = 0;
    while(uk1<n1 && uk2<n2){
        if(a1[uk1]<a2[uk2]){
            a[k]=a1[uk1];
            uk1++;
        }else{
            a[k]=a2[uk2];
            uk2++;
        }
        k++;
    }
    while(uk1<n1){
        a[k] = a1[uk1];
        uk1++;
        k++;
    }
     while(uk2<n2){
        a[k] = a2[uk2];
        uk2++;
        k++;
    }
}

void mergeSort(int l, int r){
    if(l<r){
        int m = (l + r)/2;
        mergeSort(l,m);
        mergeSort(m+1, r);
        merge(l,m,r);
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    mergeSort(0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
