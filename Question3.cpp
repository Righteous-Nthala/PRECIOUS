#include <iostream>
#include <String>
using namespace std;

int main()
{

string idNo[8];
idNo[0] = "B123";
idNo[1] = "C234";
idNo[2] = "A345";
idNo[3] = "C15";
idNo[4] = "B177";
idNo[5] = "G3003";
idNo[6] = "C235";
idNo[7] = "B179";

char b = 'B';
int n = 7;
int index;

for (index = 0; index <= 7; index++) {
    if ((idNo[index]).at(0) == b) {
        cout << idNo[index]<<endl;
    }
}

return 0;

}