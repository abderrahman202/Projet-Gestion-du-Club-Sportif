#include<iostream>
using namespace std;

int main() {
    int num[3] = {1, 6};
    int n = 3;

    cout << "Les num sont: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << ",";
    }

    cout << "\nTout les valeurs vont changer à 3\n";

    // Corrected loop to input new values

        cin >> num[1];
    

    cout << "Les nouveaux num sont: ";
    for (int i = 0; i < n; i++) {
        cout << num[i] << ",";
    }

    return 0;
}
