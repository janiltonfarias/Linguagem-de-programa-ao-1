#include <iostream>

using namespace std;

int main(){
    int num;
    
    cout<<"Informe um numero: " << endl;
    cin >> num;
    
    if (num % 2 == 0){
        cout << "O numero informado nao é primo!";
    }else{
        cout << "O numero informado é primo!";
    }
    
    
    return 0;
}