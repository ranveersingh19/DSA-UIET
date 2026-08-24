#include<iostream>
using namespace std ;
class Node {
public:
    int data ;
    Node* next ;
    Node(int val){
        data = val ;
        next = NULL ;
    }
};
int main(){
    int n = 0;
    cout << "Enter the size of Linked List : " ;
    cin >> n ;
    Node* head = NULL ;
    Node* curr = head ;
    int ele ;
    for(int i=0 ; i<n ; i++){
        cin >> ele ;
        Node* temp = new Node(ele);
        if (head == NULL) {
            head = temp;
            curr = temp;
        } else {
            curr->next = temp;
            curr = temp ;
        }
    }
    int choice ;
    do {
        cout << "\nMENU\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Element\n";
        cout << "3. Search Element\n";
        cout << "4. Display Array\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: {
                int element, pos ;
                cout << "Enter the Position : " ;
                cin >> pos ;
                cout << "Enter the Element : " ;
                cin >> element ;
                Node* temp = new Node(element) ;
                if (pos == 0) {
                    temp->next = head ;
                    head = temp ;
                } else {
                    curr = head ;
                    for(int i=0 ; i<pos-1 && curr != NULL ; i++){
                        curr = curr->next ;
                    }
                    if (curr != NULL) {
                        temp->next = curr->next ;
                        curr->next = temp ;
                    }
                }
                n++ ;
                break ;
            }
            case 2: {
                int pos ;
                cout << "Enter the Position : " ;
                cin >> pos ;
                if (head != NULL) {
                    if (pos == 0) {
                        Node* toDelete = head ;
                        head = head->next ;
                        delete toDelete ;
                        n-- ;
                    } else {
                        curr = head ;
                        for(int i=0 ; i<pos-1 && curr != NULL && curr->next != NULL ; i++){
                            curr = curr->next ;
                        }
                        if (curr != NULL && curr->next != NULL) {
                            Node* toDelete = curr->next ;
                            curr->next = curr->next->next ;
                            delete toDelete ;
                            n-- ;
                        }
                    }
                }
                break ;
            }
            case 3: {
                int key , j=0;
                bool found = false ;
                cout << "Enter the Element : " ;
                cin >> key ;
                curr = head ;
                while(curr != NULL){
                    if(curr->data == key){
                        cout << "Element is present at : " << j << endl ;
                        found = true ;
                        break ;
                    }
                    curr = curr->next ;
                    j++ ;
                }
                if(!found){
                    cout << "Element is not present in the Linked List" << endl ;
                }
                break ;
            }
            case 4: {
                curr = head ;
                while(curr != NULL){
                    cout << curr->data << " " ;
                    curr = curr->next ;
                }
                cout << endl ;
                break;
        }
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    }while(choice != 5) ;
    return 0 ;
}
