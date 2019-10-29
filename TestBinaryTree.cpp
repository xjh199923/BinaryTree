#include "BinaryTree.h"
void Menu()
{
	cout<<"+==========================================================+"<<endl;
	cout<<"|                  Welcome To BinaryTree                   |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|    1.二叉树的大小     2.前序递归遍历    3.前序非递归遍历       |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|    4.中序递归遍历     5.中序非递归遍历    6.后序递归遍历       |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|    7.后序非递归遍历   8.层序遍历二叉树   9.二叉树的叶子个数     |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|   10.二叉树的深度     11.二叉树结点的度  12.二叉树结点的层次    |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|   13.二叉树的双亲     14.二叉树的左子女  15.二叉树的右子女      |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"|   16.查找结点         0.退出                               |"<<endl;
	cout<<"+==========================================================+"<<endl;
	cout<<"Please choose:"<<endl;
}
int main()
{
	int arr[19]={1,2,4,'#','#',5,8,'#','#',9,10,'#','#','#',3,6,'#','#',7};
	BinaryTree<int>bt(arr,19,0,'#');
	BinaryTreeNode<int>* root=bt.GetRoot();
	int te;
	Menu();
	int choose;
	while(choose){
	cin>>choose;
	switch (choose) {		
		case 1:
			{
				cout<<"二叉树的大小是："<<bt.Size(root)<<endl;
			}
			break;
		case 2:
			{
				cout<<"前序递归遍历：";
				bt.PrevOrder(root);
				cout<<endl;
			}
			break;
		case 3:
			{
				cout<<"前序非递归遍历：";
				bt.PrevOrder_NonR();
				cout<<endl;
			}
			break;		
		case 4:
			{
				cout<<"中序递归遍历：";
				bt.InOrder(root);
				cout<<endl;
			}
			break;
		case 5:
			{
				cout<<"中序非递归遍历：";
				bt.InOrder_NonR();
				cout<<endl;
			}
			break;
		case 6:
			{
				cout<<"后序递归遍历：";
				bt.PostOrder(root);
				cout<<endl;
			}
			break;
		case 7:
			{
				cout<<"后序非递归遍历：";
				bt.PostOrder_NonR();
				cout<<endl;
			}
			break;		
		case 8:
			{
				cout<<"层序遍历二叉树：";
				bt.Leve1Order();
				cout<<endl;
			}
			break;
		case 9:
			{
				cout<<"二叉树叶子节点个数："<<bt.LeafSize(root)<<endl;
			}
			break;
		case 10:
			{
				cout<<"二叉树的深度："<<bt.Depth(root)<<endl;
			}
			break;
		case 11:
			{
				cout<<"请输入你要查询度的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					cout<<"这个节点的度为:"<<bt.DegreeofNode(te)<<endl;
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}
			}
			break;		
		case 12:
			{
				cout<<"请输入你要查询层次的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					cout<<"这个节点的层次为:"<<bt.GetLevelofNode(te)<<endl;
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}
			}
			break;
		case 13:
			{
				cout<<"请输入你要查询双亲的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					bt.ParentofNode(root,te);
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}
			}
			break;
		case 14:
			{
				cout<<"请输入你要查询左子女的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					if(bt.LeftChildofNode(te)!=NULL)
					{
						cout<<"这个结点的左子女为:"<<bt.LeftChildofNode(te)->_data<<endl;
					}
					else{
						cout<<"该结点无左子女！"<<endl;
					}
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}
			}
			break;
		case 15:
			{
				cout<<"请输入你要查询右子女的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					if(bt.RightChildofNode(te)!=NULL)
					{
						cout<<"这个结点的右子女为: "<<bt.RightChildofNode(te)->_data<<endl;
					}
					else{
						cout<<"该结点无右子女！"<<endl;
					}
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}

			}
			break;		
		case 16:
			{
				cout<<"请输入你要查询的结点:"<<endl;
				cin>>te;
				if(bt.FindNode(te)){
					cout<<"该结点存在！"<<endl;
				}
				else{
					cout<<"该结点不存在!"<<endl;
				}

			}
			break;
		case 0:
			return 0;
			break;
		default:
			break;
		cout << endl;
		Menu();
	}
	cout<<endl;
	Menu();
	}
	return 0;
}