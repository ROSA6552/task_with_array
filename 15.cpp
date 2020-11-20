//#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, count = 0;
    in >> n;
    int** roads = new int* [n];
    for (int i = 0; i < n; i++)
		roads[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            in >> roads[i][j];
            if (j > i && roads[i][j] == 1)
                count++;
        }

    out << count;

    return 0;
}
