#include <iostream>
#include <string>
using namespace std;

const int MAX_SPEAKERS = 10;

struct Speaker {
    string name;
    string telephoneNumber;
    string speakingTopic;
    double feeRequired;
};

void displayMenu() {
    cout << "Speakers' Bureau Menu:" << endl;
    cout << "1. Enter data for a new speaker" << endl;
    cout << "2. Change data for a speaker" << endl;
    cout << "3. Display all speakers' data" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}

int main() {
    Speaker speakers[MAX_SPEAKERS];
    int speakerCount = 0;

    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                if (speakerCount < MAX_SPEAKERS) {
                    Speaker newSpeaker;
                    cout << "Enter Speaker's Name: ";
                    cin.ignore();
                    getline(cin, newSpeaker.name);
                    cout << "Enter Telephone Number: ";
                    getline(cin, newSpeaker.telephoneNumber);
                    cout << "Enter Speaking Topic: ";
                    getline(cin, newSpeaker.speakingTopic);
                    cout << "Enter Fee Required: $";
                    cin >> newSpeaker.feeRequired;

                    if (newSpeaker.feeRequired >= 0) {
                        speakers[speakerCount] = newSpeaker;
                        speakerCount++;
                        cout << "Speaker added successfully." << endl;
                    } else {
                        cout << "Invalid fee amount. Please enter a non-negative fee." << endl;
                    }
                } else {
                    cout << "Speakers' bureau is full. Cannot add more speakers." << endl;
                }
                break;

            case 2:
                if (speakerCount > 0) {
                    int index;
                    cout << "Enter the index of the speaker you want to change (0-" << speakerCount - 1 << "): ";
                    cin >> index;

                    if (index >= 0 && index < speakerCount) {
                        Speaker updatedSpeaker = speakers[index];
                        cout << "Enter new data for the speaker:" << endl;
                        cout << "Enter Speaker's Name: ";
                        cin.ignore();
                        getline(cin, updatedSpeaker.name);
                        cout << "Enter Telephone Number: ";
                        getline(cin, updatedSpeaker.telephoneNumber);
                        cout << "Enter Speaking Topic: ";
                        getline(cin, updatedSpeaker.speakingTopic);
                        cout << "Enter Fee Required: $";
                        cin >> updatedSpeaker.feeRequired;

                        if (updatedSpeaker.feeRequired >= 0) {
                            speakers[index] = updatedSpeaker;
                            cout << "Speaker data updated successfully." << endl;
                        } else {
                            cout << "Invalid fee amount. Speaker data not updated." << endl;
                        }
                    } else {
                        cout << "Invalid index. Please enter a valid index." << endl;
                    }
                } else {
                    cout << "No speakers in the bureau. Cannot change data." << endl;
                }
                break;

            case 3:
                if (speakerCount > 0) {
                    cout << "List of Speakers:" << endl;
                    for (int i = 0; i < speakerCount; i++) {
                        cout << "Speaker " << i + 1 << ":" << endl;
                        cout << "Name: " << speakers[i].name << endl;
                        cout << "Telephone Number: " << speakers[i].telephoneNumber << endl;
                        cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
                        cout << "Fee Required: $" << speakers[i].feeRequired << endl;
                    }
                } else {
                    cout << "No speakers in the bureau to display." << endl;
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid menu option (1-4)." << endl;
        }
    } while (choice != 4);

    return 0;
}
