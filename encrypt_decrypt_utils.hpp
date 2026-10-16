#pragma once
#include <string>


using namespace std;


// encrypt Message
inline string encryptMessage(string rawMessage){
    const int message_length = rawMessage.length();
    string encrypted_message = rawMessage;
    for(char &c: encrypted_message){
        c = c - 5;
    }

        return encrypted_message;
    
}

// decrypt message
inline string decryptMessage(string encryptedMessage){
    string decrypted_message = encryptedMessage;
    for(char &c: decrypted_message){
        c = c + 5;
    }
    return decrypted_message;

    
    
}
