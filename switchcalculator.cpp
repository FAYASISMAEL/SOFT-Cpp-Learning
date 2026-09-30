#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch(op) {
        case '+':
            cout << "Result = " << a + b;
            break;

        case '-':
            cout << "Result = " << a - b;
            break;

        case '*':
            cout << "Result = " << a * b;
            break;

        case '/':
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Cannot divide by zero";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}




































// #include<iostream>
// using namespace std;

// int main() {
//     double a, b;
//     char op;

//     cout << "Enter your Number: ";
//     cin >> a >> op >> b;

//     switch (op)
//     {
//         case '+': cout << a + b; break;
//         case '-': cout << a - b; break;
//         case '*': cout << a * b; break;

//         case '/':
//             if(b == 0)
//                 cout << "Invalid number";
//             else
//                 cout << a / b;
//             break;

//         default:
//             cout << "Invalid operator";
//     }
// }



















// #include<iostream>
// using namespace std;

// int main() {
//     double a, b;
//     char op;
//     cout << "Enter your Number: \n";
//     cin >> a >> op >> b;

//     switch (op)
//     {
//     case "+": cout << a + b; break;
//     case "-": cout << a - b; break;
//     case "*": cout << a * b; break;
//     case "/": cout << a / b; break;

//         if(b == 0)
//             cout << "Invalid number";
//         else
//             cout << a / b;
//         break;
    
//     default:
//         cout << "Invalid operator"
//     }
// }