#include <iostream>

using namespace std;
int main() {
    cout << "Enter the number ";
    int n;
    cin >> n;
    cout << "Enter the precision ";
    int p;
    cin >> p;
    
    if(n == 1){ // If n is 1 square root is 1.
        cout << 1.0;
    }
    
    float inc = 1.0; // To store the increment value.
    
    for (int i = 0; i < p; i++){ // Divide by 10 precision number of times.
        inc = inc / 10;
    }
    
    for (float i = inc; i < n; i = i + inc) {
        if (i * i >= n){ // If i*i exceeds n we are near the square root.
            cout << i;
        }
    }
}
