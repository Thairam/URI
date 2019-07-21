#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n--) {
        string s; 
		int a = 0, cont = 0, tam;

        cin >> s; 
		tam = s.size();
        for (int i = 0; i < tam; i++) {
            if (s[i] == '<') {
                a++;
            } else if (s[i] == '>' && a > 0) {
                cont++; a--;
            }
        }

        cout << cont << endl;
    }

    return 0;
}
