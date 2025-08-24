#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Informe um numero: "<< endl;
    cin >> num;
    
    for(int i = 1;i <= num; i++){
        cout << i << ' ';
    }
        
    return 0;
}