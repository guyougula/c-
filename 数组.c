#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10]={1,2,3};//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5]={'a',98};
//	char arr3[5]="ab";//ok
//	char arr4[]="abcdef";
//	printf("%d\n",sizeof(arr4));//���Ϊ7
//			//sizeof ���� arr4��ռ�ռ�Ĵ�С
//			//7��Ԫ��-char 7*1=7
//	printf("%d\n",strlen(arr4));//���Ϊ6
//			//strlen ���ַ����ĳ���-'\0'֮ǰ���ַ�����
//	return 0;
//}



//int main()
//{
//	char arr1[]="abc";
//	char arr2[]={'a','b','c'};
//	printf("%d\n",sizeof(arr1));//4
//	printf("%d\n",sizeof(arr2));//3
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n",strlen(arr2));//���ֵ ��֪��ʲôʱ������'\0'
//	return 0;
//}


//int main()
//{
//	
//	//int arr[][3]={1,2,3,4,5,6,7,8};//��ά������б����ʡ�� �����б겻��ʡ��
//	//int arr[3][4]={1,2,3,4};
//	int arr[3][4]={{1,2},{3,4}};
//
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4]={{1,2},{3,4}};
//	printf("%p\n%p",arr[0],arr[1]);//arr[0],arr[1],arr[2]�ֱ���Ϊ��ά����������һά�����������
//	return 0;
//}


//ð������
//void bubblesort(int arr[],int sz)
//{
//	int temp=0,i=0,j=0;
//	for(j=0;j<sz-1;j++)
//	{
//		int flag=1;
//		for(i=0;i<sz-1-j;i++)
//		{
//			if(arr[i+1]<arr[i])
//			{
//				temp=arr[i];
//				arr[i]=arr[i+1];
//				arr[i+1]=temp;
//				flag=0;
//			}
//		}
//		if(flag==1)
//			break;
//	}
//}
//int main()
//
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubblesort(arr,sz);
//	
//	return 0;
//
//}

int main()
{
	int arr[]={1,2,3,4,5,6,7};
	/*printf("%p\n",arr);
	printf("%p\n",&arr[0]);
	printf("%d\n",*arr);*/
	printf("%p\n",arr);
	printf("%p\n",arr+1);

	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);

	printf("%p\n",&arr);
	printf("%p\n",&arr+1);
	printf("");
	return 0;
}
