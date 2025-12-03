#include <iostream>
using namespace std;
#define max 10

struct queue
{
    int data[max];
    int tail;
    int head;
};
queue antrian;

void create(){
    antrian.head=antrian.tail=-1;
}
int isfull(){
    if(antrian.tail>=max-1)
    return 1;
    else
    return 0;
}int isempty(){
    if(antrian.tail==-1)
    return 1;
    else 
    return 0;
}
void enqueue(int data){
    if(isfull()){
        cout<<"\nAntrian Penuh!\n";
        }else{
            if(isempty()){
                antrian.head=antrian.tail=0;
            }else{
                antrian.tail++;
            }
            antrian.data[antrian.tail]=data;
            cout<<antrian.data[antrian.tail]<<" Masuk!";
        }
}
int dequeue(){
    if(isempty()){
        cout<<"Antrian kosong!\n";
        return -1;
    }else{
        int e= antrian.data[antrian.head];
        for(int i=antrian.head;i<antrian.tail;i++){
            antrian.data[i]=antrian.data[i+1];// indeks 0+1(4)=0 1+1=1 9/10 10 
        }
        antrian.tail--;
        return e;
    }
}
void clear(){
    antrian.head=antrian.tail=-1;
    cout<<"Data Clear";
}
void tampil(){
    if(isempty()==0){
        for(int i=antrian.head;i<=antrian.tail;i++){
            cout<<antrian.data[i]<<endl;
        }
    }else cout<<"Data Kosong\n";
}
float rata(){
    int total=0,avg;
    for(int i=antrian.head;i<=antrian.tail;i++){
        total=total+antrian.data[i];
    }avg=total/antrian.tail;
    return avg;
}
int total(){
    int total=0;
    for(int i=antrian.head;i<=antrian.tail;i++){
        total=total+antrian.data[i];
    }return total;
}
int small(){
    int small=antrian.data[0];
    for(int i=antrian.head;i<=antrian.tail;i++){
        if(antrian.data[i]<small){
            small=antrian.data[i];
        }
    }return small;
}
void cari(){
    int cari,r=false;
    char j;
    cout<<"Apakah anda ingin mencari antrian? (y/n) ";
    cin>>j;
    if(j=='y'||j=='Y'){
        cout<<"\nMasukkan antrian yang anda cari= ";
    cin>>cari;
        for(int i=antrian.head;i<=antrian.tail;i++){
            if(antrian.data[i]==cari){
                cout<<"\nAntrian yang anda inputkan ada!\n";
                cout<<"dan berada pada indeks "<<i+1<<endl;
                r=true;
            }
        }if(r==false){
            cout<<"\nAntrian yang anda inputkan tidak ada...\n";
        }
    }else if(j=='n'||j=='N'){
        cout<<"\nAnda tidak mencari antrian....\n";
    }else{
        cout<<"\nInput Tidak Valid!\n";
    }
}
void cariindeks(){
    int cariindeks,r=0;
    char j;
    cout<<"Apakah anda ingin mencari antrian dengan indeks? (y/n) ";
    cin>>j;
    if(j=='y'||j=='Y'){
        cout<<"\nMasukkan indeks antrian yang anda cari= ";
    cin>>cariindeks;
        if(antrian.data[cariindeks-1]>0){
            cout<<"\nAntrian dengan indeks "<<cariindeks<<" Ada dengan nomor antrian "<<antrian.data[cariindeks-1]<<endl;
        }else{
            cout<<"\nIndeks antrian yang anda cari tidak ada..."<<endl;
        }
    }else if(j=='n'||j=='N'){
        cout<<"\nAnda tidak mencari antrian....\n";
    }else{
        cout<<"\nInput Tidak Valid!\n";
    }
}
int big(){
    int big=antrian.data[0];
    for(int i=antrian.head;i<=antrian.tail;i++){
        if(antrian.data[i]>big){
            big=antrian.data[i];
        }
    }return big;
}

int main(){
    char n;
    create();
    int a=0;
    for(int i=0;i<max;i++){
        a=a+2;
        enqueue(a);
        cout<<endl;
    }
    tampil();
    cari();
    cariindeks();
    cout<<"\nTerbesar = "<<big()<<endl;
    cout<<"\nTerkecil = "<<small()<<endl;
    cout<<"\nRata-Rata = "<<rata()<<endl;
    cout<<"\nTotal = "<<total()<<endl;
    cout<<"\nApakah anda ingin dequeue?(y/n) ";
    cin>>n;
    if(n=='y'||n=='Y'){
        dequeue();
        cout<<"Setelah Dequeue= "<<endl;
        tampil();
    }else if(n=='n'||n=='N'){
        cout<<"\nAnda Tidak Melakukan Dequeue...";
    }else{
        cout<<"Input tidak Valid!";
    }
}