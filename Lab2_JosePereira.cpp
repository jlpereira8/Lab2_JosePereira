
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

#include <math.h>

void initArray(int*,int);
void printArray(char*,int);
void freeArray(int*);
void freeA2(char*);
int* invertir(int*,int);
void print(int*,int);

int main(){
char d='s';
    while(d=='s'){
    int des;
        cout<<"1) Ejercicio 1"<<endl;
        cout<<"2) Ejercicio 2"<<endl;
        cout<<"3) Ejercicio 3"<<endl;
        cout<<"4) Salir"<<endl;
        cout<<"Ingrese su desicion: "<<endl;
        cin>>des;
        if(des==1){
            srand (time(NULL));
            char* x=new char[4];
            int* nums=new int[9];
           // x[0]=rand() % 9 ;
           // x[1]=rand() % 9 ;
           // x[2]=rand() % 9 ;
           // x[3]=rand() % 9 ;
            int r;
            int bo=5;
                for(int i=0;i<=9;i++){
                    nums[i]=i+1;
                                   
                }
        int aux=1;
        int cont=0;
        int r1;
        while(aux<=4){
        cout<<"enta"<<endl;
        r1=rand() %  9;
        if(nums[r1]!=0){
            x[cont]=std::to_string(nums[r1])[0];
            cont++;
            aux++;
            nums[r1]=0;
        }else{
            r1=rand() %  9;
        } 
            
        } 
        printArray(x,4);
        int kills=0;
        int vidas=5;
        string n1;
        char letra;
        int b=0;
            while(kills<=5){
                cout<<"  "<<"Vidas: "<<vidas<<endl;
                cout<<"Ingrese el numero: "<<endl;
                cin>>n1;
                    for(int i=0;i<4;i++){
                        for(int j=0;j<4;j++){
                            letra=n1[j];
                             if(x[i]==letra){
                                cout<<"El numero "<<letra<<" esta en la posicion "<<i<<endl;
                            }
                              //  cout<<"El numero no esta incluido en la posicion "<<i<<endl;
                            }
                            
                        }
                    kills++;
                    vidas--;
                    }
            
        
        freeA2(x);
        freeArray(nums);
                        
            
                    
        }else if(des==2){
        
        int* bin=new int[8];
        int num;
        cout<<"Ingrese el numero que desea convertir: "<<endl;
        cin>>num;
        int aux =0;
        while(num>0){
           int mod=num%2;
           int nuevo=num/2;
           bin[aux]=mod;
           num=nuevo;
           aux++;
        }
        
        print(invertir(bin,8),8);
        freeArray(bin);
        }else if(des==3){
            string word;   
            cout<<"Ingrese la palabra: "<<endl;
            cin>>word;
            int s=word.length();
//            char p;
            //-ar
                char p=word[s-2];
                char p2=word[s-1];
               // cout<<"pal 1: "<<p<<endl;
               // cout<<"pal 2: "<<p2<<endl;
                if(p=='a'&&p2=='r'){
                    int p1=s-1;
                    int p2=s+1;
                    char* p=new char[p1];
                    char* s2=new char[p1];
                    char* t=new char[p2];
                    char temp;
                    int ola=(s-2);
                    int ola2=s-1;
                    for(int i=0;i<p1;i++){
                        temp=word[i];
                        p[i]=temp;
                        s2[i]=temp;
                        if(i==ola){
                            p[i]='o';
                            s2[i]='e';
                        }
                    }
                    for(int i=0;i<p2;i++){
                        temp=word[i];
                        t[i]=temp;
                    }
                        t[s]='e';
                    printArray(p,p1);
                    printArray(s2,p1);
                    printArray(t,p2);
                    freeA2(p);
                    freeA2(s2);
                    freeA2(t);
                }else if(p=='e'&&p2=='r'){
                 int p1=s-1;
                 int p2=s+1;
                 char* p=new char[p1];
                 char* s2=new char[p1];
                 char* t=new char[p2];
                 char temp;
                 int ola=(s-2);
                 int ola2=(s-1);
                 for(int i=0;i<p1;i++){
                    temp=word[i];
                    p[i]=temp;
                    s2[i]=temp;
                    if(i==ola){
                        p[i]='o';
                        s2[i]='i';
                    }                
                 }
                for(int i=0;i<p2;i++){
                    temp=word[i];
                    t[i]=temp;
                } 
                    t[s]='e';
                printArray(p,p1);
                printArray(s2,p1);
                printArray(t,p2);
                freeA2(p);
                freeA2(s2);
                freeA2(t);
  
                }else if(p=='i'&&p2=='r'){
                int p1=s-1;
                int p2=s+1;
                char* p=new char[p1];
                char* s2=new char[p1];
                char*t=new char[p2];
                char temp;
                int ola=s-2;
                int ola2=s-1;
                for(int i=0;i<p1;i++){
                    temp=word[i];
                    p[i]=temp;
                    s2[i]=temp;
                    if(i==ola){
                        p[i]='i';
                        s2[i]='o';
                    }
                }
                for(int i=0;i<p2;i++){
                    temp=word[i];
                    t[i]=temp;
                }                
                    t[s]='e';
                    printArray(p,p1);
                    printArray(s2,p1);      
                    printArray(t,p2); 
                    freeA2(p);
                    freeA2(s2);
                    freeA2(t);

                }             
            
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
void print(int* x,int s){

    for(int i=0;i<s;i++){
        cout<<" "<<x[i];
    
    }
    cout<<endl;

}

int* invertir(int* x,int s){
    int* ret=new int[8];
    int aux=7;
    for(int i=0;i<s;i++){
        ret[aux-i]=x[i];

    }
return ret;

}

void freeA2(char* x){
    if(x!=NULL){
        delete[] x;
    }
}

void freeArray(int* x){
    if(x!=NULL){
       delete[] x;    
    }
}


