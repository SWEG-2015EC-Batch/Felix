#include <iostream>
using namespace std;
int main()
{
    string text = "";
    int largest = 0, lowest = 2, i_larges[text.size()] = {}, i_lows[text.size()] = {}, larges = 0, lows = 0; 

    cout<<"Enter the text: ";
    getline(cin,text);

    int frequency[text.size()] = {};

    for(int i = 0; i < text.size(); i++){
        int counter = 0;
        for(int j = 0; j < text.size(); j++){
            if(text[i] == text[j]){
                counter++;
            }
        }
        frequency[i] = counter;
        if(counter > largest){
            largest = counter;
        }

        if(counter < lowest){
            lowest = counter;
        }
    }

    for(int i = 0; i < text.size(); i++){
        if(largest == frequency[i]){
            i_larges[larges] = i;
            larges++;
        }
        else if(lowest == frequency[i]){
            i_lows[lows] = i;
            lows++;
        }
    }

    cout<<"Largest frequency: ";
    for(int i = 0; i < larges; i++){
        cout<<text[i_larges[i]]<<", ";
    };
    cout<<"\nLowest frequency: ";
    for(int i = 0; i < lows; i++){
        cout<<text[i_lows[i]]<<", ";
    };
return 0;
}
