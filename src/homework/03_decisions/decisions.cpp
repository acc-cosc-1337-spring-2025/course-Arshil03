//write include statement for decisions header
#include "decisions.h"


//Write code for function(s) code here
using std::cout;
using std::cin;

int main()
{
    cout<<"Enter option number: ";
    cin>>option;

    auto option_value = menu_option(option)
    // Function using if-else-if structure
string get_letter_grade_using_if(int grade) {
    if (grade >= 90 && grade <= 100) {
        return "A";
    } else if (grade >= 80) {
        return "B";
    } else if (grade >= 70) {
        return "C";
    } else if (grade >= 60) {
        return "D";
    } else {
        return "F";
    }
}

// Function using switch-case structure
string get_letter_grade_using_switch(int grade) {
    switch (grade / 10) {
        case 10: // Falls through
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
}
}
