// COMSC 210 | Lab 14: Color Class | Ethan Dilk
#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 10;

class Color{
    // private member attributes 
    private:
        int red;
        int green;
        int blue;
    public:
        // getters
        int getRed() { return red; }
        int getGreen() { return green; }
        int getBlue() {return blue; }
        
        // setters
        void setRed(int r) { red = r; }
        void setBlue(int b) { blue = b; }   
        void setGreen(int g) { green = g; }

        // Color print method
        void print(){
            cout << "Color Output: " << endl;
            cout << setw(WIDTH) << "Red: " << red << endl;
            cout << setw(WIDTH) << "Green: " << green << endl;
            cout << setw(WIDTH) << "Blue: " << blue << endl;
            cout << endl;
        }
};  

int main(){
    // Creating instances of Color objects
    // Using setter methods to store values
    // Using print function to display output to console
    Color yellow;
    yellow.setRed(255);
    yellow.setGreen(255);
    yellow.setBlue(0);
    yellow.print();

    Color purple;
    purple.setRed(128);
    purple.setGreen(0);
    purple.setBlue(128);
    purple.print();

    Color orange;
    orange.setRed(255);
    orange.setGreen(165);
    orange.setBlue(0);
    orange.print();

    return 0;
}