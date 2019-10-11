#ifndef _MOVIES_H
#define _MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

class Movies
{
private:
    vector<Movie> movies;
public:
     Movies(); //constructor
    ~Movies(); //destructor
    
    bool add_movie(string name, char rating, int watched);
    bool increment_watched(string name);
    void display() const;
};

#endif
