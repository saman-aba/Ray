#include <cmath>
#include <algorithm>
#include <iterator>
#include <string>

template< template <typename> class Child, typename T>
class Tuple2{
	public:
		static const int nDimentions = 2;

		Tuple2() = default;
		//RAY_CPU_GPU
		Tuple2(T x, T y); : _x(x) , _y(y){
			//DCHECK(!HasNaN());
			}
