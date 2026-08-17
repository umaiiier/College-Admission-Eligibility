#include <iostream>
using namespace std;

int main() {

    cout << "Pakistan College of Technology" << endl;
    cout << "==============================" << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;

    int intermediate_Percentage;
    cout << "Enter your Intermediate Percentage: ";
    cin >> intermediate_Percentage;

    while (intermediate_Percentage < 0 || intermediate_Percentage > 100) {
        cout << "Invalid percentage! Please enter a value between 0 and 100: ";
        cin >> intermediate_Percentage;
    }

    int matric_Percentage;
    cout << "Enter your Matric Percentage: ";
    cin >> matric_Percentage;

    while (matric_Percentage < 0 || matric_Percentage > 100) {
        cout << "Invalid percentage! Please enter a value between 0 and 100: ";
        cin >> matric_Percentage;
    }

    int entryTest_Marks;
    cout << "Enter your Entry Test Marks: ";
    cin >> entryTest_Marks;

    while (entryTest_Marks < 0 || entryTest_Marks > 100) {
        cout << "Invalid marks! Please enter a value between 0 and 100: ";
        cin >> entryTest_Marks;
    }

    if (intermediate_Percentage >= 50 &&
        matric_Percentage >= 50 &&
        entryTest_Marks >= 50)

        cout << "Congratulations! " << name
             << ", You are eligible for admission." << endl;

    else
        cout << "Sorry, " << name
             << ", You are not eligible for admission." << endl;

}