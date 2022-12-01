#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;
#define m 1024



int main()
{


	string frases,linea,conve;
	char frasec[m];
	cout << "Input: ";
	//cin >> frases;
	getline(cin, frases);
	strcpy(frasec, frases.c_str());
	ifstream tabella;
	tabella.open("table.txt", ios::in);
	if (!tabella)
		exit(1);
	for (int i = 0; i < frases.length(); i++)
	{

		int current = 0;
		while (getline(tabella, linea))
		{
			/*if (current > 127)
			{
				cout << " ";
				break;
			}*/
			if (current == (int)frasec[i])
			{
				cout<< linea.substr(0, 6)<<" ";
				break;
			}
			current++;
		}
		tabella.clear();
		tabella.seekg(0);
		
	}
	cout << endl;
	#ifdef _WIN32
		system("pause");
	#endif
exit (0);
}
