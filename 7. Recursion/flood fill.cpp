#include <iostream>
using namespace std;

#include <vector>

void floodFill(vector<vector<int>> &ques , int r=0, int c = 0 , string ans = ""){

if(r==ques.size()-1 and c==ques[0].size()-1){
    cout<<ans<<endl;
    return;
}

// moving up

if(r>0 and ques[r-1][c]!=-1 and ques[r-1][c]!=1  ){
    ques[r-1][c] = -1;
    floodFill(ques,r-1,c,ans+"t");
    ques[r-1][c] = 0;
}

//moving right 

if(c<ques[0].size()-1 and ques[r][c+1]!=-1 and ques[r][c+1]!=1  ){
    ques[r][c+1] = -1;
    floodFill(ques,r,c+1,ans+"r");
    ques[r][c+1] = 0;
}

//moving down

if(r<ques.size()-1 and ques[r+1][c]!=-1 and ques[r+1][c]!=1  ){
    ques[r+1][c] = -1;
    floodFill(ques,r+1,c,ans+"d");
    ques[r+1][c] = 0;
}


// moving left

if(c>0 and ques[r][c-1]!=-1 and ques[r][c-1]!=1  ){
    ques[r][c-1] = -1;
    floodFill(ques,r,c-1,ans+"l");
    ques[r][c-1] = 0;
}

}

int main(){

int n,m;
cin>>n>>m;
vector <vector<int>> ques;
for(int i = 0; i<n ; i++){
    vector <int> rVec;
    for(int j = 0 ; j<m ;j++){
        int temp; cin>>temp;
        rVec.push_back(temp);
    }
    ques.push_back(rVec);

}


floodFill(ques);

}
