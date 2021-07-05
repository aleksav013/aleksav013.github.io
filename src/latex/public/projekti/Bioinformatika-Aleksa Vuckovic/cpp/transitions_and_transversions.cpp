#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#include"fasta.cpp"
int main()
{
	vector<pair<string,string>> a;
	if(fasta(a,"tranzicije_i_tranverzije.txt")) return 1;
	string s1=a[0].second,s2=a[1].second;
	int br1=0,br2=0;
	for(int i=0;i<s1.length();i++) if(s1[i]!=s2[i])
	{
		int x=(s1[i]=='A')+(s1[i]=='G'),y=(s2[i]=='C')+(s2[i]=='T');
		if(x+y==2||x+y==0) br2++;
		else br1++;
	}
	cout<<(float)br1/br2;
	return 0;
}
