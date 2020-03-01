#include <iostream>
#include <vector>   // don't forget this in order to use vectors


using namespace std;


int main(){
    
//    vector <char> vowels;         // empty 
//    vector <char> vowels (5);      // 5 initialized to zero 
    vector <char> vowels {'a' , 'e', 'i', 'o', 'u'};
    for (int i =0; i < vowels.size(); i++){
        
        cout << "INDEX " <<  i << " " << "VALUE " <<vowels.at(i) << endl;
    }
    
    vector <vector<int>> movie_ratings 
    {   
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
     cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    return 0;
    
}
