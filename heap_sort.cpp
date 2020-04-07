#include <iostream>
#include <vector>

using namespace std;

int n,k;

class MinHeap{
    public:
    vector <int> a;
    int size;

    MinHeap(){
        size=0;
    }

    int parent(int i){
        return (i-1)/2;
    }

    int left(int i){
        return 2*i+1;
    }

    int right(int i){
        return 2*i+2;
    }
    
    int getMin(){
        return a[0];
    }

    void insert(int k){
        a.push_back(k);
        size++;
        int i= size-1;
        while(i>0 && a[parent(i)]>a[i]){
            swap(a[parent(i)],a[i]);
            i=parent(i);
        }

    }

    void heapify(int i){
        if(left(i)>size-1){
            return;
        }
        int j=left(i);
        
        if(right(i)<size && a[right(i)]<a[j]){
            j = right(i);
        }
        if(a[i]>a[j]){
            swap(a[i],a[j]);
            heapify(j);
        }

    }

    void print(){
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    }

    int extractMin(){
        int root_value = a[0];
        swap(a[0],a[size-1]);
        size--;
        heapify(0);
        return root_value;
    }
};


int main(){
    MinHeap *minHeap = new MinHeap();
   
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>k;
        minHeap->insert(k);
    }

    for(int i=0; i<n; i++){
       cout<< minHeap->extractMin()<<" ";
    }
    return 0;
}
