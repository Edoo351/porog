
    #include <iostream>
    using namespace std;

    int main() {
        int note,a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
        note=a+b+c+d+e;
        if (note<=50)
        {
            cout<<"Predmetot ne e polozen"<<endl;
        }
        else if (note<=60)
        {
            cout<<"Ocenka: 6, poeni: "<<note<<endl;
            if (note==60)
            {
                cout<<"Ima uslov za povisoka ocenka"<<endl;
            }else{
                cout<<"Nema uslov za povisoka ocenka"<<endl;
            }
        }
            else if (note<=70)
        {
            cout<<"Ocenka: 7, poeni: "<<note<<endl;
            if (note==70)
            {
                cout<<"Ima uslov za povisoka ocenka"<<endl;
            }else{
                cout<<"Nema uslov za povisoka ocenka"<<endl;
            }
        }
            else if (note<=80)
        {
            cout<<"Ocenka: 8, poeni: "<<note<<endl;
            if (note==80)
            {
                cout<<"Ima uslov za povisoka ocenka"<<endl;
            }else{
                cout<<"Nema uslov za povisoka ocenka"<<endl;
            }
        }
            else if (note<=90)
        {
            cout<<"Ocenka: 9, poeni: "<<note<<endl;
            if (note==80)
            {
                cout<<"Ima uslov za povisoka ocenka"<<endl;
            }else{
                cout<<"Nema uslov za povisoka ocenka"<<endl;
            }
        }
            else if (note<=100)
        {
            cout<<"Ocenka: 10, poeni: "<<note<<endl;
            if (note==100)
            {
                cout<<"Ima uslov za povisoka ocenka"<<endl;
            }else{
                cout<<"Nema uslov za povisoka ocenka"<<endl;
            }
        }
        return 0;
    }