#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,double> mapa;
	#include"protein_mass.h"
	string s;
	cin>>s;
	double sum=0;
	for(int i=0;i<s.length();i++)
	{
		string s1(1,s[i]);
		sum+=mapa[s1];
	}
	cout<<fixed<<setprecision(6)<<sum;
	return 0;
}
