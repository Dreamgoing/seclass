// Created by 王若璇 on 16/5/24.
//算法思路:贪心算法.每次找正方形中剩余空间中,内切圆最大的那个空间,放入该空间的内切圆.
//方法:构造所有的相切的圆,然后按照半径排序.
//构造方法:
//  设所求圆半径为r,圆心为x,y,已知圆的半径为r0,圆心为x0,y0,以第一象限为例
// 1.一圆两个正方形边界所构成的区域内切圆为
//   构造出一个内切圆(内切上述区域)
//   则有方程 r+r0 = sqrt((x-x0)^2+(y-y0)^2) (圆外切性质)
//           r = 1-x
//           r = 1-y
// 2.两圆一个正方形边界所构成的区域内切圆为
//   构造出两个内切圆(内切上述区域) 且关于 y=x 这条直线对称
//   以 x = 1为正方形边界为例
//   则有方程 r = 1-x
//           r+r0 = sqrt((x-x0)^2+(y-y0)^2)
//           r+r1 = sqrt((x-x1)^2+(y-y1)^2)
//   同理可得 以 y = 1为正方形边界时的解
// 3.三圆构成的区域内切圆为
//   根据外切圆的性质
//   则有方程 r+r0 = sqrt((x-x0)^2+(y-y0)^2)
//           r+r1 = sqrt((x-x1)^2+(y-y1)^2)
//           r+r2 = sqrt((x-x2)^2+(y-y2)^2)
// 构造出所有的圆之后,根据四个象限的对称性,可得当m取确定的的值时,
// 使得sigma(ri^2) (i from 1 to m) 取得最大值时,所有圆的坐标和半径.
// 具体实现看如下代码
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
const double eps = 1e-6;
const double a = 2;
struct Balloon{
    double r;
    pair<double,double> mu;
    Balloon(){
        r = 0;
        mu.first =0;
        mu.second =0;
    }
    Balloon(double _r,pair<double,double> _mu){
        r = _r;
        mu = _mu;
    }
    //按照半径降序
    bool operator<(const Balloon& b){
        return this->r>b.r;
    }
};
Balloon getFirstSitiuation(double boundX,double boundY,Balloon a){ //第一种情况求解内切圆
    Balloon ans;

    return ans;
};
Balloon getSecondSitiuation(double bound,Balloon a,Balloon b){  //第二种情况求解内切圆
    Balloon ans;

    return ans;
}
Balloon getThirdSitiuation(Balloon a,Balloon b,Balloon c){ //第三种情况求解内切圆
    Balloon ans;

    return ans;
}
vector<Balloon> res;
vector<Balloon> conv; // 构造序列
void construct(int m){
    conv.clear();
    conv.push_back(Balloon(1,make_pair(0.,0.)));
    Balloon preFisrtSitiuation = conv[0];
    for(int i = 0;i<=m;i++){
        Balloon tmpFirst = getFirstSitiuation(1,1,preFisrtSitiuation);
        preFisrtSitiuation = tmpFirst;
        conv.push_back(tmpFirst);
        Balloon tmpSecond = getSecondSitiuation(1,tmpFirst,preFisrtSitiuation);
        conv.push_back(tmpSecond);
        conv.push_back(Balloon(tmpSecond.r,tmpSecond.mu));
        Balloon tmpThird = getThirdSitiuation(tmpFirst,tmpSecond,preFisrtSitiuation);
        conv.push_back(tmpThird);
    }
}
void solve(){
    res.clear();
    res.push_back(Balloon(1,make_pair(0.,0.))); //当m==1时,为正方形的内切圆


}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    while (cin>>m){




    }

    return 0;
}