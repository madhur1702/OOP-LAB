#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("New.txt");

    if (!fout)
    {

        cerr << "Error!" << endl;

        return 1;
    }
    string line;
    int i = 0;
    cout << "Enter 3 lines of text:" << endl;

    while (i < 3)
    {

        getline(cin, line);

        fout << line << endl;
        i += 1;
    }

    fout.close();
    cout << "Text written successfully to New.txt"
         << endl;
    return 0;
}
