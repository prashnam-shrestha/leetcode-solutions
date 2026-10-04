class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int topLeft = 1;
        int rowSize = matrix.size();
        int columnSize = matrix[0].size();
        
        if (columnSize <= 1) {

            for (int k = 0; k < rowSize; k++) {
                if (matrix[k][0] == 0) {
                    topLeft = 0;
                    break;
                }
            }
            if (topLeft == 0) {
                for (int k = 0; k < rowSize; k++) { matrix[k][0] = 0; }
            }


            return;
        }
        if (rowSize <= 1) {

            for (int k = 0; k < columnSize; k++) {
                if (matrix[0][k] == 0) {
                    topLeft = 0;
                    break;
                }
            }
            if (topLeft == 0) {
                for (int k = 0; k < columnSize; k++) { matrix[0][k] = 0; }
            }

        }

        for (int i = 0; i < rowSize; i++) {

            for (int k = 0; k < columnSize; k++) {
                if (matrix[i][k] == 0) {

                    matrix[0][k] = 0;

                    if (i != 0) {
                        matrix[i][0] = 0;
                    } 
                    else {
                        topLeft = 0;
                    };
                }
            }
        }
        
        for (int i = 1; i < rowSize; i++) {
            for (int k = 1; k < columnSize; k++) {
                if (matrix[0][k] == 0 || matrix[i][0] == 0) {
                    matrix[i][k] = 0;
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int i = 1; i < rowSize; i++) {
                matrix[i][0] = 0;
            }
        }
        if (topLeft == 0) {
            for (int i = 0; i < columnSize; i++) {
                matrix[0][i] = 0;
            }
        }

    }
};