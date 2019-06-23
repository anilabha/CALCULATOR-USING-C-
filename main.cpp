#include <iostream>

using namespace std;

int main()
{
    double n1,n2;
    char op;
    cout<<"enter the 1st no: ";
    cin>>n1;
    cout<<"enter the 2nd no: ";
    cin>>n2;
    cout<<"enter the operator: ";
    cin>>op;

    double result;
    if (op=='+'){
            result=n1+n2;

    }
    else if (op=='-'){
        result=n1-n2;
    }
    else if (op=='*'){
        result=n1*n2;
    }
    else if (op=='/'){
        result=n1/n2;
    }
    else{
        cout<<"invalid operator";
    }
    cout<<"OUTPUT OF THE CALCULATOR = "<<result;
    return 0;
}
