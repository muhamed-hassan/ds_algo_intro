#include <iostream>

using namespace std;

/** Declaration of functions */
void displayProgramOneAnalysis();
void displayProgramTwoAnalysis();
void displayProgramThreeAnalysis();
void displayProgramFourAnalysis();
void displayProgramFiveAnalysis();
void displayProgramSixAnalysis();
void displayProgramSevenAnalysis();
void displayProgramEightAnalysis();


/** ************************************************************************** */
int main() {

    // Start on the first lesson
    cout << "Hello world!" << endl;


    /** Move to here later and comment/uncomment one-function-call by one */
    //displayProgramOneAnalysis();
    //displayProgramTwoAnalysis();
    //displayProgramThreeAnalysis();
    //displayProgramFourAnalysis();
    //displayProgramFiveAnalysis();
    //displayProgramSixAnalysis();
    //displayProgramSevenAnalysis();
    //displayProgramEightAnalysis();

    return 0;
}


/**
 **************************************************************************
 Simple programs that follows the pattern of "Inputs-Processing-Outputs"
 in its way of solving as below
 */
/** Definition of functions */
void displayProgramOneAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program that asks the user to enter the radius of a circle and then
    computes and displays the circle's area and circumference
    */

    // Inputs => assume it has been entered via the user
    float radius = 5.5;

    // Processing
    float bi = 3.14159;
    float area = bi * radius * radius;
    float circumference = 2 * bi * radius;

    // Outputs
    cout << "area = " << area << endl;
    cout << "circumference = " << circumference << endl;
}

void displayProgramTwoAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program that reads a mile from the console, and converts it
    to kilometers, and displays the result
    */

    // Inputs => assume it has been entered via the user
    int miles = 96;

    // Processing
    float kilometers = 1.6 * miles;

    // Outputs
    cout << miles << " miles is " << kilometers << " kilometers" << endl;
}

void displayProgramThreeAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program that reads the balance and the annual percentage interest rate
    and displays the interest for the next month.
    */

    // Inputs => assume they have been entered via the user
    float balance = 1000;
    float annualInterestRate = 3.5;

    // Processing
    float interest = balance * (annualInterestRate / 1200);

    // Outputs
    cout << "The interest is " << interest << endl;
}

void displayProgramFourAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program to print your income after taxes, assuming:
    Gross salary $78,000
    Social security tax 7.5% on the first $58,000 of income
    Federal tax is $3,000 PLUS 28% of all income over $30,000
    State tax is 10% of gross salary
    */

    // Inputs => assume it has been entered via the user
    int grossSalary = 78000;

    // Processing
    float socialSecurityTax;
    if (grossSalary >= 58000) {
        socialSecurityTax = 58000 * 0.075;
    } else {
        socialSecurityTax = 0;
    }
    float federalTax = 3000 + 0.28 * (grossSalary - 30000);
    float stateTax = grossSalary * 0.1;
    float netSalary = grossSalary - (socialSecurityTax + federalTax + stateTax);

    // Outputs
    cout << "Your net salary is " << netSalary << endl;
}

void displayProgramFiveAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program to print:
    Grade A for exam percentage greater than or equal 90,
    Grade B for scores in the range of 80 to 89,
    Grade C for scores in the range of 70 to 79,
    Grade D for scores in the range of 60 to 69,
    Grade F for all other grades
    */

    // Inputs => assume it has been entered via the user
    int score = 75;

    // Processing
    char grade;
    if (score >= 90) {
        grade = 'A';
    } else if (score < 89 && score >= 80) {
        grade = 'B';
    } else if (score < 79 && score >= 70) {
        grade = 'C';
    } else if (score < 69 && score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Outputs
    cout << "Your grade is " << grade << endl;
}

void displayProgramSixAnalysis() {
    /*
    Problem definition:
    *******************
    Write a program to simulate a simple calculator
    */

    // Inputs => assume they have been entered via the user
    float firstOperand = 5.5;
    float secondOperand = 2.8;
    char mathOperator = '+';

    // Processing
    float result;
    bool divisionByZeroError = false;
    bool undefinedMathOperatorError = false;
    switch (mathOperator) {
        case '+':
            result = firstOperand + secondOperand;
            break;
        case '-':
            result = firstOperand - secondOperand;
            break;
        case '*':
            result = firstOperand * secondOperand;
            break;
        case '/':
            if (secondOperand == 0) {
                divisionByZeroError = true;
            } else {
                result = firstOperand / secondOperand;
            }
            break;
        default:
            undefinedMathOperatorError = true;
    }

    // Outputs
    if (divisionByZeroError) {
        cout << "Division be zero is not allowed" << endl;
    } else if (undefinedMathOperatorError) {
        cout << "Undefined math operator where it should be one of +, -, /, or *" << endl;
    } else {
        cout << "Result is " << result << endl;
    }
}

void displayProgramSevenAnalysis() {
    /*
    Problem definition:
    *******************
    Find the sum of all the elements in an array
    */

    // Inputs => assume they have been entered via the user
    int dataSize = 10;
    int data[] = { 1, 5, 10, 2, 3, 7, 6, 4, 8, 9 };

    // Processing
    int sum = 0;
    for (int cursor = 0; cursor < dataSize; cursor++) {
        sum += data[cursor];
    }

    // Outputs
    cout << "Sum is " << sum << endl;
}

void displayProgramEightAnalysis() {
    /*
    Problem definition:
    *******************
    Check if a value do exist in an array or not
    */

    // Inputs => assume they have been entered via the user
    int valueToBeSearched = 3;
    int dataSize = 10;
    int data[] = { 1, 5, 10, 2, 3, 7, 6, 4, 8, 9 };

    // Processing
    bool valueToBeSearchedExisted = false;
    for (int cursor = 0; cursor < dataSize; cursor++) {
        if (data[cursor] == valueToBeSearched) {
            valueToBeSearchedExisted = true;
            break;
        }
    }

    // Outputs
    if (valueToBeSearchedExisted) {
        cout << valueToBeSearched << " do exist " << endl;
    } else {
        cout << valueToBeSearched << " do not exist " << endl;
    }
}
