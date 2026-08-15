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

    int matric_Percentage;
    cout << "Enter your Matric Percentage: ";
    cin >> matric_Percentage;

    int entryTest_Marks;
    cout << "Enter your Entry Test Marks: ";
    cin >> entryTest_Marks;

    if (intermediate_Percentage >= 50 &&
        matric_Percentage >= 50 &&
        entryTest_Marks >= 50)

        cout << "Congratulations! " << name
             << ", You are eligible for admission." << endl;

    else
        cout << "Sorry, " << name
             << ", You are not eligible for admission." << endl;

}