#include "Movie.h"
#include <iostream>
using namespace std;
Movie::Movie (string name_val,char rating_val,int watched_val)
:name{name_val}, rating{rating_val}, watched{watched_val}{
    
}

Movie::~Movie()
{
    
}

void Movie::increment_watched()
{
    watched = watched+1;
}

void Movie::display()
{
    cout <<"Name :"<< name << endl;
    cout <<"Rating :"<< rating << endl;
    cout <<"Watched :"<< watched << endl;
}
