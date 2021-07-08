#include<iostream>
using namespace std;
int br[4];
int main()
{
	string s,ab="ACGT";
	cin>>s;
	for(int i=0;i<s.length();i++) for(int j=0;j<4;j++) if(ab[j]==s[i]) br[j]++;
	for(int j=0;j<4;j++) cout<<br[j]<<' ';
	return 0;
}
