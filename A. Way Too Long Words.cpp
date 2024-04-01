#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char words[100];
        cin >> words;
        if (strlen(words) > 10) {
            cout << words[strlen(words)-strlen(words)] <<strlen(words) - 2<< words[strlen(words) - 1] << endl;
        } else {
            cout << words << endl;
        }
    }
    return 0;
}

