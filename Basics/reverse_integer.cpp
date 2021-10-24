#include <bits/stdc++.h>

using namespace std;

int32_t reverse(int32_t x){
    bool negflag = 0;
    if (x > INT_MAX || x < INT_MIN +1){
        return 0;
    }
    if (x<0){
        //To handle the negative numbers
        x = -x;
        negflag = 1;
    }
    int32_t reverse, pre_reverse = 0;
    while (x!=0){
        int curr_digit = x%10;
        if (reverse > INT_MAX/10){
            return 0;
        }
        else{
            reverse = reverse*10 + curr_digit;
            if ((reverse-curr_digit)/10 != pre_reverse){
                //To check if the int is overflowing
                cout << "Warning the integer overflowed" << endl;
                return 0;
            }
            pre_reverse = reverse;
            x = x/10;
        }        
    }
    return (negflag == 1) ? -reverse:reverse;   
}

int main(){
    int32_t number, revnum;
    cout << "Enter number to be reversed"<< endl;
    cin >> number;
    revnum = reverse(number);
    if (!(revnum != 0) != !(number == 0)){
        cout << "The reversed number is " << revnum << endl;      
    }
    else{
        cout << "Number is out of scope and cannot be reversed" << endl;  
    }

}