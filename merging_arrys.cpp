// all arrys are already sorted other wise complexity increase to nlogn for sorting arry.
//optimal solution
//we are gonna implement this using static arry.
//We can also use vector for easy way but i avoid built-in std library and implemented it from scratch.
//Here all the time complexity in worst case.
//Here i use dynamically user input but you can use #define to initialize your arry size.
#include<iostream>
using namespace std;

int main(){
    int n,m,i=0,j=0,k=0;
cout<< "Enter the size for arry1 : ";
cin>>n;
int a[n];// time complexity for 1st arry is O(n)

for(int i=0;i<n;i++){
    cin>> a[i];

}



cout<< "Enter the size for arry2 : ";
cin>>m;
int b[m];// time complexity for 2nd arry is O(m)

for(int i=0;i<m;i++){
    cin>> b[i];
}
cout<<"1st Arry element is : " << endl;
for(int i=0;i<n;i++){
    if(i==n-1){cout<<a[i] << endl;
    break;}
    cout<<a[i] << " --> " ;

}
cout<<"2nd Arry element is : " << endl;
for(int i=0;i<m;i++){
         if(i==m-1){cout<<b[i] << endl;
    break;}
    cout<<b[i] <<" --> " ;
}


int merg = n+m;
int final_ar[merg];

while(i<n && j<m){ // merging 2  arry into final arry here the  time complexity O(n+m).
    if(a[i]<b[j]){
        final_ar[k]=a[i];
        i++,k++;
    }
    else{
        final_ar[k]=b[j];
        j++,k++;}
}


while(i<n){
    final_ar[k++]=a[i++];

}

while(j<m){
    final_ar[k++]=b[j++];


}

cout<<"Merging Arry element is : " << endl;
for(int i=0;i<merg;i++){
     if(i==merg-1){cout<<final_ar[i] << endl;
    break;}
    cout<<  final_ar[i]<<" --> ";
}
return 0;

}
/* total time complexity and space complexity calculation
1st arry : O(n) space and time is same n
2nd arry : O(m) space and time is same m
final arry : O(n+m) space and time is n+m
merging arry : O(n+m) cause we use only one while.
so final time complexity is O(n).
*/

