class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix;
        int prev = 1;
         
        for (int r = 1; r <= numRows; r++) {
            vector<int> eachRow;
            eachRow.push_back(1);

            for (int c = 1; c < r; c++) {

                int element = prev * (r - c);
                element /= c;
                eachRow.push_back(element);
                prev = element; 
            }
            matrix.push_back(eachRow);
        }
        return matrix;
    }

};