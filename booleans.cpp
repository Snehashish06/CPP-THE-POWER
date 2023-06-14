#include <iostream>

using namespace std;


int bool_play(){
    cout << "\033[H\033[2J";
    bool red_light = false;
    bool yellow_light {false};
    bool green_light (true);

    if(red_light == true){
        cout << "Stop light is \033[3m\033[1m\033[4m\033[5m\033[31mred!!\033[0m";
    }
    else if(yellow_light == true)
        cout << "Get ready to go, it's \033[3m\033[1m\033[4m\033[5m\033[33myellow\033[0m light";
    else if(green_light == true)
        cout << "You're free to go! light is \033[3m\033[1m\033[4m\033[5m\033[32mgreen!\033[0m";
    
    return 0;
}

int main(){
    bool i {false}; // 8 bits
    cout << boolalpha;
    cout << i;
}