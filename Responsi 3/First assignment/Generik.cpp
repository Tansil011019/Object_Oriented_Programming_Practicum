#include <iostream>
using namespace std;

template <class T>
void func(T a, T b) {
    cout << "Masukan Anda: " << a << " dan " << b << ", memiliki tipe yang sama" << endl;
}


template <class T1,class T2>
void func(T1 a, T2 b) {    
    cout << "Masukan Anda: " << a << " dan " << b << ", mungkin memiliki tipe yang berbeda" << endl;

}

template<>
void func(char a, int b) {
    for (int i = 0; i < b; i++) {
        cout << a << endl;
    }
}

// Ini sama tapi 0, Heran

// #include <iostream>
// using namespace std;

// template <class T>
// void func(T param1, T param2){
//     cout << "Masukkan Anda: " << param1 << " dan " << param2 << ", memiliki tipe yang sama" << endl;
// }

// template <class T1, class T2>
// void func(T1 param1, T2 param2){
//     cout << "Masukkan Anda: " << param1 << " dan " << param2 << ", mungkin memiliki tipe yang berbeda" << endl;
// }

// template<>
// void func(char c, int n){
//     for(int i= 0; i< n; i++){
//         cout << c << endl;
//     }
// }