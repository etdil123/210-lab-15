// COMSC 210 | Lab 15: Movie Class | Ethan Dilk
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

const int WIDTH = 10;

class Movie {
    private:
        string title;
        string screenwriter;
        string releaseYear;

    public:
        // getters
        string getTitle() { return title; }
        string getScreenwriter() {return screenwriter; }
        string getReleaseYear() {return releaseYear; }

        // setters
        void setTitle(string title) {this->title = title;}
        void setScreenwriter(string screenwriter) {this->screenwriter = screenwriter;}
        void setReleaseYear(string releaseYear) {this->releaseYear = releaseYear; } 

        // print method to display object attributes
        void print(){
            cout << "Movie: " << title << endl;
            cout << setw(WIDTH) << "Year Released: " << releaseYear << endl;
            cout << setw(WIDTH) << "Screenwriter: " << screenwriter << endl;
        }

};

int main(){



    return 0;
}