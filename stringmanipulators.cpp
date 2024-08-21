#include <iostream>
#include<string>
using namespace std;
int main () {
       string string1 = "Beginner ";
       string string2 = "to Expert ";
       string string3 = "Tutorials";
       string string4 = string1 + string2 + string3;
       int  len = string4.length();

       cout << string4 << endl;

       cout << "Length of string1 is: " << len <<endl;

       cout <<"Expert is at position " << string2.find("Expert") <<endl;

       cout << "Part of string 2: " << string2.substr(3,8)<<endl;

       cout << "Replacing 'Expert':  " << string4.replace(12, 17, "Guru")<<endl;

       cout << "Insertion:  "<< string4.insert(0, " by Kindson")<<endl;

       cout << "Erasing:  " << string3.erase(0,3)<<endl;

return 0;
}

