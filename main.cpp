#include <iostream>
#include "encrypt_decrypt_utils.hpp"
#include "prime_checker_utils.hpp"
#include "statistical_calc_utils.hpp"
#include "bmi_utils.hpp"
#include <string>
#include <limits>

using namespace std;

int main() {

    int user_choice = 0;
    
    cout << "\n======================================================" << endl;
    cout << "===================CLI Utility Tool===================" << endl;
    cout << "======================================================" << endl;
    while(user_choice != 5){
    cout << "\n\nAvailable Tools: " << endl;
    cout << "1. BMI Calculator" << endl;
    cout << "2. Prime Number Checker" << endl;
    cout << "3. Statistical Calculator" << endl;
    cout << "4. Encryptor/Decryptor" << endl;
    cout << "5. Exit" << endl;
    cout << "\nPlease Enter The Number of the Tool You Need: ";
    cin >> user_choice;
     while (!(cin >> user_choice)) {
    cout << "Invalid input! Please enter a valid number: ";
    
    // Reset and clear bad input
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
    switch(user_choice){
        case 1: {
        // BMI Calcultor
        double weight = 0, height = 0;       
        cout << "\n=================BMI Calculator=================" << endl;
        cout << "Please Enter Your Weight(KG): ";
        cin >> weight;
        cout << "Please Enter Your Height(CM): ";
        cin >> height;
        cout << "Your BMI: " << calculateBMI(weight,height);
        
        break;
        }
        case 2: {
        // Prime Number Checker
        double number_to_check = 0;       
        cout << "\n=================Prime Number Checker=================" << endl;
        cout << "Please Enter The Number to Check: ";
        cin >> number_to_check;
        if(primeChecker(number_to_check)){
          cout << "Hooray! A Prime Number" << endl;
        }
        else{
        cout << "My condolences, this is not a Prime Number" << endl;
        }
        
        break;
    }
      case 3: {
        // Statistical Calculator
        double numbers[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};  
        int amount_of_numbers = 0;
        double number_input = 0;     
        cout << "\n=================Statistical Calculator=================" << endl;
       cout << "Please Enter How many Numbers You Will Need Statistical Data for: ";
       cin >> amount_of_numbers;
        for(int i=0;i<amount_of_numbers;i++){
        cout << "Please Enter Number " << i+1 <<":";
        cin >> number_input;
        numbers[i] = number_input;
        }
         cout << "\nMean: " << calculateMean(numbers, amount_of_numbers) << endl;
        cout << "Median: " << calculateMedian(numbers, amount_of_numbers) << endl;
        cout << "Mode: " << calculateMode(numbers, amount_of_numbers) << endl;
        break;
    }
      case 4: {
        string message = "";
        int tool_choice = 0;
        // Encryptor/Decryptor
        cout << "\n=================Encryptor/Decryptor=================" << endl;
        cout << "1. Encryption" << endl;
        cout << "2. Decryption" << endl;
        cout << "Please Enter the Number of The Service You Need: " << endl;
        cin >> tool_choice;
        switch(tool_choice){
            case 1:{
                cout << "Please Enter The Statment You Need To Encrypt: ";
                cin >> message;
                cout << "The Encryption Key(Keep This Key For Future Use): " << encryptMessage(message) << endl;
                break;
            }
            case 2:{
                cout << "Please Enter The Statment You Need To Decrypt: ";
                cin >> message;
                cout << "The Decrypted Message: " << decryptMessage(message) << endl;
                break;
            }
               
           

        }
        break; 
    }
    case 5:
    cout << "GoodBye!" << endl;
    }

    }
   

    return 0;
}