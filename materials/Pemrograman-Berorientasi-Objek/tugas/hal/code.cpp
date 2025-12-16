#include <iostream>
#define max 10
using namespace std;

struct stack{
    int top;
    int data[max];
};
stack tumpuk;
void inisialisasi(){
    tumpuk.top=-1;
}
int isfull(){
    if(tumpuk.top==max-1)
        return 1;
    else
        return 0;  
}int isempty(){
    if(tumpuk.top==-1)
        return 1;
    else
        return 0;
}
void push(int a){
    if(isfull()){
        cout<<"Stack Penuh!\n";
    }else{
        tumpuk.top++;
        tumpuk.data[tumpuk.top]=a;
        cout<<a;
    }
}
int pop(){
    if(isempty()){
        cout<<"Stack Kosong!\n";
        return -1;
    }else{
        return tumpuk.top--;
    }
}
void display(){
    if(isempty()){
        cout<<"Stack Kosong!\n";
    }else{
        for(int i=tumpuk.top;i>=0;i--){
            cout<<tumpuk.data[i]<<endl;
        }
    }
}
void cariindeks(){
    int indeks;
    char n;
    cout<<"Ingin mencari data dengan indeks? (y/n): ";
    cin>>n;
    if(n=='y'||n=='Y'){
        cout<<"\nMasukkan Indeks= ";
        cin>>indeks;
        if(indeks-1>tumpuk.top){
            cout<<"Indeks Tidak Valid!";
        }else{
        cout<<tumpuk.data[indeks-1];}
        
    }else if(n=='n'||n=='N'){
        cout<<"\nAnda tidak mencari data dengan indeks\n";
    }else{
        cout<<"Input tidak valid";
    }
}
void cari(){
    int datacari,inf=0;
    char n;
    cout<<"\nIngin mencari data? (y/n): ";
    cin>>n;
    if(n=='y'||n=='Y'){
        cout<<"\nMasukkan Data yang ingin dicari= ";
        cin>>datacari;
        for(int i=tumpuk.top;i>=0;i--){
            if(tumpuk.data[i]==datacari){
                cout<<"Data ada di dalam stack ";
                cout<<"dan berada di indeks "<<i+1<<endl;
                inf=1;
            }
        }if(inf==0){cout<<"Data yang dicari tidak ada di dalam stack\n";}
        
    }else if(n=='n'||n=='N'){
        cout<<"\nAnda tidak mencari data\n";
    }else{
        cout<<"Input tidak valid\n";
    }
}

float rata(){
    float avg,a;
    for(int i=tumpuk.top;i>=0;i--){
        a+=tumpuk.data[i];
    }avg=a/tumpuk.top+1;
    return avg;
}
int total(){
    int all=0;
    for(int i=0;i<tumpuk.top+1;i++){
        all=all+tumpuk.data[i];
    }return all;
}
int big(){
    int big=tumpuk.data[0];
    for(int i=tumpuk.top;i>=0;i--){
        if(tumpuk.data[i]>big){
            big=tumpuk.data[i];
        }
    }
    return big;
}
int small(){
    int small=tumpuk.data[0];
    for(int i=tumpuk.top;i>=0;i--){
        if(tumpuk.data[i]<small){
            small=tumpuk.data[i];
        }
    }
    return small;
}
int main(){
    inisialisasi();
    for(int i=0;i<max;i++){
        cout<<"Data yang dimasukkan ";
        push((i+1)*10);
        cout<<endl;
    }
    cariindeks();
    cari();
    display();
    cout<<"\nAngka yang di pop = "<<tumpuk.data[tumpuk.top];
    pop();
    cout<<"\nRata-Rata = "<<rata()<<endl;
    cout<<"\nTotal = "<<total()<<endl;
    cout<<"\nTerkecil = "<<small()<<endl;
    cout<<"\nTerbesar = "<<big()<<endl<<endl;
    display();
}