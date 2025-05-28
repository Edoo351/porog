#include<iostream>
using namespace std;
bool check(int arr){
    int last=arr%10;//ke funksioni se pari e marr numrin e fundit vetem te arry
   int first=arr; // ktu o deklarimi i pare qe esthe deklarohet arr bredna dhe hyn ke while
    while (arr>=10)//ktu behet while deri sa mbess numer nje shifror per ate esthe 10
    {
        arr/=10;
    }
    return (first%2==1)&&(last%2==0); // ktu behet qeku sepse eshte boll dhe e kthen nese eshte sakte te e printoj
}
int main(){
    int N;
    cin>>N;
    bool found=false;// buleani nese nuk ka ansje te printoj ce ska asgje
    int arr[100];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
 for (int i = 0; i < N; i++)
    {
       if (check(arr[i]))// brenda for sepse per krejt ti marr parasush nje nga nje
       //dhe printimi behet veten bredna if sepse nese e shkrush pa if de kthej vetem 1 ose 0
       {
        cout<<arr[i]<<" ";
        found=true;// ktu buleani behet true mos printoj qe ska ansje brenda
        cout<<endl;
       }
    }
    if (!found)
    {
       cout<<"No such elements!";
    }

    return 0;
}
