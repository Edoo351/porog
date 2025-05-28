#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,poeni;
    cin>>a>>b>>c>>d>>e;
    poeni=0;
    poeni=a+b+c+d+e;
    if (poeni>=50)
    {
        cout<<"Ne go Polozil Predmetot"<<endl;
    }
    else if (poeni>=60)
    {
        cout<<"Otcenka 6"<<endl;
        if (poeni==60)
        {
            cout<<"Ima Uslov Za Pogolema otcenka"<<endl;

        }
        else
        {
            cout<<"Nema Uslov Za Pogolema Otcenka";
        }
        else if (poeni>=70)
        {
            cout<<"Otcenka 7"<<endl;
            if (poeni==70)
            {
                cout<<"Ima Uslov Za Pogolema otcenka"<<endl;

            }
            else
            {
                cout<<"Nema Uslov Za Pogolema Otcenka"endl;
            }
            else if (poeni>=80)
            {
                cout<<"Otcenka 8"<<endl;
                if (poeni==80)
                {
                    cout<<"Ima Uslov Za Pogolema otcenka"<<endl;

                }
                else
                {
                    cout<<"Nema Uslov Za Pogolema Otcenka"endl;
                }
                else if (poeni>=90)
                {
                    cout<<"Otcenka 6"<<endl;
                    if (poeni==90)
                    {
                        cout<<"Ima Uslov Za Pogolema otcenka"<<endl;

                    }
                    else
                    {
                        cout<<"Nema Uslov Za Pogolema Otcenka"endl;
                    }
                    else if (poeni>=100)
                    {
                        cout<<"Otcenka 10"<<endl;
                        if (poeni==100)
                        {
                            cout<<"Ima Uslov Za Pogolema otcenka"<<endl;

                        }
                        else
                        {
                            cout<<"Nema Uslov Za Pogolema Otcenka"endl;
                        }
    }
                }
    return 0;
}
