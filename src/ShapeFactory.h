#ifndef _SHAPEFACTORY_H
#define _SHAPEFACTORY_H


#include "IShape.h"
#include "ShapeParam.h"

template<class T>
class ShapeFactory {
  public:
    static inline IShape<T>* create(const ShapeParam<T> & param);

};
template<class T>
inline IShape<T>* ShapeFactory<T>::create(const ShapeParam<T> & param)
{
  return nullptr;
}

#endif
