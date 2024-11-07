#include <iostream>
#include "Movie.hpp"
using namespace std;

int main() {
    string input = "24 s2,2014";
    Movie movie = parseMovieString(input);

    cout << "Title: " << movie.title <<endl;
    cout << "Season: " << movie.season <<endl;
    cout << "Release Year: " << movie.releaseYear <<endl;

    return 0;
}
