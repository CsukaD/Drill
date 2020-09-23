#include "std_lib_facilities.h"
int main()
{
cout <<"Enter the  name of the person you  want to write to \n";
string first_name="";
cin >> first_name;
cout << "Dear "  << first_name << "\n";
cout <<"Enter the  name of your another friend\n";
string friend_name="";
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately?\n";
char sex=0;
cout >> sex;
if ( sex == 'f' )
cout << "If you see" << friend_name <<" please ask her to call me.";
else
cout << "If you see" << friend_name <<" please ask him to call me.";
return 0;
}
