#include <iostream>

int main(){
    try{
        throw int();
    }
    catch(const int& a){
        //...
    }
    return 0;
}
