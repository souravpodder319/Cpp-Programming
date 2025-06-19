#include <iostream>
using namespace std;
int main (){
    int dice=1;
    while(dice<=6){
        if(dice<6){
            cout<<"Not Six\n";
        }
        else{
            cout<<"It's Six\n";
        }
        dice+=1;
    }
    return 0;
}