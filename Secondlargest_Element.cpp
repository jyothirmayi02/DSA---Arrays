class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest=arr[0],secondlargest=-1;
        for (int i=1;i<arr.size();i++)
        {
            if (arr[i]>largest)
            {
                secondlargest = largest;
                largest = arr[i];
            }
            else if (arr[i]!=largest && arr[i]>secondlargest)
               secondlargest = arr[i];
        }
        return secondlargest;
    }
};
