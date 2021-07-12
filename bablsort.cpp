#include<iostream>
using namespace std;

int main(){
	int sort[11]={1,-4,5,8,6,-7,9,3,255,10,11};
	int a= sizeof(sort)/sizeof(sort[0]);
	for(int i=a-1;i>=0;i--){
	for(int j=a-1;j>=0;j--){
	if (sort[i]>sort[j]){
	int t =sort[i];
	sort[i]=sort[j];
	sort[j]=t;
}
}
}
for(int i=0;i<11;i++){
cout <<sort[i]<<" ,";}
return 0;
}
