#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

srand(time(0));
int daysUntilExpiration = rand() % 12;

switch (daysUntilExpiration) {
    case 0: cout<<"Your subscription has expired."<<endl; break;
    case 1: cout<<"Your subscription expires within a day!\n Renew now and save 20%"<<endl; break;
    case 2: cout<<"Your subscription expires in "<<daysUntilExpiration<<" days! \nRenew now and save 10%!"<<endl; break;
    case 3: cout<<"Your subscription expires in "<<daysUntilExpiration<<" days! \nRenew now and save 10%!"<<endl; break;
    case 4: cout<<"Your subscription expires in "<<daysUntilExpiration<<" days! \nRenew now and save 10%!"<<endl; break;
    case 5: cout<<"Your subscription expires in "<<daysUntilExpiration<<" days! \nRenew now and save 10%!"<<endl; break;
    case 6: cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    case 7: cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    case 8: cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    case 9: cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    case 10: cout<<"Your subscription will expire soon. Renew now!"<<endl; break;
    case 11: cout<<"You have an active subscription."<<endl;
}

return 0;

}