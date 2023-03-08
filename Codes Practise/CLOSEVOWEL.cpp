
#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <bits/stdc++.h>

class Node
{
public:
    // data members
    int data;
    int x;
    Node *next;

    // Constructor:
    Node(int data , int x)
    {
        this->data = data;
        this->next = NULL;
        this->x = x;
    }
};

class linked_list
{
public:
    Node *push(int v1, int v2, Node *arr[] , int x)
    {

        if (arr[v1] == NULL)
        {
            // create a new node and return:
            Node *newNode = new Node(v2,x);
            return newNode;
        }

        // otherwise go to end and append newNode
        Node *curNode = arr[v1];
        while (curNode->next != NULL)
        {

            curNode = curNode->next;
        }

        // create a new node and append it to curNode:
        Node *newNode = new Node(v2,x);
        curNode->next = newNode;
        newNode->next = NULL;

        return arr[v1];
    }
};

class graph
{


    {

        queue<int> queue;
        queue.push(0);
        visitedArr[0] = true;

        while (!queue.empty())
        {
            int v = queue.front();
            queue.pop();

            cout << v << " ";
            Node *curNode = arr[v];

            while (curNode != NULL)
            {
                if (!visitedArr[curNode->data])
                {
                    queue.push(curNode->data);
                    visitedArr[curNode->data] = true;
                }

                curNode = curNode->next;
            }
        }
    }

public:
    void takeInput(Node *arr[], int v)
    {
        // int e;
        // // cout << "Enter the number of edges: ";
        // cin >> e;

        int v1, v2;
        linked_list obj;

        for (int i = 0; i < v-1; i++)
        {
            // cout << "Enter v1: ";
            cin >> v1;
            // cout << "Enter v2: ";
            cin >> v2;
            cout << endl;
            int x;
            cin>>x;

            arr[v1] = obj.push(v1, v2, arr,x);
            arr[v2] = obj.push(v2, v1, arr,x);

            // printGraph(arr, v);
        }
    }

    
  

    int countg(Node *arr[], int v){
        int count =0;
        for (int i = 0; i < v; i++)
        {
            
            Node *rootNode = arr[i];
            bool flag =0 ;
            cout << i << ": ";
            while (rootNode != NULL)
            {
               
                if ( rootNode->x  == 0)
                {
                    break ;
                }
                else{
                    flag = 1;
                    
                }
                rootNode = rootNode->next;
            }
            count++;

            cout << endl;

        }
        return count;
    }
};

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        
        int v;
        cin >> v;
        cout << endl;
        int k;
        cin >> k;
        Node *arr[v];
        for (int i = 0; i < v; i++)
        {
            arr[i] = NULL;
        }

        // object of graph class:
        graph obj;

        obj.takeInput(arr, v);
        int val;
        val = obj.countg(arr,v);
        cout<<val<<endl;
    }

}