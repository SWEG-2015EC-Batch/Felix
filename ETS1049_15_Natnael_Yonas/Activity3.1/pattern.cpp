 #include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int num = 0;
    int menu ;
  do{ 
    cout<<"==============================Menu==================================="<<endl;
    cout<<"1) 1 for square"<<endl;
    cout<<"2) 2 for Hallow Square"<<endl;
    cout<<"3) 3 for half Pyramid"<<endl;
    cout<<"4) 4 for inverted half pyramid"<<endl;
    cout<<"5) 5 for hallow half pyramid"<<endl;
    cout<<"6) 6 for full pyramid"<<endl;
    cout<<"7) 7 for inverted full pyramid"<<endl;
    cout<<"8) 8 for hallow full pyramid"<<endl;
    cout<<"9) 9 for square number pattern"<<endl;
    cout<<"10) 10 for Left triangle number pattern"<<endl;
    cout<<"11) 11 for right triangle number pattern"<<endl;
    cout<<"12) 12 for square lowercase alphabet pattern"<<endl;
    cout<<"13) 13 for square uppercase alphabet pattern"<<endl;
    cout<<"14) 14 for Left triangle uppercase alphabet pattern"<<endl;
    cout<<"15) 15 for square number pattern starting from 10"<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"Choose a paterrn from the menu above: ";
    cin>>menu;
    int number = 10;
 switch(menu){

   case 1:  cout << "Square"<<endl;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 7; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
  break;

  case 2: cout <<"Hallow Square" << endl;
  for (int i = 0; i <8; i++) {
    for (int j = 0; j < 7; j++) {
      if (i == 0 || i == 8 - 1 || j == 0 || j == 7 - 1) {
        cout << "*";
      }
        else {
          cout << " ";
        }
        cout<<" ";
      }
    
    cout << "\n";
  }
  break;

  case 3: cout << "Half Pyramid"<<endl;
   for (int i = 0; i < 6; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << "\n";
  }
  break;

  case 4: cout << "Inverted Half Pyramid"<<endl;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6 - i; j++) {
      cout << "*"<<" ";
    }
    cout << "\n";
  }
  break;

  case 5: cout <<"Hallow Pyramid"<<endl;
  for (int i = 1; i <8; i++) {
    for (int j = 0; j < i; j++) {
      if (i != 8) {
        if (j == 0 || j == i - 1|| i==8-1) {
          cout << "*";
        } else {
          cout << " ";
        }
        cout<<" ";
      }
      
    }
    cout << "\n";
  }
  break;

  case 6: cout << "Full Pyramid"<<endl;
                for (int i = 0; i < 6; i++) {
                    for (int j = 0; j < 2 * 6 - 1; j++) {
                        if (j >= 6 - i - 1 && j <= 6 + i - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
  break;

  case 7: cout <<"Inverted Ful Pyramid"<<endl;
  for (int i = 0; i < 6; i++) {
                    for (int j = 0; j < 2 * 6 - 1; j++) {
                        if (j >= i && j < 2 * 6 - i - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
  break;

  case 8: cout<<"Hallow Full Pyramid"<<endl;
  for (int i = 0; i < 6; i++) {
                    for (int j = 0; j < 2 * 6 - 1; j++) {
                        if (j == 6 - i - 1 || j == 6 + i - 1 || i == 6 - 1) {
                            cout << "* ";
                        } else {
                            cout << "  ";
                        }
                    }
                    cout << endl;
  }
  break;

  case 9: cout << "square number pattern"<<endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
     cout<< (j+1);
     cout<<" ";
    }
    cout << "\n";
  }
  break;

  case 10: 
  cout<<"Left triangle number pattern"<<endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (j+1);
      cout<<" ";
    }
    cout << "\n";
   }
   break;

  case 11: cout<<"Right triangle number pattern"<<endl;
   for (int i = 0; i < 5; i++) {
    for (int j = 1; j < 5 - i; j++) {
      cout<<" ";
    }
    for (int k = 0; k <= i; k++) {
      cout << (k+1);
    }
    cout << "\n";
  }
  break;

  case 12: cout<<"square lowercase alphabet pattern"<<endl;
  for (int i = 0; i < 5; i++) {
    int alpha = 97;
    for (int j = 0; j < 5; j++) {
      cout<<(char)(alpha + j)<<" ";
    }

    cout << "\n";
  }
  break;

  case 13: cout<<"square uppercase alphabet pattern"<<endl;
  for (int i = 0; i < 4; i++) {
     int alpha = 65;
    for (int j = 0; j < 6; j++) {
      cout<<(char)(alpha++)<<" ";
    }
    cout << "\n";
  }
  break;

  case 14: cout<<"Left triangle uppercase alphabet pattern"<<endl;
  for (int i = 0; i < 5; i++) {
     int alpha = 65 ;
    for (int j = 0; j <= i; j++) {
      cout << (char)(alpha + j)<<" ";
    }
    cout << "\n";
   }
   break;
   
   case 15: cout<<"square number pattern starting from 10"<<endl;
   for(int i = 0; i < 4; i++){
    for(int j = 0; j < 10; j++){
      cout<<number++<<" ";
    }
    cout<<"\n";
   }
   break;

  default: cout<<"you enter wrong input";
  break;
 }

   cout<<"Enter 0 or any character other than numbers if you want to stop and any number to continue: ";
   cin>>num;
  }while( num != 0);
  return 0;
  
}

