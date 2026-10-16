#pragma once

using namespace std;

inline bool primeChecker(int number){
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}
