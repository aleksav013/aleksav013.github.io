#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#include"fasta.cpp"
bool sortby(pair<string,double> &a,pair<string,double> &b)
{
	return a.second>b.second;
}
int main()
{
	vector<pair<string,string>> a;
	if(fasta(a,"rosalind_gc.txt")) return 1;
	vector<pair<string,double>> b;
	for(auto p:a)
	{
		int br=0;
		for(int i=0;i<p.second.length();i++) 
			if(p.second[i]=='G'||p.second[i]=='C') br++;
		b.pb({p.first,(double)100*br/p.second.length()});
	}
	sort(b.begin(),b.end(),sortby);
	//for(auto p:b) cout<<p.first<<endl<<fixed<<setprecision(6)<<p.second<<endl;
	cout<<b[0].first<<endl<<fixed<<setprecision(6)<<b[0].second<<endl;
	return 0;
}
