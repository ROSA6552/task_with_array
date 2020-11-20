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

    int n, m;
    in >> n;
    in >> m;
    string* photo = new string[n];
    string* negat = new string[n];

    for (int i = 0; i < n; i++) {
        in >> photo[i];
    }

    for (int i = 0; i < n; i++) {
        in >> negat[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (photo[i][j] == negat[i][j])
                count++;

    out << count;

    return 0;
}
