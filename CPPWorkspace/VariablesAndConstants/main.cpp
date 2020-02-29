#include <iostream>
using namespace std;
int main(){
    
    int room_width {0};
    int room_lengh {0};
    string name;
    
    cout << "Enter Width: ";
    cin >> room_width;    
    cout << "Enter room Length: ";
    cin >> room_lengh;
    cout << "Area is: " << room_width * room_lengh << " sq f";
    
    return 0;
}
