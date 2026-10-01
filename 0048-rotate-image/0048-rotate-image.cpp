class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // THIS IS A MESSY CUSTOM ENGINE (OPTIMAL SOLUTION)
        // TC: O(n²) SC: O(1)
        // FUCKING SPENT 5 HOURS ON THIS
        int rowSize = matrix.size();
        int columnSize = matrix[0].size();

        int left = 0;
        int right = rowSize - 1;
        int top = 0;
        int bottom = columnSize - 1;

        for (int k = 0; k < rowSize/2; k++) {

            // CORNERS
            int prevStore = matrix[k][k];

            int temp = matrix[top][right];
            matrix[top][right] = prevStore;
            prevStore = temp;

            temp = matrix[bottom][right];
            matrix[bottom][right] = prevStore;
            prevStore = temp;

            temp = matrix[bottom][left];
            matrix[bottom][left] = prevStore;
            prevStore = temp;

            temp = matrix[top][left];
            matrix[top][left] = prevStore;
            prevStore = temp;

            int prev;

            for (int i = left + 1; i < right; i++) {

                prev = matrix[top][i];
                // TOP
                int next = (i + right) % right;
                int row = next;
                int column = right;
                int temp = matrix[row][column];
                matrix[row][column] = prev;
                prev = temp;

                // RIGHT
                next = (row + bottom) % bottom;
                row = bottom;
                column = columnSize - 1 - next;
                temp = matrix[row][column];
                matrix[row][column] = prev;
                prev = temp;

                // BOTTOM
                next = (column + right) % right;
                row = next;
                column = left;
                temp = matrix[row][column];
                matrix[row][column] = prev;
                prev = temp;

                // LEFT
                next = (row + right) % right;
                row = column;
                column = columnSize - next - 1;
                temp =  matrix[row][column];
                matrix[row][column] = prev;
                prev = temp;
            }

            left ++;
            right --;
            top++;
            bottom--;
        }
    }
};