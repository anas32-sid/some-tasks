#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> top3Scores(vector<int>& scores) {
        set<int, greater<int>> uniqueScores;

        for(int score : scores) {
            uniqueScores.insert(score);
        }
        vector<int> result;
        int count=0;

        for(int score : uniqueScores) {
            result.push_back(score);
            count++;
            if(count==3)break;
        }
        return result;
    }
};
int main() {
    Solution obj;
    vector<int> scores = {50, 10, 50, 80, 20, 10, 80, 90};
    vector<int> ans = obj.top3Scores(scores);

    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}