//This is the partial solution only four test cases are paased out of 10 

//help wanted

#include<bits/stdc++.h>
using namespace std;

string solve(string str[],int n) {

	int res=0;
	string temp="";
	unordered_map<string,int>mp;
	for(int i=0;i<n;i++) {
		if(find(str[i])!=mp.end()) {
			mp.insert({str[i],count++});
		} else {
			
		}
	}
	return temp;
}

int main() {
	int n;
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++) {
		cin>>str[i];
	}
	cout<<solve(str,n)<<endl;

	return 0;
}
