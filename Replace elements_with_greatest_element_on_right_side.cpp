class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int count = 1;
        int len = arr.size();
        int max = -2;
        
        while (count < arr.size()) {
            max = *max_element(arr.begin() + count, arr.end());
            arr[count-1] = max;
            count++;
        }
        arr[len-1] = -1;
        return arr;
        
    }
};
