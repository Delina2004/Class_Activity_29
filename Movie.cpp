#include "Movie.hpp"
#include <sstream>
using namespace std;

Movie parseMovieString(const string& input) {
    Movie movie;
    stringstream ss(input);

    getline(ss, movie.title, ' ');

    char s;
    ss >> s >> movie.season; 

    char comma;
    ss >> comma >> movie.releaseYear; 
    return movie;
}
