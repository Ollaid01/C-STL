#include <iostream>
#include <string>

using namespace std;

int main() {

    string name = "james slocum";
    string name2(name);
    string last(name, 6, 6);
    string n4{'j', 'a', 'm', 'e', 's'};
    string line(20, '*');
    string reverse(name.rbegin(), name.rend());

    cout << name << endl;
    cout << last << endl;
    cout << n4 << endl;
    cout << reverse << endl;
    cout << line << endl;

    // Finding string
    size_t pos = name.find(n4);
    if (pos != string::npos)
        cout << "Find first name at the : " << pos << endl;
    else
        cout << "Can not Find fist name in name !" << endl;
        
    cout << line << endl;

    // Find comma in "Hello, How are you ?" string
    cout << "Comma at : " << ("Hello, How are you ?"s).find(',') << endl;
    cout << line << endl;




    return 0;
}