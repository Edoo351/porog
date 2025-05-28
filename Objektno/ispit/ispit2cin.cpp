#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

void wtf() {
    ofstream fout("input.txt");
    string line;
    while (getline(std::cin, line)) {
        if (line == "----"){
            break;
        }
        fout << line << endl;
    }
}

void rff(const string& path) {
    ifstream fin(path);
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
}

class StudentFailedException {
private:
    string message;
public:
    explicit StudentFailedException(const string& message = "")
        : message(message) {}

    void print() const {
        cout << "Student with id " << message << " failed the course" << endl;
    }
};

class Student {
private:
    string index;
    string name;
    string surname;
    int points;
public:
    Student(const string& index = "", const string& name = "", const string& surname = "", int points = 0)
        : index(index), name(name), surname(surname), points(points) {}

    friend ostream& operator<<(ostream& os, const Student& obj) {
        os << obj.index << " " << obj.name << " " << obj.surname << " " << obj.points << " Grade: " << obj.grade();
        return os;
    }

    int grade() const {
        if (points < 50) return 5;
        if (points < 60) return 6;
        if (points < 70) return 7;
        if (points < 80) return 8;
        if (points < 90) return 9;
        return 10;
    }

    int getPoints() const {
        return points;
    }

    string getIndex() const {
        return index;
    }

    string getName() const {
        return name;
    }

    string getSurname() const {
        return surname;
    }
};

class Results {
private:
    Student *students;
    int num;

    void copy(const Results &obj) {
        this->num=obj.num;
        students = new Student[obj.num];
        for (int i = 0 ; i<num ; i++) {
            students[i]=obj.students[i];
        }
    }
public:
    explicit Results(){
        num=0;
        students = nullptr;
    }
    Results(const Results &obj) {
        copy(obj);
    }

    Results &operator=(const Results &obj) {
        delete [] students;
        copy(obj);
    }

    Results& operator+=(const Student& other) {
        if (other.getPoints() < 50) {
            throw StudentFailedException(other.getIndex());
        }
       Student *temp = new Student [num+1];
        for (int i = 0; i< num; i++) {
            temp[i]=students[i];
        }
        temp[num] = other;
        num++;
        delete [] students;
        students = temp ;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Results& obj) {
        for (int i = 0 ; i< obj.num ; i++) {
            os << obj.students[i] << endl;
        }
        return os;
    }

    void printWithGrade(ostream& os, int grade) const {
        int count = 0;
       for (int i = 0 ; i<num ; i++) {
            if (students[i].grade() == grade) {
                count++;
                os << students[i]<< endl;
            }
        }
        if (count == 0) {
            cout << "None" << endl;
        }
    }
};

int main() {
    wtf();

    Results results;

    // Reading students from the file and adding them to `results`
    ifstream edin("input.txt");

    if (!edin.is_open()) {
        return -2;
    }

    while (true) {
        string index, name, surname;
        int points;
        edin >> index >> name >> surname >> points;
        if (edin.fail()) {
            break;
        }
        Student edinijom(index, name, surname, points);
        try {
            results += edinijom;
        } catch (StudentFailedException& e) {
            e.print();
        }
    }

    edin.close();

    // DO NOT MODIFY THE CODE BETWEEN THIS AND THE NEXT COMMENT
    int grade;
    cin >> grade;
    // DO NOT MODIFY THE CODE BETWEEN THIS AND THE PREVIOUS COMMENT

    // Saving the results in the files output1.txt and output2.txt after this line
    ofstream lexojm("output1.txt");
    if (!lexojm.is_open()) {
        cerr << "Failed to open output1.txt" << endl;
        return -3;
    }
    lexojm << results;
    lexojm.close();

    ofstream lexojm2("output2.txt");
    if (!lexojm2.is_open()) {
        cerr << "Failed to open output2.txt" << endl;
        return -4;
    }
    results.printWithGrade(lexojm2, grade);
    lexojm2.close();

    // DO NOT MODIFY THE CODE BELOW
    cout << "All students:" << endl;
    rff("output1.txt");
    cout << "Grade report for grade " << grade << ": " << endl;
    rff("output2.txt");

    return 0;
}
