#include <iostream>
#include <string>

using namespace std;

string replaceSubstring(const string &string1, const string &string2, const string &string3) {
    string result = string1;
    size_t found = result.find(string2);
    
    while (found != string::npos) {
        result.replace(found, string2.length(), string3);
        found = result.find(string2, found + string3.length());
    }
    
    return result;
}

int main() {
    string string1 = "the dog jumped over the fence";
    string string2 = "the";
    string string3 = "that";

    string replacedString = replaceSubstring(string1, string2, string3);

    cout << "Original string: " << string1 << endl;
    cout << "Modified string: " << replacedString << endl;

    return 0;
}
