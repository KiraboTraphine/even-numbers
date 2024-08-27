#include <iostream>

using namespace std;

int main(){

    //To return even numbers between two intervals
    int initial;
    int finals;
    //prompt the user onto enter the values of initials and finals
    cout<<"Enter the initial value";
    cin>>initial;

    cout<<"Enter the final value";
    cin>>finals;
    for(int x= initial;x<=finals;x++){
            if (x%2==0){
                    cout<<x<<"\n";
            }
    }

    return 0;
}

