#include <bits/stdc++.h>
/***********************************************
    The structure of Binary tree is given below:

    template <typename T>
    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T>* left;
        BinaryTreeNode<T>* right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };
***********************************************/

void inorder(BinaryTreeNode<int> *root, vector<int> &arr)
{
    if (root)
    {
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
}
bool findTargetPair(BinaryTreeNode<int> *root, int target)
{
    if (!root)
        return false;

    vector<int> arr;
    inorder(root, arr);
    unordered_map<int, int> m;

    for (int i = 0; i < arr.size(); i++)
    {
        int half = target - arr[i];
        auto it = m.find(half);
        if (it != m.end() && it->second != i)
        {
            return true;
        }
        m[arr[i]] = i;
    }
    return false;
}

// Problem statement
//     You are given the ‘root’ of a Balanced Binary Search Tree and an integer ‘target,’ you have to tell if there exists any pair of nodes such that the sum of their value is equal to the target.

//                                                                                      More formally check if there exist any two distinct nodes,
//     whose sum is equal to ‘target.’

//     Note :

//     A binary search tree,
//     also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a key greater than all the keys in the node's left subtree and less than those in its right subtree.

//                                                       A balanced binary search tree is a tree in which each node has either 0 or
//                                                       2 children.Example : For Example,
//     the root node is given as follows :
// ‘ROOT’ = 5 2 6 - 1 - 1 - 1 - 1 and ‘target’ = 8, The answer will be true since the sum of both leaf nodes is equal to 8. Detailed explanation(Input / output format, Notes, Images) Constraints : 1 <= ‘T’ <= 10 1 <= ‘N’ <= 1000 0 <= data <= 10 ^ 3 0 <= ‘target’ <= 10 ^ 3

//                                                                                                                                                                                                                                                                                  Time Limit : 1sec Sample Input 1 : 2 5 2 6 -
//                                                                                                                                                                                                                                                                                  1 - 1 - 1 - 1 8 4 2 6 1 3 5 7 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 6 Sample Output 1 : 1 1 Explanation of the Sample Input 1 : For the first test case,
//  The answer will be true since the sum of both leaf nodes, i.e.the roots left node(2) and the roots right node(6) is equal to 8.

//                                                                For the second test case,
//  The answer will be true, since the sum of the 4th node(1) and 7th node(5) is equal to 6. Sample Input 2:
// 2 5 2 7 1 3 6 9 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 10 5 2 7 1 3 6 9 - 1 - 1 - 1 - 1 - 1 - 1 - 1 - 1 20 Sample Output 2 : 1 0 C++(g++ 11)3031323334353637383940414243444546474849
// #include <bits/stdc++.h> 
// /***********************************************
// 	The structure of Binary tree is given below: 
	
// 	template <typename T>
// 	class BinaryTreeNode {
// 	public:
// 		T data;
// 		BinaryTreeNode<T>* left;
// 		BinaryTreeNode<T>* right;
// …			if(it!=m.end() &&it->second!=i)
// 			{
// 				return true;
// 			}
// 			m[arr[i]]=i;
// 		}
// 		return false;
	
// }
