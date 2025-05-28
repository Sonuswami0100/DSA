#include<iostream>
#include<vector>
#include<list>
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
class linkeStack{
    list<int> ll;
    public:
    void pushl(int val){
        ll.push_front(val);
    }
    void popl(){
        ll.pop_front();
    }
    int topl(){
        return ll.front();
    }
    bool emptyl(){
        return ll.size() == 0;
    }
    void print(){
        for(int val : ll){
            cout<<val<<"-> ";
        }
        cout<<endl;
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
    linkeStack ll;
    ll.pushl(1);
    ll.pushl(2);
    ll.pushl(3);
    ll.pushl(4);
    ll.pushl(5);
    ll.print();
    ll.popl();
    cout<<endl;
    cout<<"top element on link list => "<<ll.topl()<<endl;
    cout<<"after the pop element: "<<endl;
    ll.print();
    return 0;
}