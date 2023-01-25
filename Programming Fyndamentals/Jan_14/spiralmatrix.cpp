#include<vector>

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        int fr = 0;
        int fc = 0;
        int lr = matrix.size() - 1;
        int lc = matrix[0].size() - 1;
        std::vector<int> result;
        while(result.size() < matrix.size()*matrix[0].size()) {
            for(int j = fc; j <= lc; j++) {
                
                result.push_back(matrix[fr][j]);
            }
            fr++;
            if(result.size() == matrix.size()*matrix[0].size()) break;
            for(int j = fr; j <= lr; j++) {
                
                result.push_back(matrix[j][lc]);
            }
            lc--;
            if(result.size() == matrix.size()*matrix[0].size()) break;
            for(int j = lc; j >= fc; j--) {
                //std::cout<<matrix[lr][j]<<" ";
                result.push_back(matrix[lr][j]);
            }
            lr--;
            if(result.size() == matrix.size()*matrix[0].size()) break;
            for(int j = lr; j >= fr; j--) {
                
                result.push_back(matrix[j][fc]);
            }
            fc++;
        }
        return result;
    }