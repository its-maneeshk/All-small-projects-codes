// for single linear array single vector is enough
// for 2D array nested vector is required

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> vct = {
        {1,2,3,5},
        {4,5,6,5},
        {7,8,9,5}
    };

    int row = vct.size();
    int col = vct[0].size();

    cout<<"Number of rows: "<<row<<endl<<"Number of cols: "<<col<<endl;

    cout<<"Using simple loop."<<endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout<<vct[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Using for each loop."<<endl;
    // cannot directly used for each loop 
    for (const auto& row : vct) {   // row is a vector<int>
        for (int c : row) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}