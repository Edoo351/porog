// Input data for an unknown number of students (up to 100) is read from standard input. Data is entered in each row as follows:

// First name
// Last name
// Index number (format xxyzzzz)
// Four numbers (points for each task)
// with arbitrary number of spaces or tabs between them.

// Write a program that will print a list of students, where each row will contain:
//  last name, first name, index number, total number of points, sorted by the number of points.
// First names and last names should be written with an uppercase initial letter.

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void clean(char * name){
    name[0]= toupper(name[0]);
    for (int i = 1; i < strlen(name); i++)
    {
        name[i]=tolower(name[i]);
    }

}
struct Student
{
    char Firstname[40];
    char Secondname[40];
    char index[7];
    int grades[40];
    int numberofGrades;
    void read(){
        cin>>Firstname>>Secondname>>index>>numberofGrades;
        for (int i = 0; i < numberofGrades; i++)
        {
            cin>>grades[i];
        }

    }
    float average(){
        int sum=0;
        for (int i = 0; i < numberofGrades; i++)
        {
            sum+=grades[i];
        }
        return sum/numberofGrades;
    }
    void print(){
        clean(Firstname);
        clean(Secondname);
        cout<<Secondname<<" "<<Firstname<<" "<<index<<" "<<average()<<endl;
    }
    int cmp(Student other){
        if (average()>other.average())
        {
            return 1;
        }
        else if (average()<other.average())
        {
            return -1;
        }
        else
        {
            return 0;
        }

    }
};
typedef struct Student student;

int main (){
    Student s [100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        s[i].read();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (s[j].cmp(s[j+1])==-1)
            {
                swap(s[j],s[j+1]);
            }

        }

    }


    for (int i = 0; i < n; i++)
    {
        s[i].print();
    }
    return 0;
}
