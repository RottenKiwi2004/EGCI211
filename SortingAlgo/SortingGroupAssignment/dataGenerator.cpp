#include <bits/stdc++.h>
#define N 100000
using namespace std;

int main()
{
	vector <int> v;
	
	FILE * fp = fopen("data.txt", "w");
	for(int i=0;i<N;i++) v.push_back(rand());
	for(int i=0;i<N;i++)
		fprintf(fp, "%d ", v[i]);
	fclose(fp);
	sort(v.begin(), v.end());
	FILE * fp1 = fopen("dataDescending.txt", "w");
	FILE * fp2 = fopen("dataAscending.txt", "w");
	for(int i=0;i<N;i++)
		fprintf(fp2, "%d ", v[i]);
	for(int i=N-1;i>=0;i--)
		fprintf(fp1, "%d ", v[i]);
	fclose(fp1);
	fclose(fp2);
}