#include <iostream>
using namespace std;

int main()
{

int n = 1;

while (n > 0) {
    // Prompt the user to enter an interger value between 5 and 10
cout<<"Enter an integer value between 5 and 10: ";
int integer;
cin>> integer;

    if (integer >= 5 && integer <= 10) {
        cout <<"Your input value("<<integer<<") has been accepted."<<endl;
        n = 0;
    }
    else {
            cout <<"Invalid input. Please enter a number between 5 and 10"<<endl;
            n++;
        }

    } 

return 0;

}