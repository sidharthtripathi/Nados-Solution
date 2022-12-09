#include <iostream>
#include <vector>
using namespace std;
void flood_fill(int a[3][3] , bool visited[3][3] , int sr , int sc , int er , int ec , string psf){
	if(sr<0 or sc<0 or sr==er+1 or sc==ec+1 or visited[sr][sc] or a[sr][sc] == 1)
	return;
	if(sr == er and sc == ec){
		cout<<psf<<endl;
		return;	
	} 

	visited[sr][sc] = true;
	// going down
	flood_fill(a,visited,sr+1,sc , er ,ec , psf + 'd');
	// going up
	flood_fill(a,visited,sr-1,sc,er,ec,psf + 'u');
	//going right
	flood_fill(a,visited,sr,sc+1 , er,ec , psf+'r');
	//going left
	flood_fill(a,visited,sr,sc-1,er,ec,psf+'l');
	visited[sr][sc] = false;


}
int main(){
int a[3][3];
for(int i = 0 ; i<3; i++){
	for(int j = 0 ; j<3 ; j++){
		cin>>a[i][j];
	}
}
bool visited[3][3]{false};
flood_fill(a,visited,0,0,2,2,"");





}