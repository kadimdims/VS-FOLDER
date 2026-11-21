#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    
// ============================================================
// Each variable is a storage box with a specific data type
// ============================================================
string studentName; //text - Stores the students name
string course; //text - Stores the course name(BBIT/BCS)

int score1,score2,score3; //Whole number - test scores
int totalscore; //Whole number - sum of scores

double average; //Decimal number - average score
double percentage; //Decimal number - percentage

// ============================================================
//CONSTANT DECLARATION
// ============================================================

const int MAX_SCORE = 100; //Maximum possible score per test

// ============================================================
// WELCOME BANNER
// cout displays text on the screen
//endl moves to a new line
// ============================================================

cout <<"========================================"<< endl;
cout <<"STUDENT CALCULATOR"<<           endl;
cout <<"========================================"<< endl;
cout <<"========================================"<< endl;

// ============================================================
// QUESTION 1: INPUT STUDENT NAME
// ============================================================
cout<<"Enter Student Name: ";
getline(cin, studentName); //Read the full line (including spaces)

// ============================================================
//QUESTION 2: COURSE
// ============================================================
cout<<"Enter Course (BBIT/BCS): ";
getline(cin, course);

//===========================================================
//QUESTION 3: TEST SCORES
// ============================================================
cout<<"Enter score for Test 1: ";
cin>>score1;

cout<<"Enter score for Test 2: ";
cin>>score2;

cout<<"Enter score for Test 3: ";
cin>>score3;

// ============================================================
//CALCULATIONS 1: TOTAL SCORE
// ============================================================
//THE + Operator is used to add the three test scores
//The = operator assigns the result to totalscore
//=============================================================

totalscore = score1 + score2 + score3;

// ============================================================
//CALCULATIONS 2: AVERAGE SCORE
// The / operator divides the total by 3
// We use 3.0 (double) to get decimal division.
// if we used 3(int), the result would be truncated
// ============================================================
average = totalscore / 3.0;

// ============================================================
//CALCULATIONS 3: PERCENTAGE
//Formula: (totalscore / maximumPossible) * 100
//maximumPossible = 3 tests * 100 marks = 300
// ============================================================
percentage = (totalscore / 300.0) * 100;

// ============================================================
//DISPLAY RESULTS
//fixed<<setprecision(2) formats the output to 2 decimal places
// ============================================================

cout<<endl;
cout<<"========================================"<< endl;
cout<<"REPORT CARD"<< endl;
cout<<"========================================"<< endl;
cout<<endl;

cout<<"Student Name: "<<studentName<<endl;
cout<<"Course: "<<course<<endl;
cout<<endl;
cout<<"Test 1 Score: "<<score1<<"/"<<MAX_SCORE<<endl;
cout<<"Test 2 Score: "<<score2<<"/"<<MAX_SCORE<<endl;
cout<<"Test 3 Score: "<<score3<<"/"<<MAX_SCORE<<endl;
cout<<endl;
cout<<"Total: "<<totalscore<<"/300"<<endl;
cout<<"Average: "<<fixed<<setprecision(2)<<average<<endl;
cout<<"Percentage: "<<fixed<<setprecision(2)<<percentage<<"%"<<endl;
cout<<endl;

//Determine pass or fail
if(percentage >= 50){
    cout<<"Result: PASS"<<endl;
}else{
    cout<<"Result: FAIL"<<endl;
}
cout<<"========================================"<< endl;

if(percentage >= 80){
    cout<<"Grade: A"<<endl;
}else if(percentage >= 70){
    cout<<"Grade: B"<<endl;
}else if(percentage >= 60){
    cout<<"Grade: C"<<endl; 
}else if(percentage >= 50){
    cout<<"Grade: D"<<endl;
}else{
    cout<<"Grade: F"<<endl;
}
cout<<"========================================"<< endl;

    return 0;
}