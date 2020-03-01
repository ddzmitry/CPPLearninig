#include <iostream>
using namespace std;
int main(){
    
    const double usd_per_eur {1.19};
    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR : ";
    double euros {0.0};
    cin >> euros;
    double dollars {0.0};
    
    dollars = euros * usd_per_eur;
    cout << euros << " Eur Eq to :" << " dollars" << dollars;
    cout << endl;
    
    
    return 0;
}
