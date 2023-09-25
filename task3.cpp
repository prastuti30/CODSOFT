#include <iostream>
using namespace std;

int main() {
    double n1, n2;
    char operators;
cout<<"\t\tWELCOME TO THE SIMPLE CALCULATOR PROGRAMME\t\t"<<endl;
     cout << "\t\tSimple Calculator\t\t" <<  endl;
     cout << "Enter the first number: ";
     cin >> n1;
cout<<"Enter your operator: "<<endl;
cout<<"+"<<endl<<"-"<<endl<<"*"<<endl<<"/"<<endl;
cin>> operators;


     cout << "Enter the second number: ";
     cin >> n2;

    double result;

    switch (operators) {
        case '+':
            result = n1 + n2;
             cout << "Result: " << n1 << " + " << n2 << " = " << result <<  endl;
            break;
        case '-':

            result = n1 - n2;
             cout << "Result: " << n1 << " - " << n2 << " = " << result <<  endl;
            break;
        case '*':
            result = n1 * n2;
             cout << "Result: " << n1 << " * " << n2 << " = " << result <<  endl;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                 cout << "Result: " << n1 << " / " << n2 << " = " << result <<  endl;
            } else {
                 cout << "Error: Division by zero is not allowed." <<  endl;
            }
            break;
        default:
             cout << "ERROR: INVALID OPERATOR INSERTED" <<  endl;
    }

    return 0;
}