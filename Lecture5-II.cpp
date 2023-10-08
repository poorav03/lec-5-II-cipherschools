// Lecture 5 II - Arrays Pt 2

#include <iostream>
using namespace std;

int main(){
    // code1
    int a[5];
    cout << "Give 5 integer as input : " << endl;
    for(int i=0; i<5;i++){
        cin >> a[i];
    }

    cout << "The given 5 integer are : " << endl;
    for(int i=0; i<5;i++){
        cout << a[i] << " ";
    }

    cout << endl << endl;
    // code2
    int a1[9];
    cout << "Give 10 integer as input : " << endl;
    for(int i=0; i<10;i++){
        cin >> a1[i];
    }

    cout << "The given 10 integer are : " << endl;
    for(int i=9; i>=0;i--){
        cout << a1[i] << " ";
    }
    return 0;
}