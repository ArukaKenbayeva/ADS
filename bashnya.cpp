//ханойская башня
#include <iostream>
using namespace std;
void f(int n, char x1, char x2, char x3){
    if(n == 1){
        cout << x1 << "->" << x3 << endl;
        return;
    }
    f(n - 1, x1, x3, x2);
    cout << x1 << "->" << x3 << endl;
    f(n - 1, x2, x1, x3);
}

int main(){
    int n;
    char a = 'a', b = 'b', c = 'c';
    cin >> n;

    f(n, a, b, c);
}
