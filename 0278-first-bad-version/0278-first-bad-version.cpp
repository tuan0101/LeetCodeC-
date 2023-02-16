// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // GG BBB
        
        // template for finding most left Bad
        int left = 1, right = n;
        while(left < right){
            int mid = left + (right-left)/2;
            if(isBadVersion(mid)){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }   
};

// 1, 2, 3, 4, 5
// g, g, g, b, b

// 1, 2
// b, b
// mid = 1;
// left=1, righ=1 => infinite loop when using while(left<=right){}
 