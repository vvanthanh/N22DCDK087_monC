#include <iostream>
#include <string>

using namespace std;

struct Movie {
    string title;
    string director;
    int releaseYear;
    int runningTime;
    double productionCosts;
    double firstYearRevenues;
};

void displayMovieData(const Movie& movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Release Year: " << movie.releaseYear << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << "First Year's Profit or Loss: $" << (movie.firstYearRevenues - movie.productionCosts) << endl;
}

int main() {
    Movie movie1;
    movie1.title = "Movie A";
    movie1.director = "Director A";
    movie1.releaseYear = 2023;
    movie1.runningTime = 120;
    movie1.productionCosts = 5000000.0;
    movie1.firstYearRevenues = 7500000.0;

    Movie movie2;
    movie2.title = "Movie B";
    movie2.director = "Director B";
    movie2.releaseYear = 2022;
    movie2.runningTime = 110;
    movie2.productionCosts = 6000000.0;
    movie2.firstYearRevenues = 8500000.0;

    cout << "Movie 1 Data:" << endl;
    displayMovieData(movie1);

    cout << "\nMovie 2 Data:" << endl;
    displayMovieData(movie2);

    return 0;
}
