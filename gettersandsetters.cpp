#include <iostream>

using namespace std;
class Movie {
    private:
        string rating; // code inside movie class can access rating
    public:
        string title;
        string director;

        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }
    void setRating(string aRating) {
        if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
        {
            rating = aRating;
        }
        else {
            rating = "NR";
        }
    }
    string getRating() {
        return rating;
    }
};
int main() {
    Movie avengers("The Avengers", "Joss Wheldon", "NR");
    // cout << avengers.rating; -- cannot be done anymore
    avengers.setRating("PG-13");
    cout << avengers.getRating();
    return 0;
}