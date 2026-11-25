#include <iostream>
using namespace std;

int main() {

string name;
string course;
string hobby;
string reason;
string expectation;
string definition;
string favoritefood;
string dreamjob;

// ============================================================
// QUESTION 1: NAME
// ============================================================


cout << "========================================" << endl;
cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
cout << "========================================" << endl;

do {
    cout << "1. What is your name? ";
    getline(cin, name);

    if (name.empty() || name.find_first_not_of(" \t") == string::npos) {
        cout << "You did not enter your name!." << endl;
    }
} while (name.empty() || name.find_first_not_of(" \t") == string::npos);
// ============================================================
// QUESTION 2: COURSE (BBIT or BCS)
// ============================================================

cout << "2. What course are you doing? (BBIT/BCS): ";

getline(cin, course);

// ============================================================
// QUESTION 3: HOBBY
// ============================================================

cout << "3. What is your hobby? ";

getline(cin, hobby);


// ============================================================
// QUESTION 4: REASON FOR CHOOSING THE COURSE
// ============================================================

cout << "4. Why did you choose this course? ";

getline(cin, reason);

// ============================================================
// QUESTION 5: EXPECTATIONS
// ============================================================

cout << "5. What do you expect to learn in programming? ";
getline(cin, expectation);


// ============================================================
// QUESTION 6: DEFINITION OF PROGRAMMING
// ============================================================

cout << "6. In your own words, what is programming? ";
getline(cin, definition);

// ============================================================

// QUESTION 7: FAVORITE FOOD 

// ============================================================

cout << "7. What is your favorite food?";
getline(cin,favoritefood);

// ===========================================================

// QUESTION 8: DREAM JOB

// ==========================================================

cout << "8. What is your dream job?";
getline(cin, dreamjob);


// =========================================================

// DISPLAY THE SUMMARY

// =========================================================

cout << " =================================================== ";

cout << " YOUR PROFILE SUMMARY ";

cout << " ================================================== ";

cout << "Name : " << name << endl;

cout << "Course : " << course << endl;

cout << "Hobby : " << hobby << endl;

cout << "Reason :" << reason << endl;

cout << "Expectation : " << expectation << endl;

cout << "Definition : " << definition << endl;

cout << "Favorite food :" << favoritefood << endl;

cout << " Dream job : " << dreamjob << endl;

cout << "========================================" << endl;

cout << " Great job !!!! " << name << " You are on your way to becoming a great programmer !!! "<< endl;

cout << "========================================" << endl;

}
