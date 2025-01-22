#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
 
bool board[9][9]; // 1..8 indexing
bool row[9]; // 1..8
bool downright[15]; // -7..7 to 0..14
bool upright[15]; // 2..16 to 0..14
int ans = 0;
 
//    1 2 3 4 5 6 7 8
// 1  . . . . . . . .	
// 2  . . . . . . . .
// 3  . . . . . . . .
// 4  . . . . . . . .
// 5  . . . . . . . .
// 6  . . . . . . . .
// 7  . . . . . . . .
// 8  . . . . . . . .
 
void solve(int x){
 
	// did we finished placing all queens?
	if(x == 9){
		// if yes just increase the answer by 1 and return
		ans++;
		return;
	}
 
	// put queen that is located in column x+1	
	// select one of the 8 rows
	
	rep(1,8){
		if(!board[i][x] && !row[i]){
			// if the row is free check the diagonals
			if( !downright[x-i+7] && !upright[x+i-2] ){
				// if they are also free we can send this to the next index
				// we first mark the row and the diagonals that we now threat
				row[i] = downright[x-i+7] = upright[x+i-2] = 1;
				solve(x+1);
				// when returnig we unmark them
				row[i] = downright[x-i+7] = upright[x+i-2] = 0;
			}
 
		}
	}
 
}
 
void doit(){
 
	rep(1,8){
		row[i] = false;
		repv(1,8,j){
			char x;
			cin >> x;
			if(x == '*'){
				board[i][j] = 1;
			}
		}
	}
 
	solve(1);
 
	cout << ans << endl;
	
}
 
#undef int
int main(){
 
	int t = 1;
	// cin >> t; // uncomment for multi-tests
 
	while(t--){
		doit();
	}
 
}