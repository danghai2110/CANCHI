#include <iostream>

using namespace std;
int main() {
	int nam;
	string can[10] = { "CANH", "TAN", "NHAM", "QUY", "GIAP","AT", "BINH", "DINH", "MAU","KY" };
	string chi[12] = { "THAN", "DAU", "TUAT", "HOI", "THIN", "NGO", "MUI", "SUU", "TI", "TY", "DAN", "MEO" };
	cout << " nhap so nam: ";
	cin >> nam;
	string cn = can[nam % 10];
	string ci = chi[nam % 12];
	cout << "can chi cua ban la: " << " " << cn << "   " << ci << endl;
	return 0; 

}