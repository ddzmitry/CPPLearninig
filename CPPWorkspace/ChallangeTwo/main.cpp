#include <iostream>
using namespace std;


 int calculate(double price, int rooms, double taxes) {
        
        return ((price * rooms) * taxes) + (price * rooms) ;
}

int main(){
    

    
    
    const double price_small {25.0};
    const double price_big {35.0};
    const double taxes {0.06};
    const int estimate_expiry {30}; // days
    
    
    cout << "Welcome to Cleaning Services\n" << endl;
    cout << "How many big rooms need to be cleaned\n" << endl;
    int big_rooms {0};
    cin >> big_rooms;
    int bigPrice = calculate(price_big,big_rooms,taxes);
    
    cout << "How many small rooms need to be cleaned\n" << endl;
    int small_rooms {0};
    cin >> small_rooms;
    int smallPrice = calculate(price_small,small_rooms,taxes);
    cout << "Price for small rooms is " << smallPrice << endl;
    cout << "===============================" << endl;
    cout << "Price for big rooms is " << bigPrice << endl;
    cout << "===============================" << endl;
    cout << "Total Price will be : " << smallPrice + bigPrice << " $" <<endl;
    return 0;
}
