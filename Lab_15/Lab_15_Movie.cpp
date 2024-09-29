// COMSC 210 | Lab 15: Movie Class | Ethan Dilk
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

const int WIDTH = 15;

class Movie {
    private:
        string title;
        string screenwriter;
        int releaseYear;

    public:
        // getters
        string getTitle() { return title; }
        string getScreenwriter() {return screenwriter; }
        int getReleaseYear() {return releaseYear; }

        // setters
        void setTitle(string title) {this->title = title;}
        void setScreenwriter(string screenwriter) {this->screenwriter = screenwriter;}
        void setReleaseYear(int releaseYear) {this->releaseYear = releaseYear; } 

        // print method to display object attributes
        void print(){
            cout << "Movie: " << title << endl;
            cout << setw(WIDTH) << "Year Released: " << releaseYear << endl;
            cout << setw(WIDTH) << "Screenwriter: " << screenwriter << endl;
            cout << endl;
        }

};

int main(){
    // vector to store Movie objects
    vector<Movie> movieVector;

    ifstream movieData("/Users/ethandilk/Desktop/Computer Science/COMSC 210 - Program Design & Data Structures/Module 5 - OOP/Lab_15/input.txt");

    if (!movieData){
        cout << "Error opening file - please try again!" << endl;
        exit(1);
    }
    // temporary variables to store input text from file
    string tempTitle, tempScreenwriter;
    int year;

    while (getline(movieData, tempTitle)){
        movieData >> year;
        movieData.ignore();
        getline(movieData, tempScreenwriter);

        // Using class setters to store temp data from file into temp Movie object
        Movie tempMovie;
        tempMovie.setTitle(tempTitle);
        tempMovie.setReleaseYear(year);
        tempMovie.setScreenwriter(tempScreenwriter);

        // adding tempMovie into vector of movies
        movieVector.push_back(tempMovie);
    }
    
    // Loop through each movie in vector and use print method
    for (auto &movie: movieVector){
        movie.print();
    }

    return 0;
}