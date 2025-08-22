/*
إِنَّ اللَّهَ وَمَلَائِكَتَهُ يُصَلُّونَ عَلَى النَّبِيِّ ۚ يَا أَيُّهَا الَّذِينَ آمَنُوا صَلُّوا عَلَيْهِ وَسَلِّمُوا تَسْلِيمًا
اللهم صل وسلم وبارك على سيدنا محمد
*/
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
    sort(target.begin(), target.end());
    sort(arr.begin(), arr.end());
    
    return target == arr;
        
    }
};