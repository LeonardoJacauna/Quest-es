#include <bits/stdc++.h> 
using namespace std; 

bool digitacaoErro(string s1, string s2){ 
    int cont = 0, i = 0, j = 0; ; 
	int st1 = s1.length(), st2 = s2.length(); 

	if ((st1 - st2) > 1) return false; 
	
	while (i < st1 && j < st2){  
		if (s1[i] != s2[j]){ 
			if (cont == 1) return false;  
			if (st1 > st2){
				i++; 
            }else if (st1 < st2) 
				j++; 
			else{ 
				i++; 
				j++; 
			} 
			cont++; 
		} else{ 
			i++; 
			j++; 
		} 
	} 
	if (i < st1 || j < st2) 
		cont++; 
	return cont == 1; 
} 

int main(){ 
    /*
    pale, ple ­> true  
    pales, pale ­> true  
    pale, bale ­> true  
    pale, bake ­> false
    */
    string s1 = "pale"; 
    string s2 = "ple";
    if(digitacaoErro(s1, s2)) printf("True");
    else printf("False"); 
    
    return 0; 
} 
