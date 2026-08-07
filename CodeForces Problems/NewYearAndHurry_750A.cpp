// Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. Limak knows it will take him 5·i minutes to solve the i-th problem.

// Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. He needs k minutes to get there from his house, where he will participate in the contest first.

// How many problems can Limak solve if he wants to make it to the party?



#include<iostream>
using namespace std;


int main() {

    int n, k;
    cin >> n >> k;

    int total_time = 240 - k; // Total time available for solving problems
    int solved_problems = 0;
    int time_spent = 0;

    for (int i = 1; i <= n; i++) {
        int problem_time = 5 * i;
        if (time_spent + problem_time <= total_time) {
            time_spent += problem_time;
            solved_problems++;
        } else {
            break;
        }
    }

    cout << solved_problems << "\n";
    return 0;
}


