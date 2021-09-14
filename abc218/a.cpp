#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n;
    string input;
    cin >> n >> input;
    cout << ((input.at(n-1)=='o')?"Yes":"No") << endl;
}