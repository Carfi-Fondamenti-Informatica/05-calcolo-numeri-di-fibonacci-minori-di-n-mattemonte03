#include <iostream>
using namespace std;

int main () {
    int N=0, primo=1, secondo=0, terzo=0;
    cin>>N;
    while(terzo<=N){
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        if(terzo<=N){
            cout<<terzo<<endl;
        }



    }

    return 0;
}
