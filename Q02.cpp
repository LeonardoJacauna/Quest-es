#include <bits/stdc++.h>
using namespace std; 

bool permutacao(string p1, string p2){
    int cP, cont = 0;
    if(p1.length() == p2.length()){
        if(p2[0] == p1[0]){
            cP = p2.length();
            cont++;
            if(cP > 3){
                if(cont < (cP* (2 / 3))){
                    return true;
                }
            }else{
                return cont > 0;
            }
        }
    }
    return false;
}

int main (void){
    string p1 = "you"; //you, yuo - probably, porbalby - despite, desptie - moon, nmoo
	string p2 = "yuo"; 
	if (permutacao(p1, p2)) 
	printf("TRUE"); 
	else
	printf("FALSE"); 
    return 0;
}