# include <bits/stdc++.h>

void first_pyramid(int n);
void second_pyramid(int n);

int main(){
    int n;
    std :: cout << "whats your N ?";
    std :: cin >> n;

    first_pyramid(n);
    second_pyramid(n);

    return 0;
}

void first_pyramid(int n){
    for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n-i+1; j++){
                std :: cout << "*";
            }
            

            for(int space = 1; space <= i*2-2; space ++){
                std :: cout << " ";
            }
            
             for(int j = 1; j <= n-i+1; j++){
                std :: cout << "*";
            }
            std :: cout << std :: endl; 
        }
}

void second_pyramid(int n){

     for(int nRows = 1; nRows <= n; nRows++){
        //First Pyramid
            for(int i = 1; i <= nRows; i++){
            std :: cout << "*";
        }
        //For space
            for(int j = 1; j <= (2*n)-(2*nRows); j++){
            std :: cout << " ";
        }
        //Second Pyramid
            for(int j = nRows; j >= 1; j--){
            std :: cout << "*";
        }
        //New Line
        std :: cout << '\n';

    }
}