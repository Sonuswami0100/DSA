#include<iostream>
#include<vector>
using namespace std;
class stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v[v.size() - 1 ];
    }
    bool empty(){
        return v.size() == 0;
    }
    void print(){
        for(int val : v){
            cout<<val<<" ";
        }
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.print();
    s.pop();
    cout<<"top element on stack => "<<s.top()<<endl;
    cout<<"after the pop element: "<<endl;
    s.print();
return 0;
}