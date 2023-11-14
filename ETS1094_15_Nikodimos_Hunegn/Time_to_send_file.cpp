#include <iostream>
#include <string>

using namespace std;

int main() {
    float size_in_mb, size_in_bytes;
    int trans_time_in_seconds;
    string result;
    
    cout<< "Enter the size of the data in MegaBytes(MB): ";
    cin>>size_in_mb;
    
    size_in_bytes = size_in_mb * 1048576;
    trans_time_in_seconds = size_in_bytes / 960;
    
    while (trans_time_in_seconds >= 60) {
        if (trans_time_in_seconds >= 86400) {
            result += to_string(trans_time_in_seconds / 86400) + " days ";
            trans_time_in_seconds = trans_time_in_seconds % 86400;
        } 
        else if (trans_time_in_seconds >= 3600) {
            result += to_string(trans_time_in_seconds / 3600) + " hours ";
            trans_time_in_seconds = trans_time_in_seconds % 3600;
        } 
        else {
            result += to_string(trans_time_in_seconds / 60) + " minutes ";
            trans_time_in_seconds = trans_time_in_seconds % 60;
        }
    }
    
    cout <<"It takes "<<result <<"and "<< trans_time_in_seconds<<" seconds to send this file";
    
    return 0;
}
