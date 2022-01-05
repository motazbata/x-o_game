
#include <iostream>
using namespace std ;
char player = 'x' ;
char arr[3][3]= {'1','2','3','4','5','6','7','8','9'} ;
void print (){
         system("clear") ; 
        for (int i = 0 ; i < 3 ; i++){
                for (int  j = 0 ; j <3 ; j++){
                        cout << arr[i][j] << "  " ; 
                }
                cout << endl ; 
        }
}
void chhose(){
        char num ;
        cout << "choose the number turn  " << player << endl ; 
         cin >> num ;  
         for (int i = 0 ; i < 3 ; i++){
                for (int  j = 0 ; j <3 ; j++){
                        if (arr[i][j]==num)
                        arr[i][j] = player ; 
                }
        }
        if (player == 'x')
        player = 'o' ; 
        else 
        player = 'x' ; 



}
char whoan(){
        int conter = 0 ; 
        int conx = 0 ; 
        int cono = 0 ; 
        for (int i = 0 ; i < 3 ; i++){
                for (int  j = 0 ; j <3 ; j++){
                        if (arr[i][j]!='x' && arr[i][j] != 'o')
                        conter++ ; 
                        if (arr[i][j]=='x')
                        conx++ ; 
                        else if(arr[i][j]=='o')
                        cono++ ;
                        if (conx == 3 || cono == 3)
                        return conx > cono ? 'x' : 'o' ;  


                }
        conx = 0 ; 
        cono = 0 ;

        }
        for (int i = 0 ; i < 3 ; i++){
                for (int  j = 0 ; j <3 ; j++){
                        if (arr[j][i]=='x')
                        conx++ ; 
                        else if(arr[j][i]=='o')
                        cono++ ;
                        if (conx == 3 || cono == 3)
                        return conx > cono ? 'x' : 'o' ;  


                }
        conx = 0 ; 
        cono = 0 ;

        }
        if (conter== 0 )
        return 'z' ; 

        return '0' ; 

}

int main() {
while (whoan()=='0'){
        print() ; 
        chhose() ; 
}
print () ; 
cout << endl ; 
if (player == 'o')
cout << "the winner is " <<static_cast<char> (player+9 );
else 
cout << "the winner is " <<static_cast<char> (player-9 );


 
} 