#include <iostream>
#include <vector>

using namespace std;

int main() {
    

    int n;
    if (!(cin >> n)) return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int serejaTotal = 0;
    int dimaTotal = 0;
    
    int left = 0;
    int right = n - 1;
    bool serejaTurn = true; 

    while (left <= right) {
        int chosenCard;
        
        if (arr[left] > arr[right]) {
            chosenCard = arr[left];
            left++;
        } else {
            chosenCard = arr[right];
            right--;
        }

        if (serejaTurn) {
            serejaTotal += chosenCard;
        } else {
            dimaTotal += chosenCard;
        }

        serejaTurn = !serejaTurn;
    }

    cout << serejaTotal << " " << dimaTotal << "\n";

    return 0;
}