#include <iostream>
#include <cstring>
using namespace std;
class Webpage
{
private:
char url[100];
char *contenent;
void copy(const Webpage & wp){
      strcpy(this->url,wp.url);
        this->contenent= new char [strlen(wp.contenent)+1];
        strcpy(this->contenent,wp.contenent);
}
public:
    Webpage(char * url = "https//edin.com" char * contenent = "edin")
    {
        strcpy(this->url,url);
        this->contenent= new char [strlen(contenent)+1];
        strcpy(this->contenent,contenent);

    }
    Webpage (const Webpage & wp){
        void copy(const Webpage & wp);
    }
    ~Webpage();
};



int main(){
    return 0;
}
