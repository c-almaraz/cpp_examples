# include <cstdlib>
# include <iostream>
# include <iomanip>
# include <cmath>
# include <ctime>
# include <cstring>

using namespace std;

// # include "rbf_interp_2d.hpp"
# include "r8lib.hpp"
// # include "test_interp_2d.hpp"


//****************************************************************************80

int main ( )

//****************************************************************************80
//
//  Purpose:
//
//    RBF_INTERP_2D_TEST01 tests RBF_INTERP_2D.
//
//  Licensing:
//
//    This code is distributed under the GNU LGPL license.
//
//  Modified:
//
//    06 October 2012
//
//  Author:
//
//    John Burkardt
//
//  Parameters:
//
//    Input, int PROB, the index of the problem.
//
//    Input, int G, the index of the grid.
//
//    Input, void PHI ( int n, double r[], double r0, double v[] ), the 
//    radial basis function.
//
//    Input, string PHI_NAME, the name of the radial basis function.
//
{
  int debug = 0;
  double e;
  int i;
  double int_error;
  int m;
  int nd;
  int ni;
  double r0;
  double volume;
  double *w;
  double *xd;
  double xmax;
  double xmin;
  double *xyd;
  double *xyi;
  double *yd;
  double ymax;
  double ymin;
  double *zd;
  double *zi;

  
  // nd = g00_size ( g );
  nd=100;
  // cout << "  Number of data points = " << nd << "\n";

  xd = new double[nd];
  yd = new double[nd];
  // g00_xy ( g, nd, xd, yd );

  zd = new double[nd];
  // f00_f0 ( prob, nd, xd, yd, zd );

  // if ( debug )
  // {
  //   r8vec3_print ( nd, xd, yd, zd, "  X, Y, Z data:" );
  // }

  m = 2;
  xyd = new double[2*nd];

  for ( i = 0; i < nd; i++ )
  {
    xyd[0+i*2] = xd[i];
    xyd[1+i*2] = yd[i];
  }

  xmax = r8vec_max ( nd, xd );
  xmin = r8vec_min ( nd, xd );
  ymax = r8vec_max ( nd, yd );
  ymin = r8vec_min ( nd, yd );
  volume = ( xmax - xmin ) * ( ymax - ymin );

  e = 1.0 / ( double ) ( m );
  r0 = pow ( volume / nd, e );

  cout << "  Setting R0 = " << r0 << "\n";

  w = rbf_weight ( m, nd, xyd, r0, phi, zd );
//
//  #1:  Does interpolant match function at interpolation points?
//
  ni = nd;
  xyi = r8mat_copy_new ( 2, ni, xyd );

  zi = rbf_interp ( m, nd, xyd, r0, phi, w, ni, xyi );

  int_error = r8vec_norm_affine ( ni, zi, zd ) / ( double ) ( ni );

  cout << "\n";
  cout << "  L2 interpolation error averaged per interpolant node = " 
       << int_error << "\n";

  delete [] w;
  delete [] xd;
  delete [] xyd;
  delete [] xyi;
  delete [] yd;
  delete [] zd;
  delete [] zi;

  return;
}
