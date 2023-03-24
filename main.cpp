#include "Overloaded_symbols.h"
#include "Data_struct.h"
#include <iostream>
#include <unordered_map>
#include <map>
#include <stack>
#include "StrBlob.h"
#include <iterator>
//#include <algorithm>
//#include <numeric>

using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    map<int, int> map;
    vector<string> ans;
    for (int i = 0; i < score.size(); ++i) {
        map[i] = score[i];
    }
    auto bigger = [](auto a, auto b)->bool { return a.second > b.second; };
    sort(map.begin(), map.end(), bigger);
    int i = 0;
    for (auto [key, _] : map) {
        if (i == 0) {
            ans[key] = "Gold Medal";
        }
        else if (i == 1) {
            ans[key] = "Silver Medal";
        }
        else if (i == 2) {
            ans[key] = "Bronze Medal";
        }
        else {
            ans[key] = to_string(i + 1);
        }
    }
    return ans;
}
int main() {
    vector<int> nums = { 5,4,3,2,1 };

    auto ans = findRelativeRanks(nums);

    for (auto i : ans) {
        cout << i << endl;
    }

    return 0;
}