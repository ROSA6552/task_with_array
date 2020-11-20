#include <bits/stdc++.h>

using namespace std;

//#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n = 4, m = 4;
    string* pict = new string[n];

    for (int i = 0; i < n; i++) {
        in >> pict[i];
    }

    bool flag = false;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++)
            if (pict[i][j] == pict[i + 1][j] && pict[i][j] == pict[i][j + 1] && pict[i][j] == pict[i + 1][j + 1]) {
                flag = true;
                break;
            }

    if (!flag)
        out << "Yes";
    else
        out << "No";

    return 0;
}
