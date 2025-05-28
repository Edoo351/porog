#include<iostream>
using namespace std;


void funkcijaBerReturn(int broj){
    //NE VRAJCA RREZULTAT

    broj+=10;
    cout << broj;
}

funkcijaZaNiza()
int funkcijaSamoInteger(int broj){

    broj+=10;

    funkcijaBerReturn(broj);

    return broj;
}

int main()
{
    int a, b;


    a = funkcijaSamoInteger(10);

    cout << "Return na funkcijaSamoInteger" << a;

    return 0;
}