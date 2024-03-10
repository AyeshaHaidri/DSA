#include<bits/stdc++.h>
using namespace std;

int findFirstOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = (s+e)/2;

  //BEST Practice
  //int mid = s +(e-s)/2;
  
  int ans = -1;

  while(s<=e) {
    if(arr[mid]==target) {
      ans = mid;
      e = mid-1;
    }
    else if(target > arr[mid]) {
      s = mid+1;
    }
    else if(target < arr[mid]) {
      e = mid-1;
    }
    mid = (s+e)/2;
  }
  return ans;
}


int findLastOccurence(int arr[], int n, int target) {
  int s = 0;
  int e = n-1;
  int mid = s +(e-s)/2;
  int ans = -1;
  while(s<=e) {
    if(arr[mid]==target) {
      ans = mid;
      s = mid+1;
    }
    else if(target > arr[mid]) {
      s = mid+1;
    }
    else if(target < arr[mid]) {
      e = mid-1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int findTotalOccurence(int arr[], int n, int target) {
  int firstOcc = findFirstOccurence(arr, n, target);
  int lastOcc = findLastOccurence(arr, n, target);
  int total = lastOcc - firstOcc +1 ;
  return total;
}



int main() {

  int arr[] = {10,20,20,30,30,30,30,40,50};
  int target = 20;
  int n =8;
  int ans = findTotalOccurence(arr, n, target);
  cout<<ans;
}
