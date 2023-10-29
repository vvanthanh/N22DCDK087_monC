#include <iostream>
#include <string>
using namespace std;

// Define the structure for a speaker
struct Speaker {
    string name;
    string topic;
    int fee;
};

// Function to search for speakers by topic
void searchSpeakersByTopic(const Speaker speakers[], int numSpeakers, const string& keyword) {
    bool found = false;

    for (int i = 0; i < numSpeakers; i++) {
        if (speakers[i].topic.find(keyword) != string::npos) {
            // Speaker's topic contains the keyword
            cout << "Speaker Name: " << speakers[i].name << endl;
            cout << "Speaking Topic: " << speakers[i].topic << endl;
            cout << "Speaker Fee: $" << speakers[i].fee << endl;
            cout << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No speakers found on the topic: " << keyword << endl;
    }
}

int main() {
    const int numSpeakers = 3;
    Speaker speakers[numSpeakers] = {
        {"Speaker 1", "AI and Machine Learning", 1000},
        {"Speaker 2", "Data Science", 1200},
        {"Speaker 3", "Blockchain", 800}
    };

    cout << "Welcome to the Speaker Search Program" << endl;
    cout << "Enter a keyword to search for speakers on a particular topic: ";
    string searchKeyword;
    getline(cin, searchKeyword);

    searchSpeakersByTopic(speakers, numSpeakers, searchKeyword);

    return 0;
}
