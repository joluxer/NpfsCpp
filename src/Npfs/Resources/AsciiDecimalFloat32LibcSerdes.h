/*
 * AsciiDecimalFloat32LibcSerdes.h
 *
 *  Created on: 23.08.2017
 *      Author: lode
 */

#ifndef ASCIIDECIMALFLOAT32LIBCSERDES_H_
#define ASCIIDECIMALFLOAT32LIBCSERDES_H_

#include <cstdint>

namespace Npfs
{

class AsciiDecimalFloat32LibcSerdes
{
public:
  typedef float VarType;

  AsciiDecimalFloat32LibcSerdes(VarType& myVar);

  static const bool canSerialize = true;
  static const bool canDeserialize = true;
  static const uint64_t DataLength_bytes = 15;

  void serializeTo(unsigned char* buffer, unsigned bufferLength);

  bool deserializeFrom(const unsigned char* buffer, unsigned bufferLength);

protected:
  VarType& variable;
};

} /* namespace Npfs */

#endif /* ASCIIDECIMALFLOAT32LIBCSERDES_H_ */