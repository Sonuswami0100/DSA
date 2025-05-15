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
    void printval (){
        if(head == NULL){
            return;
        }
        cout<<head->data<<" -> ";
        Node* temp = head->next;

        while(temp != head){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
    void insertatTail (int val){
        Node* newNode = new Node(val);

        if(tail == NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }
    void deleteAtHead(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }
    void deleteAttail(){
        if(head == NULL){
            return;
        }else if(head == tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }
};
int main(){
    CLL l;
    l.insertATHead(0);
    l.insertATHead(1);
    l.insertATHead(2);
    l.insertATHead(3);
    l.insertATHead(4);
    l.insertATHead(5);

    l.printval();
return 0;
}