#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class CLL{
    Node* head;
    Node* tail;
public:
    CLL(){
        head = tail = NULL;
    }
    void insertATHead(int val){
        Node* newNode = new Node(val);
        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    
};
int main(){

return 0;
}