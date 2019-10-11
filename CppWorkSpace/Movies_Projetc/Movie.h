#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>
using namespace std;

class Movie
{
private:
    string name;
    char rating;
    int watched;
public:
    string get_name() const { return name;}
    void increment_watched();
    Movie(string name_val,char rating_val,int watched_val);
    void display();
    ~Movie();
};


#endif
