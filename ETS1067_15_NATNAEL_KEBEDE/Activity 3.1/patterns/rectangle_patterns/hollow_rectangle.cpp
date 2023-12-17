#include <iostream>
using namespace std;
int main() {
    int width, height;

   cout << "Enter the width of the rectangle: ";
    cin >> width;

   cout << "Enter the height of the rectangle: ";
   cin >> height;

    if (width > 0 && height > 0) {
        cout << "Hollow Rectangle of size " << width << "x" << height << ":" << std::endl;
        
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
                    cout << "* ";
                else
                   cout << "  ";
            }
            cout << endl;
        }
    } else {
        cout << "Width and height should be greater than zero." << std::endl;
    }

    return 0;
}
