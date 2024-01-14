#include <iostream>

using namespace std;

int main()
{
    char answers[10] = {'a','b','c','b','a','d','c','b','d','c'};
    char questions [10] = {};
    int score = 0;

    for(int i = 0; i < 10; i++){
        cout<<"Answer for question #"<<i + 1<<": ";
        cin>>questions[i];

        if(questions[i] == answers[i]){
            score++;
        }

    }

    cout<<"------------------ ";
    for(int i = 0; i < 10; i++){
        cout<<"----- ";
    }
    cout<<"---------\n| Your Answer     |  ";
    for(int i = 0; i < 10; i++){
        cout<<questions[i]<<"  |  ";
    }
    cout<<"Score \n------------------ ";
    for(int i = 0; i < 10; i++){
        cout<<"----- ";
    }
    cout<<"---------\n| Correct Answer  |  ";
    for(int i = 0; i < 10; i++){
        cout<<answers[i]<<"  |  ";
    }
    cout<<"  "<<score<<"\n------------------ ";
    for(int i = 0; i < 10; i++){
        cout<<"----- ";
    }
    cout<<"---------";
    return 0;
    
}