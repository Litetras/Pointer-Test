//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义链表节点结构
//struct Node {
//    int data;
//    struct Node* next;//指向下一个节点的指针
//};
//
//// 创建新节点
//struct Node* createNode(int data) {
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//malloc函数用于动态分配内存
//    if (newNode == NULL) {
//        printf("内存分配失败！\n");
//        exit(1);
//    }
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// 在链表末尾插入节点
//void insertNode(struct Node** head, int data) {
//    struct Node* newNode = createNode(data);
//    if (*head == NULL) {
//        *head = newNode;
//    } else {
//        struct Node* current = *head;
//        while (current->next != NULL) {
//            current = current->next;
//        }
//        current->next = newNode;
//    }
//}
//
//// 打印链表
//void printList(struct Node* head) {
//    struct Node* current = head;
//    while (current != NULL) {
//        printf("%d ", current->data);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//// 释放链表内存
//void freeList(struct Node* head) {
//    struct Node* current = head;
//    while (current != NULL) {
//        struct Node* temp = current;
//        current = current->next;
//        free(temp);
//    }
//}
//
//int main() {
//    struct Node* head = NULL;
//
//    // 在链表末尾插入节点
//    insertNode(&head, 1);
//    insertNode(&head, 2);
//    insertNode(&head, 3);
//
//    // 打印链表
//    printf("链表内容: ");
//    printList(head);
//
//    // 释放链表内存
//    freeList(head);
//
//    return 0;
//}