#include <iostream>
#include <string>

using namespace std;

bool counted(string to_be_checked, string counted_letters){
    int counted = 0;
    for(int i = 0; i < counted_letters.length(); i++){
        if(to_be_checked == to_string(counted_letters[i])){
            counted++;
        }
    }
    return (counted == 0);    
}

int counter(string digit, string number){
    int count = 0;
    for(int i = 0; i < number.length(); i++){
        if(to_string(number[i]) == digit){
            count++;
        }
    }
    return count;
}

int main(){
    string cou = "", num;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    cout << "---------------------" << endl;
    cout << "| Digit\t| Frequency |" << endl;
    cout << "---------------------" << endl;
    for(int i = 0; i < num.length(); i++){
        int n = counted(to_string(num[i]) , cou);
        if(n == 1){
            int c = counter(to_string(num[i]), num);
            cout<<"    "<<num[i]<<"\t      "<<c<<endl;
            cout << "---------------------" << endl;
            cou = cou + num[i];
        }
    }

}
