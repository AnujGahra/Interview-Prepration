#include<iostream>
using namespace std;


int main() {

    int n;
    
    cin >> n;

    int totalFaces = 0;
    string shape;



    for (int i = 0; i < n; i++) {
        cin >> shape;

        if (shape == "Tetrahedron")
            totalFaces += 4;
        else if (shape == "Cube")
            totalFaces += 6;
        else if (shape == "Octahedron")
            totalFaces += 8;
        else if (shape == "Dodecahedron")
            totalFaces += 12;
        else if (shape == "Icosahedron")
            totalFaces += 20;
    }

    cout << totalFaces << endl;



    // unordered_map<string, int> faces = {
    //     {"Tetrahedron", 4},
    //     {"Cube", 6},
    //     {"Octahedron", 8},
    //     {"Dodecahedron", 12},
    //     {"Icosahedron", 20}
    // };

    // int n, ans = 0;
    // cin >> n;

    // string s;

    // while (n--) {
    //     cin >> s;
    //     ans += faces[s];
    // }

    // cout << ans;



    return 0;
}