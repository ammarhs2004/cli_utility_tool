#pragma once
#include <algorithm> 
#include <iterator>
using namespace std;

inline double calculateMean(double numbers[], int numbers_size){
    int sum=0;
    for(int i=0 ;i < numbers_size; i++){
      sum+=numbers[i];
    }
    return (sum/static_cast<double>(numbers_size));
}

inline double calculateMedian(double numbers[], int numbers_size){
    
    // Sort array from lowest to highest
    sort(numbers, numbers + numbers_size);
    // if even array then tke the average of two middle ones
    if(numbers_size % 2 == 0){
       return ((numbers[(numbers_size-1)/2] + numbers[(numbers_size)/2]) / 2.0);
    }
    // if odd array then return middle one
    else{
        return(numbers[(numbers_size-1)/2]);
    }
}

inline double calculateMode(double numbers[], int numbers_size){
    int current_counter = 0;
    int max_count = 1;
    double mode = numbers[0];

    for (int i = 0; i < numbers_size ; i++){
        for(int j = 0; j < numbers_size; j++){
            if(numbers[i] == numbers[j]){
                current_counter += 1;
            }
        }
        if(current_counter > max_count){
            mode = numbers[i];
            max_count = current_counter;
        }
        current_counter = 0;
    }
    return mode;
}