// Inverted Right Angled Triangle Pattern
#include <iostream>
using namespace std;
int main(){
cout << "Please enter the size of the pattern you want: ";
 cin >> row;
for (int i = 0; i < row; i++) {
 for (int j = row; j > i; j--) {
      cout << "* ";
       }
       cout << endl;
     }
      return 0;
}
