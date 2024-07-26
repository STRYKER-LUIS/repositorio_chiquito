#include<iostream>
using namespace std;

int main() {


    string email = "normal_user@gmail.com";
    string emailcorrect;
    string clave = "umg2024";
    string contrasena;


    cout<<"ingrese su correo: "<<endl;
    cin>>emailcorrect;
    cout<<"ingrese su contrasena: "<<endl;
    cin>>contrasena;


        if(email == emailcorrect && contrasena == clave) {
            cout<<"[---A logrado ingresar sea bienvenido-------]"<<endl;
        }
        else {
            cout<<"[----usuario incorrecto intente de nuevo----]"<<endl;
        }
    while(emailcorrect == email && contrasena == clave) {

    int num1, num2, operacion;

        cout<<"[---ingrese los digitos y la operacion que desea realizar:---]"<<endl;
        cout<<"[---suma[1], resta[2], multiplicacion[3], division[4]--------]"<<endl;
        cout<<"[operacion a realizar: ]"<<endl;
        cin>>operacion;
        cout<<"[ingrese el primer numero:] "<<endl;
        cin>>num1;
        cout<<"[ingrese el segundo numero:] "<<endl;
        cin>>num2;

        if(operacion == 1) {
            cout<<" la suma de los digitos es de: "<< "[ "<< num1 + num2 <<" ]"<<endl;
        }
        else if(operacion == 2) {
            cout<<" la resta de los digitos es:"<<"[ "<< num1 - num2 <<" ]"<<endl;
        }
        else if(operacion == 3) {
            cout<<"La multiplicacion es de: "<<"[ "<< num1 * num2 <<" ]"<<endl;
        }
        else if(operacion == 4) {
            cout<<"la division es de: "<<"[ "<<num1 / num2<<" ]"<<endl;
        }
        else {
            cout<<"operacion invalida vuelva a intentarlo..."<<endl;
        }
        cout<<"\n\n";
    }

    return 0;
}
