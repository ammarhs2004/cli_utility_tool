#pragma once
#include <cmath>
using namespace std;

inline float calculateBMI(float weight,float height){
   return weight/pow(height/100,2.0);
}
