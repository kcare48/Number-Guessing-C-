#include <iostream>
using namespace std;

int main()
{
    int answer = 5;
    int guess;
    bool notGuessed = true;
    
    
    while (notGuessed) {
        
        cout << "Enter a number to guess the secret answer ";
        cin >> guess;
        
        if (guess == answer) {
            
            cout << "Yes!" << endl;
            notGuessed = false;
        }
        
        if (guess < answer) {
            cout << "Too low!" << endl;
        }
        
        if (guess > answer) {
            cout << "Too high!" << endl;
        }
    }
    
  
}

