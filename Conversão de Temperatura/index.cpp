#include <iostream>
using namespace std;

int main(){
    
    int temp;
    string form;
    
    cout<<"Informe a temperatura: "<< endl;
    cin >> temp;
    cout<<"====INFORME====\nC - Celsius\nF - Fahrenheit" << endl;
    cin >> form;
 
    if (form == "c"){
        int cov = (temp * 9/5) + 32;
        cout<< temp <<"° Graus Celsius, equivalem a "<< cov <<"° Graus Fahrenheit";
    }else if(form == "f"){
        int cov = (temp - 32) * 5/9;
        cout<< temp <<"° Graus Fahrenheit, equivalem a "<< cov <<"° Graus Celsius";
    }else{
        cout << "Erro tente novamente";
    }
    return 0;
}