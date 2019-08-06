#include<bits/stdc++.h>
using namespace std;
long long t,cnt;
string s;

int main(){

	cin>>t;
	while(t--){
		cin>>s;
		cnt=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='1')
				cnt++;
		}

		if(cnt%2==1)
			cout<<"WIN"<<endl;
		else
			cout<<"LOSE"<<endl;
	}

	return 0;
}
