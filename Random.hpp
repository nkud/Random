#ifndef ___RANDOM_HPP
#define ___RANDOM_HPP

#include <ctime>

class Random {
public:
  static Random& Instance() {
    static Random singleton;
    return singleton;
  }

  int randomInt() {
    return rand();
  }

  double randomDouble() {
    return ((double)rand()+1.0)/((double)RAND_MAX+2.0);
  }

  int uniformInt(int min, int max) {
    int ret = randomInt()%( max - min + 1 ) + min;
    return ret;
  }

  double uniformDouble( double min, double max ) {
    return uniformInt(min, max-1) + randomDouble();
  }

  bool probability( double prob ) {
    if( prob > uniformDouble( 0, 100 ) ) { return true; }
    else { return false; }
  }

  bool randomBool() {
    return probability(50) ? true : false;
  }

  int randomSign() {
    return probability(50) ? -1 : 1;
  }

private:
  Random() { srand((unsigned)time(NULL)); }
  ~Random() { }
};

#endif
