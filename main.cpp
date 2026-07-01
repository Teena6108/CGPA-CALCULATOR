#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "=====================================\n";
    cout << "      CODEALPHA CGPA CALCULATOR\n";
    cout << "=====================================\n";

    cout << "Enter number of subjects: ";
    cin >> n;

    string subject[20], grade[20];
    int credit[20], gp[20];
    int totalCredits = 0, totalPoints = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nSubject " << i + 1 << " Name: ";
        cin >> subject[i];

        cout << "Credit Hours: ";
        cin >> credit[i];

        cout << "Grade (O/A+/A/B+/B/C/F): ";
        cin >> grade[i];

        if (grade[i] == "O")
            gp[i] = 10;
        else if (grade[i] == "A+")
            gp[i] = 9;
        else if (grade[i] == "A")
            gp[i] = 8;
        else if (grade[i] == "B+")
            gp[i] = 7;
        else if (grade[i] == "B")
            gp[i] = 6;
        else if (grade[i] == "C")
            gp[i] = 5;
        else
            gp[i] = 0;

        totalCredits += credit[i];
        totalPoints += gp[i] * credit[i];
    }

    double cgpa = (double)totalPoints / totalCredits;

    cout << "\n\n";
    cout << left << setw(15) << "Subject"
         << setw(8) << "Grade"
         << setw(8) << "Credit"
         << setw(10) << "Points" << endl;

    cout << "---------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << left << setw(15) << subject[i]
             << setw(8) << grade[i]
             << setw(8) << credit[i]
             << setw(10) << gp[i] * credit[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalPoints << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    if (cgpa >= 9)
        cout << "Excellent!" << endl;
    else if (cgpa >= 8)
        cout << "Very Good!" << endl;
    else if (cgpa >= 7)
        cout << "Good!" << endl;
    else if (cgpa >= 6)
        cout << "Average!" << endl;
    else
        cout << "Needs Improvement!" << endl;

    return 0;
}