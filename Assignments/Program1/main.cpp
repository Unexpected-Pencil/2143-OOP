/*****************************************************************************
*
*  Author:           Jacob Lawler
*  Email:            Jakelawler2005@gmail.com
*  Label:            P01
*  Title:            Fraction
*  Course:           CMPS 2143 OOP
*  Semester:         (Fall 2024)
*
*  Description:
*        A program that creats a fraction class that performs arithmetic functions with fractions using overloaded operators. 
         The program also overloads the == and << to compare the value of fractions and print them out in a proper format respectivley.
         The program reads in aritmitic problems through a data file.
*
*  Usage:
*        how to use the program if necessary
*
*  Files:            06-P01.cpp
*                    data.txt
*****************************************************************************/

#include <iostream>
#include <string>

using namespace std;

/**
 * Fraction
 *
 * Description:
 *      Creates a Fraction data type that can be used in arithmitic with other fraction, printed with cout, and check for equality with other fractions.
 *
 * Public Methods:
 *      - Constructer
 *      - Overloaded constructer that takes 2 ints
 *      - gcd determines 2 numbers greatest common denominator; returns an int
 *      - lcd uses int returned from gcd to determine 2 numbers greatest common denominator; returns an int
 *      - + operator preforms addition on two fractions; returns a fraction that is the sum of two other fractions
 *      - - operator preforms subtracion on two fractions; returns a fraction that is the difference of two other fractions
 *      - * operator performs multiplication on two fractions; returns a fraction that is the product of two other fractions
 *      - / operator performs division on two fractions; returns a fraction that is the quotient of two other fractions
 *      - == operator checks if two fracitons are equivalent; returns a bool
 *      - << operator prints the fraction's numerator and denominator seperated by a /
 *
 * Private Methods:
 *      
 *      - N/A
 *
 * Usage:
 *
 *      - Declare varibles of the fraction classes; perform aritmitic operations on them
 *
 */

class Fraction {
private:
    int numerator;
    int denominator;

public:
    //Default Constructor
    Fraction(){
        numerator = 1;
        denominator = 1;
    }

    //Constructor that takes ints as parameters
    Fraction(int num, int den) : numerator(num), denominator(den) {
        //Consider validating that denominator is not 0
    }

    //Constructer that takes a sting as a parameter
    Fraction(string f) {
        numerator = f[0] - 48;
        denominator = f[2] - 48;
    }

    int gcd(int, int);

    int lcd(int, int);

    Fraction operator+ (const Fraction& other);

    Fraction operator- (const Fraction& other);

    Fraction operator* (const Fraction& other);

    Fraction operator/ (const Fraction& other);

    bool operator==(const Fraction& other) const;

    // Overload output operator (<<) for printing fractions
    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    // TODO: Implement methods to read input from stdin (lecture topic)
    friend istream& operator>>(istream& is, Fraction &frac)
    {
        return is >> frac.numerator >> frac.denominator;
    }

};

int Fraction::gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCD of two numbers 
int Fraction::lcd(int a, int b)
{
    return (a / gcd(a, b)) * b;
}




// Overloaded addition operator
Fraction Fraction::operator+(const Fraction& other) {
    Fraction temp;
    temp.denominator = lcd(this->denominator, other.denominator);                                                                           //Determines what the least common denominator is
                                                                                                                                            //and makes it the new fractions denominator
    temp.numerator = (this->numerator * (temp.denominator / this->denominator) + other.numerator * (temp.denominator / other.denominator)); //Multiplies the numerators by the factor 
                                                                                                                                            //in which the denominators have increased to keep the 
                                                                                                                                            //two proportional before the frations are added

    return temp;                                                                                                                            //Returns sum of fractions
}

// Additional overloaded operators
// Overloaded subtraction operator
Fraction Fraction::operator-(const Fraction& other) {
    Fraction temp;
    temp.denominator = lcd(this->denominator, other.denominator);                                                                           //Determines what the least common denominator is and makes
                                                                                                                                            //it the new fractions denominator
    temp.numerator = (this->numerator * (temp.denominator / this->denominator) - other.numerator * (temp.denominator / other.denominator)); //Multiplies the numerators by the factor 
                                                                                                                                            //in which the denominators have increased to keep the
                                                                                                                                            //two proportional before the frations are subtracted

    return temp;                                                                                                                            //Returns difference of fractions
}

// Overloaded multiplication operator
Fraction Fraction::operator*(const Fraction& other) {
    Fraction temp;
    temp.numerator = this->numerator * other.numerator;          //Multiplies the numerators
    temp.denominator = this->denominator * other.denominator;    //Multiplies the denominators
    return temp;                                                 //Returns product of fractions
}

// Overloaded division operator
Fraction Fraction::operator/(const Fraction& other) { //Multiplies first fraction by the second fractions inverse; essesntially division
    Fraction temp;
    temp.numerator = this->numerator * other.denominator;
    temp.denominator = this->denominator * other.numerator;
    return temp;                            // Returns quotient

}


// Overloaded equality operator (==)
bool Fraction::operator==(const Fraction& other) const {
    return (this->numerator * 1.0 / this->denominator) == (other.numerator * 1.0 / other.denominator);  //Evaluations if the fractions are of the same value
}



int main(int argc, char **argv) {
    string f1, f2; 
    char op;
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }

    while (cin >> f1 >> op >> f2) {
        cout << f1 << " "
            << op << " " << f2;
        Fraction frac1(f1);
        Fraction frac2(f2);
        Fraction zero(0,1);
        Fraction result;

        // Use a switch statement to perform the operation based 
        // on the operator 
        switch (op) {
        case '+':
            result = frac1 + frac2;
            break;
        case '-':
            result = frac1 - frac2;
            break;
        case  '*':
            result = frac1 * frac2;
            break;
        case '/':
            // Check if the second number is not zero before 
            // performing division 
            if (frac2 == zero) {
                cout << "Error: Division by zero." << endl;
                return 1; // Return an error code 
            }
            else {
                result = frac1 / frac2;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1; // Return an error code 
        }
        
        cout << " = " << result << endl;
        
       
    }
    
 
    return 0;
}