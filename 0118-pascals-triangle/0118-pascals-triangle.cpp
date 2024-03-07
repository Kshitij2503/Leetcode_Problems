class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result{{1}};
        vector<int> newVec;
        if(numRows==1){
            return result;
        }
        result.push_back({1,1});
        if(numRows==2){
            return result;
        }
        for(int i=2;i<numRows;i++){
        newVec.clear();
        newVec.push_back(1);
        for(int j=0;j<result[i-1].size()-1;j++){
            newVec.push_back(result[i-1][j]+result[i-1][j+1]);
        }     
        newVec.push_back(1);
        result.push_back(newVec);
        }
        return result;
    }
};