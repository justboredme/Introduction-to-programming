#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_SCORE = 100;

int main() {
    string studentName;
    string course;
    int score1, score2, score3, score4;
    int totalScore;
    double average;
    double percentage;

    cout << "=========================================\n";
    cout << " STUDENT SCORE CALCULATOR\n";
    cout << "=========================================\n\n";

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);

    do {
        cout << "Enter score for Test 1: ";
        cin >> score1;
        if (score1 < 0 || score1 > MAX_SCORE)
            cout << "Invalid score. Enter a value from 0 to 100.\n";
    } while (score1 < 0 || score1 > MAX_SCORE);

    do {
        cout << "Enter score for Test 2: ";
        cin >> score2;
        if (score2 < 0 || score2 > MAX_SCORE)
            cout << "Invalid score. Enter a value from 0 to 100.\n";
    } while (score2 < 0 || score2 > MAX_SCORE);

    do {
        cout << "Enter score for Test 3: ";
        cin >> score3;
        if (score3 < 0 || score3 > MAX_SCORE)
            cout << "Invalid score. Enter a value from 0 to 100.\n";
    } while (score3 < 0 || score3 > MAX_SCORE);

    do {
        cout << "Enter score for Test 4: ";
        cin >> score4;
        if (score4 < 0 || score4 > MAX_SCORE)
            cout << "Invalid score. Enter a value from 0 to 100.\n";
    } while (score4 < 0 || score4 > MAX_SCORE);

    totalScore = score1 + score2 + score3 + score4;
    average = totalScore / 4.0;
    percentage = (static_cast<double>(totalScore) / 400.0) * 100.0;

    cout << "\n=========================================\n";
    cout << " REPORT CARD\n";
    cout << "=========================================\n";
    cout << "Student: " << studentName << endl;
    cout << "Course: " << course << endl;
    cout << "Test 1: " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2: " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3: " << score3 << "/" << MAX_SCORE << endl;
    cout << "Test 4: " << score4 << "/" << MAX_SCORE << endl;
    cout << "Total: " << totalScore << "/400" << endl;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 50) {
        cout << "Result: PASS" << endl;
    } else {
        cout << "Result: FAIL" << endl;
    }

    if (percentage >= 80) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 75) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 55) {
        cout << "Grade: D" << endl;
    } else if (percentage <=50){
        cout << "Grade: F" << endl;
    }

    cout << "=========================================\n";

    return 0;
}
