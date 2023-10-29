#include <iostream>
#include <string>

using namespace std;

class PersonalData {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    // Accessor functions
    string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    string getPhoneNumber() const {
        return phoneNumber;
    }

    // Mutator functions
    void setName(const string &newName) {
        name = newName;
    }

    void setAddress(const string &newAddress) {
        address = newAddress;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setPhoneNumber(const string &newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }
};

int main() {
    // Create instances of the PersonalData class
    PersonalData myInfo;
    PersonalData friend1Info;
    PersonalData friend2Info;

    // Set personal data for each instance using mutator functions
    myInfo.setName("Your Name");
    myInfo.setAddress("Your Address");
    myInfo.setAge(25); // Replace with your age
    myInfo.setPhoneNumber("Your Phone Number");

    friend1Info.setName("Friend 1's Name");
    friend1Info.setAddress("Friend 1's Address");
    friend1Info.setAge(30); // Replace with your friend's age
    friend1Info.setPhoneNumber("Friend 1's Phone Number");

    friend2Info.setName("Friend 2's Name");
    friend2Info.setAddress("Friend 2's Address");
    friend2Info.setAge(28); // Replace with your friend's age
    friend2Info.setPhoneNumber("Friend 2's Phone Number");

    // Display the information for each instance
    cout << "My Information:" << endl;
    cout << "Name: " << myInfo.getName() << endl;
    cout << "Address: " << myInfo.getAddress() << endl;
    cout << "Age: " << myInfo.getAge() << endl;
    cout << "Phone Number: " << myInfo.getPhoneNumber() << endl;
    cout << endl;

    cout << "Friend 1's Information:" << endl;
    cout << "Name: " << friend1Info.getName() << endl;
    cout << "Address: " << friend1Info.getAddress() << endl;
    cout << "Age: " << friend1Info.getAge() << endl;
    cout << "Phone Number: " << friend1Info.getPhoneNumber() << endl;
    cout << endl;

    cout << "Friend 2's Information:" << endl;
    cout << "Name: " << friend2Info.getName() << endl;
    cout << "Address: " << friend2Info.getAddress() << endl;
    cout << "Age: " << friend2Info.getAge() << endl;
    cout << "Phone Number: " << friend2Info.getPhoneNumber() << endl;

    return 0;
}
