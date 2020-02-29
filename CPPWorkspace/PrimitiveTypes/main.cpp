#include <iostream>
using namespace std;

int main(){
    // Character Types
    char middle_initial {'J'};
    cout << "My initial is " << middle_initial << endl;
    // Integer Types
    unsigned short int exam_score {55};
    cout << "My exam Score is " << exam_score << endl;
 
    int countries_presented  {65};
    cout << "Countries present: " << countries_presented << endl;
    
    long ppl_florida {20610000};
    cout << "There are about " << ppl_florida << " people in Florida" << endl;
    
    long long ppl_on_earth {7'600'000'000};
    cout << "Ppl on Earth: " << ppl_on_earth << endl;
 
    // Floats 
    float car_payment {401.23};
    double pi {3.14};
    long double large_amount {2.7e120};
    cout << car_payment << " " << pi << " " << large_amount << endl;
 
    // Boolean type 
    
    bool game_over {false};
    string ternary = game_over ? "True" : "False";
    cout << "The game value is : " << ternary << endl;
    
    // Overwlow example 
    
    short val1 {30000};
    short val2 {1000};
    long  sum {val1 * val2};
    
    cout << "The sum of values " << val1 * val2 << endl;
    
    
}
