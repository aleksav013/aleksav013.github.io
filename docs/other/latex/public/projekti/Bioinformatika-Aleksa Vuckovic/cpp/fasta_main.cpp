#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#include"fasta.cpp"
int main()
{
	vector<pair<string,string>> a;
	if(fasta(a,"fasta.txt")) return 1;
	for(auto p:a) cout<<p.first<<endl<<p.second<<endl;
	return 0;
}
