
#include<iostream>

// Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode list3;
    ListNode* current=&list3;
    while(list1!=nullptr && list2!=nullptr){
        if((list2->val<=list1->val)){//(list1==nullptr || list1->val<=list2->val) has risk of acces list1 as null pointer, 
                                        //can be down to attach all rest stuffs after 
            current->next=list2;// no & list2 here
            list2=list2->next;
        }
        else {// if(list2==nullptr){
            current->next= list1;
            list1=list1->next; 
        }
        current=current->next;
    }
    current->next=list1?list1:list2;
    return list3.next;
    }

int main(){


}