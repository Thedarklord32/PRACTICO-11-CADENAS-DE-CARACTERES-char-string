#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> A = {'k', 'b', 'c', 'a', 'l', 't', 'e', 'q', 'p'};
    vector<char> B = {'a', 'm', 'g', 'p', 'l', 'h', 'k', 'n'};
    vector<char> C;

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                bool existe = false;
                for (int k = 0; k < C.size(); k++) {
                    if (C[k] == A[i]) {
                        existe = true;
                        break;
                    }
                }
                if (!existe) {
                    C.push_back(A[i]);
                }
                break;
            }
        }
    }

    cout << "A = { ";
    for (int i = 0; i < A.size(); i++) {
        cout << A[i];
        if (i < A.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    cout << "B = { ";
    for (int i = 0; i < B.size(); i++) {
        cout << B[i];
        if (i < B.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    cout << "C = { ";
    for (int i = 0; i < C.size(); i++) {
        cout << C[i];
        if (i < C.size() - 1) cout << ", ";
    }
    cout << " }" << endl;

    return 0;
}
