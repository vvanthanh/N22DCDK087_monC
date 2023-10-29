#include <iostream>
using namespace std;

// Define a structure to store movie information
struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

// Function to display movie information
void displayMovieInfo(const MovieData& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time (minutes): " << movie.runningTime << endl;
    cout << "-----------------------------------\n";
}

int main() {
    // Create two MovieData variables and populate them with information
    MovieData movie1;
    movie1.title = "Movie Title 1";
    movie1.director = "Director 1";
    movie1.yearReleased = 2020;
    movie1.runningTime = 120;

    MovieData movie2;
    movie2.title = "Movie Title 2";
    movie2.director = "Director 2";
    movie2.yearReleased = 2019;
    movie2.runningTime = 105;

    // Display information about the movies using the function
    cout << "Movie 1 Information:\n";
    displayMovieInfo(movie1);

    cout << "Movie 2 Information:\n";
    displayMovieInfo(movie2);

    return 0;
}
