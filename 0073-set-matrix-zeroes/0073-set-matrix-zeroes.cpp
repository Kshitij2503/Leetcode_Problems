class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int row=matrix.size();
        int column=matrix[0].size();
        vector<int> rows(row,0);
        vector<int> columns(column,0);
        cout<<row<<" "<<column<<" ";
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]==0 && (rows[i]==0 || columns[j]==0)){
                    rows[i]=1;
                    columns[j]=1;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(rows[i]==1){
                for(int j=0;j<column;j++){
                    matrix[i][j]=0;
                }
            }
            else{
                for(int j=0;j<column;j++){
                    if(columns[j]==1){
                        matrix[i][j]=0;
                    }
                }
            }
        }
    }
};