#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv)
{
	char niz[16] = "anavolimilovana";
	int brojacSlovaA=0;
	for(int i=0;i<15;i++){
		cout<<"niz["<<i<<"]="<< niz[i]<<endl;
	}
	for(int i=14; i>=0;i--){
		cout<<"Niz["<<i<<"]="<<niz[i]<<endl;
	}
	system("PAUSE");
	return 0;
}
