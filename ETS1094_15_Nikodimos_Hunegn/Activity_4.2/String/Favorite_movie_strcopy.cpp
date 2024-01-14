#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char movie_1[50] = "Money Heist";
    char movie_2[50];

    strcpy(movie_2, "Breaking Bad");

    cout<<"My two favorite tv programs are: "<<movie_1<<" and "<<movie_2;
}