#include<iostream>
using namespace std;
//this class is create the node of link list
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }

};
//this is list class
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head = NULL;
        tail = NULL;
    }
    //push function that can be add the add in link list of front
    void push_front(int val){    //Tc: o(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }
    //this all so add data on back
    void push_back(int val){     //Tc:o(1)
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    //this function can be remove the element from front
    void pop_front(int val){    //Tc: o(1)
        if(head == NULL){
            cout<<"link list is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }
    //this all so remove the node in back
    void pop_back(int val){     //Tc: O(1)
        if(head == NULL){
            cout<<"link list is empty\n";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    //this is add value in middle of link list
    void insert(int val,int pos){ //Tc: o(n)
        if(pos < 0){
            cout<<"invalid position\n";
            return;
        }
        if(pos == 0){
            push_back(val);
            return;
        }
        Node* temp = head;
        for(int i = 0;i < pos-1;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    //this function is to search the element on link list
    int search(int key){    //Tc: O(n)
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
    //this is print the data of link list
        void printll(){     //Tc: O(n)
            Node* temp = head;
            cout<<"your link list: "<<endl;
            while(temp != NULL){
                cout<<temp->data<<" -> ";
                temp = temp->next;
            }
            cout<<"NULL"<<endl;
        }
    
};

int main(){
    list ll;
    int opt;
    int val,pos,se;
    string str;
    
    do{
        cout<<"1. create complet link list"<<endl<<"2. push only fornt"<<endl<<"3. push on back"<<endl<<"4. pop back"<<endl<<"5. pop front"<<endl<<"6. insert in middle"<<endl<<"7. search in link list"<<endl<<"8. exit"<<endl;
    cout<<"select one: ";
    cin>>opt;
    if(opt == 1){
        int num;
        cout<<"how many elements in there link list: ";
        cin>>num;
        for(int i = 0;i < num;i++){
            ll.push_front(i);
        }
    }else if(opt == 2){
        int p;
        cout<<"Enter the number you push:";
        cin>>p;
        ll.push_front(p);
    }else if(opt == 3){
        int p;
        cout<<"Enter the number you push_back:";
        cin>>p;
        ll.push_back(p);
    }else if(opt == 4){
        int p;
        cout<<"Enter the number you pop_back:";
        cin>>p;
        ll.pop_back(p);
    }else if(opt == 5){
        int p;
        cout<<"Enter the number you pop:";
        cin>>p;
        ll.pop_front(p);
    }else if(opt == 6){
        int p,pos;
        cout<<"Enter the number insert middle and there positiion:";
        cin>>p>>pos;
        ll.insert(p,pos);
    }else if(opt == 7){
        int key;
        cout<<"Enter the key:";
        cin>>key;
        int ans = ll.search(key);
        cout<<"your search idx is: "<<ans;
    }
    cout<<endl;
    cout<<"you want to print your link list: ";
    cin>>str;
    if(str == "yes"){
        cout<<"your link list is: "<<endl;
    ll.printll();
    }
    }while(opt != 8);
return 0;
}