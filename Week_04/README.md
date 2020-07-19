学习笔记
二分法模板
int left=0,right=nums.size()-1;
while(left<right)
{
mid=(left+right)/2;
if(nums[mid]==target)
{
return res;
}
else if(nums[mid]<target)
{
left=mid+1;
}
else{
right=mid-1;
}
