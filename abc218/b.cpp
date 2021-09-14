#include <iostream>
#include <string>
using namespace std;
int main(void){
    for(int i=0;i<26;i++){
        int num;
        cin >> num;
        cout << (char)(97+(num-1));
    }
    cout << endl;
    return 0;
}