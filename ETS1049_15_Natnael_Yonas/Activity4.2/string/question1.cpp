# include <iostream>
using namespace std;
int main(){
    string line;
    int vowels = 0 ;
    int consonants = 0;
    int spaces = 0;
    cout<<"Type anything you want: ";
    getline(cin,line);
    for(int i = 0; i < line.length(); ++i){
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }else if (line[i]==' ')
        {
            ++spaces;
        }
    }
    cout<<"vowels: "<<vowels<<"\nconsonants: "<<consonants<<"\nWhite space: "<<spaces<<endl;

return 0;

}
