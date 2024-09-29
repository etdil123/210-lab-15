#include <iostream>
#include <iomanip>

using namespace std;

const int WIDTH = 5;

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
        void colorPrint(){
            cout << setw(WIDTH) << "Red: " << red << endl;
            cout << setw(WIDTH) << "Green: " << green << endl;
            cout << setw(WIDTH) << "Blue: " << blue << endl;
            cout << endl;
        }
};  

int main(){

    Color yellow;
    yellow.setRed(255);
    yellow.setGreen(255);
    yellow.setBlue(0);
    yellow.colorPrint();

    Color purple;
    purple.setRed(128);
    purple.setGreen(0);
    purple.setBlue(128);
    purple.colorPrint();

    Color orange;
    orange.setRed(255);
    orange.setGreen(165);
    orange.setBlue(0);
    orange.colorPrint();

    return 0;
}