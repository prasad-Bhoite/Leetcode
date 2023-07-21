class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        // int N = matrix.size();
    //      // Traverse each cycle
    // for (int i = 0; i < N / 2; i++) {
    //     for (int j = i; j < N - i - 1; j++) {
 
    //         // Swap elements of each cycle
    //         // in clockwise direction
    //         int temp = matrix[i][j];
    //         matrix[i][j] = matrix[N - 1 - j][i];
    //         matrix[N - 1 - j][i] = matrix[N - 1 - i][N - 1 - j];
    //         matrix[N - 1 - i][N - 1 - j] = matrix[j][N - 1 - i];
    //         matrix[j][N - 1 - i] = temp;
    //     }
    //   }


    //Approach 2 :
    //  // Transpose of matrix
    // for (int i = 0; i < N; i++)
    //     for (int j = i + 1; j < N; j++)
    //         swap(matrix[i][j], matrix[j][i]);
    // // Reverse individual rows
    // for (int i = 0; i < N; i++) 
    // {
    //       int low = 0, high = N - 1;
    //         while (low < high) {
    //         swap(matrix[i][low], matrix[i][high]);
    //         low++;
    //         high--;
    //     }
    // }


    //Practise Approach ...

    int n = matrix.size();
    //Transpose of the given matrix...
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //Reverse the each row of the matrix...
    for(int i=0;i<n;i++)
    {
        int low = 0;
        int high = n-1;

        while(low < high)
        {
            swap(matrix[i][low],matrix[i][high]);
            low++;
            high--;
        } 
    }
    
    }
};