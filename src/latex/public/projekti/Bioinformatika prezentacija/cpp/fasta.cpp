bool fasta(vector<pair<string,string>> &a,string filename)
{
	ifstream ulaz;
	ulaz.open(filename);
	if(!ulaz)
	{
		cout<<"Doslo je do greske prilikom otvaranja fajla";
		return 1;
	}
	string pom;
	ulaz>>pom;
	while(!ulaz.eof())
	{
		string s0=pom.erase(0,1),s1,s2;
		ulaz>>s1;
		while(!ulaz.eof()&&s1[0]!='>')
		{
			s2.append(s1);
			ulaz>>s1;
		}
		pom=s1;
		a.pb({s0,s2});
	}
	return 0;
}
