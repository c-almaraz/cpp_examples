// Small example of using the GeographicLib::Geodesic class

#include <iostream>
#include <GeographicLib/Geodesic.hpp>

using namespace std;
using namespace GeographicLib;

int main() {

  //const Geodesic& geod = Geodesic::WGS84();

  Geodesic geod(Constants::WGS84_a(), Constants::WGS84_f());


  // Distance from JFK to LHR
  double lat1 = 40.6, lon1 = -73.8; // JFK Airport
  double lat2 = 51.6, lon2 = -0.5; // LHR Airport
  double s12;
  geod.Inverse(lat1, lon1, lat2, lon2, s12);
  cout << s12 / 1000 << " km\n";
  return 0;

}
