#include <iostream>
#include "Movies.h"
#include <string>
using namespace std;
void increment_watched(Movies &movies,string name)
{
    if(movies.increment_watched(name))
    {
        cout << name << "watch incremented" <<endl;
    }
    else
    {
        cout << name << "Not found" << endl;
    }
}

void add_movie(Movies &movies, string name, char rating, int watched)
{
    if(movies.add_movie(name,rating,watched))
    {
        cout << name << " added" << endl;
    }
    else
    {
        cout << name << "already exist" << endl;
    }
}


int main(void)
{
    Movies my_movies;
    my_movies.display();
    add_movie(my_movies,"iorn man",'A',10);
    my_movies.display();
    add_movie(my_movies,"captain ameria",'B',9);
    add_movie(my_movies,"avengers",'A',11);
    my_movies.display();
}