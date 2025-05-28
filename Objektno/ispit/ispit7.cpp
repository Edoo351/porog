#include<iostream>
#include<string.h>
using namespace std;

//место за вашиот код
class Delo {
private:
    char name [50];
    int yearp;
    char origin[50];

    Delo (const char * name = "", int yearp=0,const char * origin="") {
        strcpy(this->name,name);
        this->yearp,yearp;
        strcpy(this->origin,origin);
    }
    const char * getName() const {
        return name;
    }
    const char * getOrigin() const {
        return origin;
    }
    int getYear() {
        return yearp;
    }
    void yearp1(const int yearp) {
        this->yearp = yearp;
    }
    void setName(const char* newname) {
        strcpy(name,newname);
    }
    void setOrigin(const char* neworigin) {
        strcpy(name,neworigin);
    }
    bool operator==(const Delo& other) const {
        return strcmp(name, other.name) == 0;
    }

};

class Pretstava {
private:
    Delo *d;
    int n;
    char pdate[15];

    void copy(const Pretstava &other) {
        strcpy(this->pdate,other.pdate);
        this->n=other.n;
        d = new Delo[n];
        for (int i=0;i<other.n;i++) {
            d[i]=other.d[i];
        }
    }
public:
    Pretstava(Delo * d,int n,const char * pdate="")
    {
        strcpy(this->pdate,pdate);
        n=0;
        d=nullptr;
    }

    Pretstava (const Pretstava &other) {
        copy(other);
    }
    void ticket1(const int ticket) {
        this->n = ticket;
    }

    int ticket2() const {
        return n;
    }
    void setPdate(const char * newPdate) {
        strcpy(pdate,newPdate);
    }
    const char * getPdate() const {
        return pdate;
    }
    int cena() const {
        int N=80;
        int M=0;
       for (int i=0;i<n;i++) {
           if (strcmp)
       }
    }
};

//citanje na delo
Delo readDelo(){
    char ime[50];
    int godina;
    char zemja[50];
    cin>>ime>>godina>>zemja;
    return Delo(ime,godina,zemja);
}
//citanje na pretstava
Pretstava* readPretstava(){
    int tip; //0 za Balet , 1 za Opera
    cin>>tip;
    Delo d=readDelo();
    int brojProdadeni;
    char data[15];
    cin>>brojProdadeni>>data;
    if (tip==0)  return new Balet(d,brojProdadeni,data);
    else return new Opera(d,brojProdadeni,data);
}
int main(){
    int test_case;
    cin>>test_case;

    switch(test_case){
    case 1:
    //Testiranje na klasite Opera i Balet
    {
        cout<<"======TEST CASE 1======="<<endl;
        Pretstava* p1=readPretstava();
        cout<<p1->getDelo().getIme()<<endl;
        Pretstava* p2=readPretstava();
        cout<<p2->getDelo().getIme()<<endl;
    }break;

    case 2:
    //Testiranje na  klasite Opera i Balet so cena
    {
        cout<<"======TEST CASE 2======="<<endl;
        Pretstava* p1=readPretstava();
        cout<<p1->cena()<<endl;
        Pretstava* p2=readPretstava();
        cout<<p2->cena()<<endl;
    }break;

    case 3:
    //Testiranje na operator ==
    {
        cout<<"======TEST CASE 3======="<<endl;
        Delo f1=readDelo();
        Delo f2=readDelo();
        Delo f3=readDelo();

        if (f1==f2) cout<<"Isti se"<<endl; else cout<<"Ne se isti"<<endl;
        if (f1==f3) cout<<"Isti se"<<endl; else cout<<"Ne se isti"<<endl;

    }break;

    case 4:
    //testiranje na funkcijata prihod
    {
        cout<<"======TEST CASE 4======="<<endl;
        int n;
        cin>>n;
        Pretstava **pole=new Pretstava*[n];
        for (int i=0;i<n;i++){
            pole[i]=readPretstava();

        }
        cout<<prihod(pole,n);
    }break;

    case 5:
    //testiranje na prihod so izmena na cena za 3d proekcii
    {
        cout<<"======TEST CASE 5======="<<endl;
        int cenaBalet;
        cin>>cenaBalet;
        Balet::setCenaBalet(cenaBalet);
        int n;
        cin>>n;
        Pretstava **pole=new Pretstava*[n];
        for (int i=0;i<n;i++){
            pole[i]=readPretstava();
        }
        cout<<prihod(pole,n);
        }break;

    case 6:
    //testiranje na brojPretstaviNaDelo
    {
        cout<<"======TEST CASE 6======="<<endl;
        int n;
        cin>>n;
        Pretstava **pole=new Pretstava*[n];
        for (int i=0;i<n;i++){
            pole[i]=readPretstava();
        }

        Delo f=readDelo();
        cout<<brojPretstaviNaDelo(pole,n,f);
    }break;

    };


return 0;
}
