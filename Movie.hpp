#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>
using namespace std;

struct Movie {
    string title;
    int season;
    int releaseYear;
};

Movie parseMovieString(const string& input);

#endif 
