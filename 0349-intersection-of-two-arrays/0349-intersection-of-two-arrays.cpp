class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>bhondu;
        bhondu.reserve(min(nums1.size(), nums2.size()));
        set_intersection(
            nums1.begin(),nums1.end(),
            nums2.begin(),nums2.end(),
            back_inserter(bhondu)
        );
        bhondu.erase(unique(bhondu.begin(), bhondu.end()), bhondu.end());
        return bhondu;
    }
};