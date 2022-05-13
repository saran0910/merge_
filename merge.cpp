class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        for(int i=nums1.size()-1;i>m-1;i--){
    if(nums1[i]>0){
        break;
    }
    else if(nums1[i]==0){
        nums1.pop_back();
    }
}
for(int i=0;i<nums2.size();i++){
    nums1.push_back(nums2[i]);
}
sort(nums1.begin(),nums1.end());      
}

        
              
    
};