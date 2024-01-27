# include <iostream>
# include <iomanip>
using namespace std;
int main(){
  const int MAX_BUFFER_SIZE = 1000;
  cout<<"\n"<<setfill('*')<<setw(35)<<"FELIX PATTERN"<<setw(30)<<""<<endl;
  char userInput;
  
 do{
  cout<<"\nplesae enter an integer or a letter:  ";
  cin>>userInput;
  cout<<endl;
  bool letter = isalpha(userInput); 
  if((userInput >= '1' && userInput <= '9') || letter){
  for (int i = 0; i < 19; i++) {
    int k = {9-i}; 
    int l = {1};
    int m = {i-9};
    for (int j = 0; j < 19; j++) {
        if(i<=9){
          if(j >= i && j<=9){
            cout<<k;
            k--;
          }else{
            cout<<" ";
          }

          if(j < 19-i && j>9){
            cout<<l;
            l++;
          }else if(j==9){
        
          }else{
            cout<<" ";
          }
                
        }if(i>9){

          if(j > 17-i && j<=9){
            cout<<m;
            m--;
          }else{
            cout<<" ";
          }

          if(j <= i && j > 9){
            cout<<l;
            l++;
          }else if(j==9){
        
          }else{
            cout<<" ";
          }
        }
    }

    cout<<endl;
  }
  }else{
    cout<<"\"Error : please enter an interger greater than 0 or a letter.\"\n"<<endl;
  }
  cin.ignore(MAX_BUFFER_SIZE,'\n');
  }while(userInput < '1' || (!isdigit(userInput) && !isalpha(userInput)));

  cout<<"\n"<<setw(65)<<""<<endl;
  return 0;
}
