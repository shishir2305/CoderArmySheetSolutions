// asteroid collision

// algorithm -> positive means moving right, negative means moving left, push positive elements directly into the stack, if they are negative start popping the stack till they are greater than stack top element, if the top element is equal simply pop it else if current top is negative then simply push it to the stack since two same signed elements cannot destroy each other
// t.c -> O(n)
// s.c -> O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        vector<int>ans;
        for(int i=0; i<asteroids.size(); i++){
            if(ans.size()==0 || asteroids[i]>0){
                ans.push_back(asteroids[i]);
            }
            else{
                while(ans.size()>0 && ans.back()>0 && ans.back()<abs(asteroids[i])){
                    ans.pop_back();
                }
                if(ans.size()>0 && ans.back()==abs(asteroids[i])){
                    ans.pop_back();
                }
                else{
                    if(ans.size()==0 || ans.back()<0){
                        ans.push_back(asteroids[i]);
                    }
                }
            }
        }
        return ans;
    }

int main(){
    
    return 0;
}