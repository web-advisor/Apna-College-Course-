# Problem
*From a given array we have to print the ranking of array elements in the ascending array.* 

## Sample Input
![Question](/IMAGES/18.1.a.png)

## Sample Output
![Question](/IMAGES/18.1.b.png)

## Solution Illustrated 

### // Array to be Printed <br>
int arr[]={10,16,7,14,5,3,12,9}; 

### // v is an dynamic array of pair<br>
vector < pair<int,int> > v;

### // Aim is to store array index and it's value pair in a Vector
### // v.size() can't be used as vector size is zero right now<br>
for(int i=0; i < ( sizeof(arr) / sizeof(arr[0]) ) ; i++){
<br> 
pair<int,int> p ; <br>
p.first=arr[i];<br>
p.second=i;<br>
v.pushback(p.first,p.second);<br>
### /*  Alternate to do the same thing<br>
### temp pair using make_pair()<br>
v.pushback(make_pair(arr[i],i));  <br> */

}

### /* Now vector of pairs "v" contains
    v = { {10,0}, {16,1}, {7,2},  {14,3},  {5,4},  {3,5}, {12,6}, {9,7} }; 
And accessing elements of vector of pair<br>
v[0].first=10;<br>
v[0].second=0;<br>
### */

sort(v.begin(),v.end(),myCompare);
### // default sorting in ascending order using sort() for vector<int>
    bool comparator(int a,int b){
        return a<b;
    }
### // sorting in descending order since vector<int>
    bool comparator(int a,int b){
        return a>b;
    }

### // sorting in ascending order since vector< pair<int,int> >
bool myCompare (pair<int,int> p1 , pair<int,int> p2 ){<br>
    return p1.first\<p2.first;  <br>
}

### // Now vector of pairs "v" contains
    v = {  {3,5}, {5,4}, {7,2}, {9,7}, {10,0}, {12,6}, {14,3},  {16,1} };


### // v.size() is now defined as size of vector v is defined
for(int i=0 ; i \< v.size() ; i++){ <br>
    arr[v[i].second]=i;   <br>
}   <br>

### // Printing the Array as required
for(int i=0 ; i < v.size() ; i++ ){  
    cout<< arr[i] <<" "; <br>
}  <br>
cout << endl; <br>





