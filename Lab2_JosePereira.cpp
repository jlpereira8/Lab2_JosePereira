
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <math.h>

void initArray(char*,int);
void printArray(char*,int);
void freeArray(char*);


int main(){
char d='s';
    while(d!='s'){
    int des;
        cout<<"1) Ejercicio 1"<<endl;
        cout<<"2) Ejercicio 2"<<endl;
        cout<<"3) Ejercicio 3"<<endl;
        cout<<"4) Salir"<<endl;
        cout<<"Ingrese su desicion: "<<endl;
        cin>>des;
        if(des==1){
            
        }else if(des==2){

        }else if(des==3){

        }else if(des==4){
            d='n';
        }else{
            cout<<"Desicion no Valida"<<endl;
        }
    }
    return 0;
}




void printArray(char* x,int s){

    if(x!=NULL){
        for(int i=0;i<s;i++){
            cout<<" "<<x[i];
        }
    cout<<endl;
    }
}

void freeArray(char* x){
    if(x!=NULL){
        delete[] x;
    }
}




