#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#include"fasta.cpp"
int main()
{
	vector<pair<string,string>> a;
	if(fasta(a,"rna_splicing.txt")) return 1;
	for(auto &str:a) for(int i=0;i<str.second.length();i++) 
		if(str.second[i]=='T') str.second[i]='U';
	string s=a[0].second;
	a.erase(a.begin());
	for(auto str:a) s.erase(s.find(str.second),str.second.length());
	map<string,char> mapa;
	#include"rna_splicing.h"
	for(int i=0;i<s.length();i+=3)
	{
		string s1(s.begin()+i,s.begin()+i+3);
		cout<<mapa[s1];
	}
	return 0;
}
