#include <iostream>
using namespace std;
int main() {
    int N; 
    cin >> N;
    int bestSemester = -1;
    float bestAverage = -1;
    float bestPassedPercentage = -1;
    for (int i = 1; i <= N; ++i) {
        int M; 
        cin >> M;
        float sumGrades = 0.0;
        int countGrades = M;
        for (int j = 0; j < M; ++j) {
            int grade;
            cin >> grade;
            sumGrades += grade;
        }
        int intendedSubjects;
        cin >> intendedSubjects;
        float average = (sumGrades / M) * (intendedSubjects / float(intendedSubjects)) +
                        (1 - (intendedSubjects / float(intendedSubjects))) * 5;
        float passedPercentage = (average - 5) / 5 * 100;
        if (bestSemester == -1 || average > bestAverage) {
            bestAverage = average;
            bestSemester = i;
            bestPassedPercentage = passedPercentage;
        }
    }
    cout << "Best Semester: " << bestSemester << endl;
    cout << "Average: " << bestAverage << endl;
    cout << "Passed Percentage: " << bestPassedPercentage << "%" << endl;
    return 0;
}
