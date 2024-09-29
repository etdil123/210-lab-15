#include <iostream>
#include <iomanip>

using namespace std;

const int WIDTH = 15;

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
        }
};  

int main(){




    return 0;
}