#include <iostream>
#include <string>

using namespace std;

int main() {

    // create strings
    string names("James , Solocum");
    string firstname{'J', 'a', 'm', 'e', 's'};
    string line(20, '*');
    string reverse(names.rbegin(), names.rend());
    cout << names << endl;
    cout << reverse << endl;
    cout << line << endl;

    // Finding string
    size_t pos = names.find(firstname);
    if (pos != string::npos) {
        cout << firstname + " found in \'" + names << "\' at " << pos << endl;
    } else {
        cout << firstname + " not found !" << endl;
    }

    size_t pos_lastname = names.find("Solocum");
    if (pos_lastname != string::npos) {
        cout << " found !" << " at " << pos_lastname << endl;
    }
    
    cout << line << endl;

    // Find comma in "Hello, How are you ?" string
    cout << "Comma found at : " << names.find(',') << endl;

    // Append to string
    string about(" is a programer !");
    names.push_back(' ');
    for (char c : about) {
        names.push_back(c);
    }
    cout << names << endl;

    cout << line << endl;

    // Insert at postion
    names.insert(0, "I have heard that ");
    cout << names << endl;
    
    cout << line << endl;

    // Replace some string
    size_t pos_replace = names.find("programmer");
    names.replace(pos_replace, ("programer"s).length(), "developer");
    cout << names << endl;

    // erase c-string in names
    pos = names.find("heard");
    names.erase(pos, ("heard"s).length());
    cout << names << endl;

    // insert 
    names.insert(pos, "read somewhere");
    cout << names << endl;

    return 0;
}