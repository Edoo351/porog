#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

double calculateRatio(const char* text,int uppercase,int lowercase){
    int uppercount=0;
    int lowercount=0;
    for (int i = 0; i < text[i]!='\0'; i++)
    {
        if (isupper(text[i]))
        {
            uppercount++;
        }
        else if (islower(text[i]))
        {
            lowercount++;
        }
    }
  if (lowercount == 0) {
        return uppercount > 0 ? uppercount : 0; // Avoid division by zero
    }
    return (1.0 * uppercount) / lowercount;
}

int main(){
    char text [1000];
    int textLine=0;
    int maxRatioLine=0;
    int maxRatio=-1;
    while (cin.getline(text,1000))
    {
        textLine++;
        int uppercase=0;
        int lowercase=0;
        double ratio=calculateRatio(text,uppercase,lowercase);
        cout << fixed << setprecision(2) << ratio << " " << text << endl;
        if (maxRatio>ratio)
        {
            maxRatio=ratio;
            maxRatioLine=textLine;
        }

    }

        cout << "Line with largest ratio: " << maxRatioLine << endl;


    return 0;
}
