#include <iostream> // std::cout
#include <algorithm> // std::sort
#include <vector> // std::vector
#include <string>
#include <iterator>
#include <map>
#include <string.h>
#include <cstdio>

using namespace std;


int tamP,aux=0,confere=0;
std::string padrao,texto;
int z=0;

int main(){

while((scanf("%d", &tamP))!=EOF){
	map<char,int> maping;
    cin >> padrao;
    cin >> texto;

	for (unsigned int u=0;u<padrao.length();u++){
		maping[padrao[u]]=padrao.length()-1-u;
	}

	maping[padrao[padrao.length()-1]]=1;
	unsigned int i=0;

	while (i<texto.length()){
		aux=padrao.length();
		aux--;

		while (aux>=z){
			if (texto[i+aux] == padrao[aux]){
					aux--;
			}
			else break;

		}
		
		map<char,int>::iterator it;

		if (aux<z){
			cout << i << endl;
			confere=1;
			i++;
		}
		else {
			it=maping.find(padrao[aux]);
		if (it==maping.end()){
			i=i+padrao.length();
		}
		else {
			i=i+it->second;
		}

	}
			
}

	if(confere==z){
		cout << endl;
	}
}


	return 0;
}
