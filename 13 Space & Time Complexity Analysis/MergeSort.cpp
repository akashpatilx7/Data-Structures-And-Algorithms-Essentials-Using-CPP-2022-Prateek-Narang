#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>

using namespace std;

int main(){
//	Array Size : Inputted From The User
	int n;
	cin>>n;
	
//	Declaring The Array 
	vector<int>arr(n,0);
	
//	Reverse Initialising The Array
	for(int i=0;i<n;i++){
		arr[i]=n-i;
	}
	
  auto start_time=clock();
	sort(arr.begin(),arr.end());
	auto end_time=clock();
	
	cout<<end_time-start_time<<endl;
	
	return 0;
}
