#include <iostream>

using namespace std;

int main(){
  char answers[10] = {'a','b','c','b','a','d','c','b','d','c'};
   char questions [10] ;
    int score = 0;
     for (int i = 0; i < 10; i++)
    {
        cout<<"please enter the answer for question number"<<i+1<<":";
      cin>>questions[i];
      if (questions[i]==answers[i]){
         score++;   
        }
    }
  cout <<"your total result is "<<score<<"/10"<<endl;
  return 0;
}
