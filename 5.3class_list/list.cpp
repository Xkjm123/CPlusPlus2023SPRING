#include "list.h"
#include "node.h"
#include <stddef.h>
list::list()
{
	size = 0;
	head = NULL;
}
list::list(const list& l){
	if (l.head == NULL){
		head = NULL;
	}
	else{

		head = new node();
		head->item = l.head->item;

		ptrtype cursor = head;
		ptrtype listcursor = l.head;
		while (listcursor->next != NULL){
			cursor->next = new node();
			cursor = cursor->next;
			listcursor = listcursor->next;
			cursor->item = listcursor->item;

		}
		cursor->next = NULL;
	}
	size = l.size;
}
list::~list() {
	while (head != NULL){
		ptrtype cursor = head;
		head = head->next;
		delete cursor;
	}
}

bool list::isEmpty() const{
	return size == 0;
}
int list::ListLength()const{
	return size;
}
ptrtype list::pointto(int pos) const{
	int cnt = 1;
	ptrtype cur = head;
	while (cnt < pos && cur != NULL){
		cur = cur->next;
		cnt++;
	}
	return cur;
}
void list::insert(int pos, itemtype newitem, bool& success){
	success = true;
	ptrtype newptr = new node();
	newptr->item = newitem;
	if (pos > 1 && pos <= ListLength() + 1){
		ptrtype cur = pointto(pos - 1);
		newptr->next = cur->next;
		cur->next = newptr;
		size++;
	}
	else if (pos == 1){
		newptr->next = head;
		head = newptr;
		size++;
	}
	else
		success = false;
}
void  list::remove(int pos, bool& success){
	success = true;
	ptrtype temp;
	if (pos > 1 && pos <= ListLength()){
		ptrtype cur = pointto(pos - 1);
		temp = cur->next;
		cur->next = temp->next;
		delete temp;
		size--;
	}
	else if (pos == 1){
		temp = head;
		head = head->next;
		delete temp;
		size--;
	}
	else
	{
		success = false;
	}

}
void list::retrieve(int pos, itemtype& item, bool& success)const
{
	if (pos<1 || pos>ListLength())
		success = false;
	else
		success = true;
	ptrtype cur = pointto(pos);
	item = cur->item;
}
