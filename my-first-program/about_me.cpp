#include <iostream>
using namespace std;
int main() {
    // ============================================================
// VARIABLE DECLARATIONS
// These are the "storage boxes" where we keep user answers
// ============================================================

string name; //storage the user's name(text)
string course; //stores the couse (BBIT or BCS)
string hobby; //stores the user's hobby
string reason; //stores why they chose the course
string expectation; //stores what they expect to learn
string definition; //stores the definition of programming

// ============================================================
// QUESTION 1: NAME
// ============================================================

cout <<"========================================"<< endl;
cout << "WELCOME TO MY FIRST PROGRAM!" << endl;
cout <<"========================================"<< endl;
cout <<endl;

cout <<"1. What is your name?:";
getline(cin, name); //Read the full line incuding spaces

// ============================================================
// QUESTION 2: COURSE (BBIT or BCS)
// ============================================================

cout <<"2. What course are you doing? (BBIT or BCS):";
getline(cin, course); //Read the full line incuding spaces

// ============================================================
// QUESTION 3: HOBBY
// ============================================================
cout <<"3. What is your hobby?:";
getline(cin, hobby); //Read the full line including spaces

// ============================================================
// QUESTION 4: REASON FOR CHOOSING THE COURSE
// ============================================================

cout <<"4. Why did you choose this course?:";
getline(cin, reason); //Read the full line including spaces

// ============================================================
// QUESTION 5: EXPECTATIONS
// ============================================================
cout <<"5. What do you expect to learn in programming?:";
getline(cin, expectation); //Read the full line including spaces

// ============================================================
// QUESTION 6: DEFINITION OF PROGRAMMING
// ============================================================
cout <<"6. What is your definition of programming?:";
getline(cin, definition); //Read the full line including spaces

// ============================================================
// DISPLAY THE SUMMARY
// ============================================================

cout <<endl;
cout <<"========================================"<< endl;
cout <<"YOUR PROFILE SUMMARY"       << endl;
cout <<"========================================"<< endl;
cout <<endl;
cout <<"Name: " << name << endl;
cout <<"Course: " << course << endl;
cout <<"Hobby: " << hobby << endl;
cout <<"Reason for choosing the course: " << reason << endl;
cout <<"Expectations: " << expectation << endl;
cout <<"Definition of programming: " << definition << endl;
cout <<endl;

cout <<"========================================"<< endl;
cout <<"THANK YOU FOR COMPLETING THIS!" << endl;
cout <<"========================================"<< endl;

    cout << "Press Enter to exit...";
    cin.get(); // Waits for you to press Enter
    return 0;
}