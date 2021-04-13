#include <iostream>
#include <vector>
using namespace std;
std::string(b);
int main() {
  int n;
  cin >> n;
  double x_0, y_0, x_n2, y_n2;
  cin >> x_0 >> y_0 >> x_n2 >> y_n2;
  double cen_x = (x_0 + x_n2) / 2;
  double cen_y = (y_0 + y_n2) / 2;
  double deg = 2 * M_PI / n;
  double x = x_0 - cen_x;
  double y = y_0 - cen_y;
  double X = x * cos(deg) - y * sin(deg);
  double Y = x * sin(deg) + y * cos(deg);
  printf("%.11lf %.11lf\n", cen_x + X, cen_y + Y);
  return 0;
}