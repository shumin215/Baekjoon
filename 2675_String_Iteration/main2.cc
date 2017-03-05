#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	cin>>num;
	int itr[num];
	string SS[num];
	for(int i=0;i<num;i++){
		cin>>itr[i]>>SS[i];
	}
	for(int i=0;i<num;i++){
		for(int k=0;k<SS[i].length();k++){
			for(int j=0;j<itr[i];j++){
				cout<<SS[i][k];
			}
		}
		cout<<endl;
	}
}
