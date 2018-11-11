#include <iostream>
using namespace std;

int main()
{
    // C++ Calculator Program

    int num1, num2,resultSub, resultSum, resultDiv, resultMul;

    cout<<"Welcome to the calculator program" << endl;


    cout<<"Enter the first number = ";
    cin>>num1;

    cout<<"Enter the second number = ";
    cin>>num2;

    string userInput;
    cout<< "Enter sub, sum, div, or mul"<<endl;
    cin>>userInput;


    if(userInput == "sub"){
      resultSub = num1 - num2;
      cout<< "Result = " << resultSub;

    } else if(userInput == "sum"){
      resultSum = num1 + num2;
      cout<< "Result = " << resultSum;

    } else if(userInput == "div"){
      resultDiv = num1 / num2;
      cout<< "Result = " << resultDiv;

    } else if(userInput == "mul"){
      resultMul = num1 * num2;
      cout<< "Result = " << resultMul;
    }




    return 0;
}
