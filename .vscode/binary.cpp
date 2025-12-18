#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
class timeVal{
int hh, mm, ss;
char ampm[3];
public:
void setdata(int h, int m, int s, const char* half)
{
hh = h;
mm = m;
ss = s;
strcpy(ampm, half);
}
void showdata()
{
cout << "\nThe Time is : ";
cout << setfill('0') << setw(2) << hh << ":";
cout << setfill('0') << setw(2) << mm << ":";
cout << setfill('0') << setw(2) << ss << " ";
cout << ampm << endl << endl;
}
};
int main()
{
timeVal writeObj, readObj;
int hh, mm, ss;
char ampm[3];
cout << "Enter Hours : ";
cin >> hh;
cout << "Enter Minutes : ";
cin >> mm;
cout << "Enter Seconds : ";
cin >> ss;
cout << "Enter am or pm : ";
cin >> ampm;
writeObj.setdata(hh,mm,ss,ampm);
ofstream outFile("TimeFile", ios::out | ios::binary);
if(!outFile)
{
cout << "Cannot open file.\n";
return 1;
}
outFile.write((char *) &writeObj, sizeof(timeVal));
cout << "\nWritten the time object successfully to binary file" << endl;
outFile.close();
// now, read back;
ifstream inFile("TimeFile", ios::in | ios::binary);
if(!inFile)
{
cout << "Cannot open file.\n";
return 1;
}
inFile.read((char *) &readObj, sizeof(timeVal));
cout << "\nRead the time object successfully from binary file" << endl;
readObj.showdata();
inFile.close();
return 0;
}