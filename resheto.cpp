//решето Эратосфена
#include <iostream>
using namespace std;
int p[100];
int main(){
    int n, k;
    cin >> n;
    for(int i = 2; i*i <= n; i++){
        if(p[i] == 0){
            k = i;
            while(k + i <= n){
                k += i;
                p[k] = 1;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(p[i] == 0){
            cout << i << " ";
        }
    }

}
