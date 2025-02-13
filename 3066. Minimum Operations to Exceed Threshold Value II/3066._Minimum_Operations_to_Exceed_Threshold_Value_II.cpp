#include <queue>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        // define a min-heap
        priority_queue<long, vector<long>, greater<long>> pq;

        // push array to heap
        for (int i : nums) {
            pq.push(i);
        }

        int numSteps;

        numSteps = 0;
        while (pq.top() < k) {
            long x, y;
            numSteps++;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();

            pq.push(((min(x, y) * 2) + max(x, y)));
        }

        return numSteps;
    }
};