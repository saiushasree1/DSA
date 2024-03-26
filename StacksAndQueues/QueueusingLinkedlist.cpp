void Queue::push(int x) {
    // Write Your Code Here
    if(rear==NULL ||front==NULL){
        rear=new Node(x);
        front=rear;
    }
    else{
        Node* temp=new Node(x);
        rear->next=temp;
        rear=rear->next;
    }
}

int Queue::pop() {
    // Write Your Code Here
    if(front==NULL){
        return -1;
    }
    else{
        int x=front->data;
        Node* temp=front;
        front=front->next;
        temp->next=NULL;
        delete(temp);
        return x;
    }
}