//write include statements
#include "decisions.h"
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	int choice;
    int grade;

    cout << "MAIN MENU\n";
    cout << "1 - Letter grade using if\n";
    cout << "2 - Letter grade using switch\n";
    cout << "3 - Exit\n";
    cout << "Enter option: ";
    cin >> choice;

    if (choice == 1 || choice == 2) {
        cout << "Enter a numerical grade (0-100): ";
        cin >> grade;

        if (grade < 0 || grade > 100) {
            cout << "Invalid grade. Please enter a number between 0 and 100.\n";
        } else {
            if (choice == 1) {
                cout << "Letter grade (if-else): " << get_letter_grade_using_if(grade) << "\n";
            } else {
                cout << "Letter grade (switch): " << get_letter_grade_using_switch(grade) << "\n";
            }
        }
    } else if (choice == 3) {
        cout << "Exiting program.\n";
    } else {
        cout << "Invalid option. Please select a valid menu option.\n";
    }

	return 0;
}