#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string hash;
	getline(cin,hash);
	hash += " ";
	int point=0;
	int check=0;
	int size = hash.size();
	for(point=0;point<size;point++)
	{
		if(hash.at(point)=='#')
		{
			check=1;
			continue;
		}
		if(check==1)
		{
			cout<<"'";
			while(point<=size-1 && hash.at(point)!=' '&& hash.at(point)!='#')
			{
				cout<<hash.at(point);
				point++;
			}	
			check=0;
			cout<<"'";
			if(point<size-2)
				cout<<",";

			continue;
		}
	}
	cout<<endl;
	return 0;
}
