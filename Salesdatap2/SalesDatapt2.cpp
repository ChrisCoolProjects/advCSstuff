#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

class SALESREC
{
   public:
	char     date[10];
	char     region[10];
	char     rep[10];
	char     item[10];
	int      units;
	float    unitCost;
	float    Total;
};
void simpleSortTotal(SALESREC* s[] , int c)
{
	for (int i=0; i < c; i++)
	{
	for (int j=i; j < c; j++)
		{
		cout << j << " The code is in the sort method" << endl;	
		if (s[j]->Total < s[i]->Total)
			{
			SALESREC* temp = new SALESREC[c];
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			delete[] temp;
			}
		}
	}
}
//the blank should be a pointer array
void simpleSortTotal(SALESREC* s[], int c);

int main(){
	ifstream infile;
	int i=0;
	char cNum[10] ;
	SALESREC* salesArr[40];
	int   salesArrayCount;
    float un;
	SALESREC* s[40];
	infile.open("SalesDataP2.csv", ifstream::in);
	cout << "The csv is being opened" << endl;

if (infile.is_open())
{
int   c=0;
   while (infile.good())
	{
	infile.getline(salesArr[c]->date, 256, ',');
	infile.getline(salesArr[c]->region, 256, ',');
	infile.getline(salesArr[c]->rep, 256, ',');
	infile.getline(salesArr[c]->item, 256, ',');
	infile.getline(cNum, 256, ',');
	salesArr[c]->units = atoi(cNum);
	un = atof(cNum);
	infile.getline(cNum, 256, '\n');
	salesArr[c]->unitCost = atof(cNum);
	salesArr[c]->Total = atof(cNum);
	salesArr[c]->Total = salesArr[c]->unitCost * un;
	i++;
	c++;
	}
salesArrayCount = c-1;
infile.close();
}
else
	{
	cout << "Error opening file";
	}

	// Initialize the sort array pointers
for (int i=0; i < salesArrayCount; i++)
{
	

		simpleSortTotal (salesArr, salesArrayCount);
		cout << i << "This is after the sort method is called." << endl;

}
   for (int i=0; i < salesArrayCount; i++)
   {
		cout << "Record: " << s[i]->date <<", " << s[i]->region << ", " << s[i]->rep << ", " << s[i]->item << ", " << s[i]->units << ", " << s[i]->unitCost << ", " << s[i]->Total << endl;
   }
   cout << "This is working for now" << endl;

}
 
// arguments will be an array of pointers and a count

