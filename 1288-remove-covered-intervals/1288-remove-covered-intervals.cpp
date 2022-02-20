class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count = 1;
        pair<int,int> prev = make_pair(intervals[0][0],intervals[0][1]);
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][1]>prev.second)
            {
                if(prev.first == intervals[i][0])
                {
                    prev.second  = intervals[i][1];
                }
                else
                {
                    prev.first = intervals[i][0];
                    prev.second = intervals[i][1];
                    count++;
                }
            }
        }
        return count;
    }
};