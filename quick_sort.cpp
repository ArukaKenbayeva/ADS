#include <iostream>
using namespace std;

int n; 
int a[100];

void quickSort(int l, int r){
    int i=l;
    int j=r;
    int p=a[(l+r)/2];
    while(i<j){
        while(a[i]<p) i++;
        while(a[j]>p) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }

    if(l<j){
        quickSort(l,j);
    }
    if(i<r){
        quickSort(i,r);
    }
}

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    quickSort(0,n-1);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
