#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string y;
	string y1;
	cout << "Input text: ";
	cin >> y;
	y1=func2(y);
    cout << "Reversed text: "<< func1(y)<<endl;
	cout << "Palindrome: ";
	if (y1 == func1(y1))
	{
		cout << "Yes";
	} else {
		cout << "No";
	}
    return 0;
}
