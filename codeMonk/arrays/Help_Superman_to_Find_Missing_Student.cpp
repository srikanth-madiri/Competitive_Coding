/*

   N consecutive students visited to Disneyland with their Teachers to see their superhero Superman. They entered the magical kingdom but when they left it one of them was missing remaining N-1 students. Teacher has Enrollment number of all of the students in an List. But the list is unordered as a superhero Superman has taken the responsibility to find missing student. Help Superman to find the student.

   INPUT
   - The first line of the input contains an integer T denoting the number of test cases.
   - Each test case will contain an Integer N denoting the number elements of List.
   - Each test case will contain N space separated enrollment numbers of student.
   OUTPUT
   - For each Test case print the Enrollment number of the student.
   CONSTRAINTS
   1 ≤ T ≤ 10000
   1 ≤ N ≤ 2000
   0 ≤ Enrollments ≤ 30000

   SAMPLE INPUT 
   2
   4
   2 5 6 4
   8
   88 80 82 81 84 86 85 87
   SAMPLE OUTPUT 
   3
   83

 */



#include<bits/stdc++.h>

using namespace std;

int main(){

	int t,n,ele;
	cin>>t;

	while(t--){
		int sum=0;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){

			cin>>ele;
			a.push_back(ele);
			sum += ele;
		}

		int min = *std::min_element(a.begin(), a.end());
		int max = *std::max_element(a.begin(), a.end());

		int actual_sum =0; 
		for(int i=min;i<=max;i++)
			actual_sum += i;

		cout<<actual_sum-sum<<endl;
	}

	return 0;
}

