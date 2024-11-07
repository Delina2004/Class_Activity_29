# Movie Parser

This project demonstrates a C++ program that parses a formatted string representing a movie's title, season, and release year into a `Movie` structure. The program is structured into separate files for modularity, with a header (`.hpp`), implementation (`.cpp`), and main program (`main.cpp`).

## Files

- **Movie.hpp**: Header file that defines the `Movie` structure and declares the `parseMovieString` function.
- **Movie.cpp**: Implementation file that defines the `parseMovieString` function, which parses a string into a `Movie` structure.
- **main.cpp**: Main program file that uses the `parseMovieString` function to parse a string and display the parsed movie information.

## Functionality

The `parseMovieString` function takes a string in the format:

For example, `"24 s2,2014"`, where:
- **Title** is `"24"`.
- **Season** is `2`.
- **Release Year** is `2014`.

The function splits this string and assigns the values to a `Movie` structure, which contains:
- `title` (string): The title of the movie or series.
- `season` (int): The season number.
- `releaseYear` (int): The release year of the season.

### Example Output

For the input string `"24 s2,2014"`, the program output will be:
 Project Structure
This project is organized as follows:

Movie.hpp: Contains the Movie structure definition and parseMovieString function declaration.
Movie.cpp: Provides the implementation of the parseMovieString function.
main.cpp: Demonstrates the use of the parseMovieString function.
