#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int score;
    cin >> score; 

    int max_score = score;
    int min_score = score;
    int amazing_count = 0;

    for (int i = 1; i < n; i++) {
        cin >> score;
        
        if (score > max_score) {
            amazing_count++;
            max_score = score; 
        } 
        else if (score < min_score) {
            amazing_count++;
            min_score = score; 
        }
    }

    cout << amazing_count << "\n";
    return 0;
}