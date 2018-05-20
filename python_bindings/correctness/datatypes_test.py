import datatypes
import numpy

b_u8 = numpy.array([0, 1, 2, 3, 4, 5, 6], dtype=numpy.uint8)
b_u16 = numpy.zeros((7,), dtype=numpy.uint16)
b_u32 = numpy.zeros((7,), dtype=numpy.uint32)
b_u64 = numpy.zeros((7,), dtype=numpy.uint64)
b_i8 = numpy.zeros((7,), dtype=numpy.int8)
b_i16 = numpy.zeros((7,), dtype=numpy.int16)
b_i32 = numpy.zeros((7,), dtype=numpy.int32)
b_i64 = numpy.zeros((7,), dtype=numpy.int64)
b_float = numpy.zeros((7,), dtype=numpy.float)
b_double = numpy.zeros((7,), dtype=numpy.double)
b_2d = numpy.zeros((7, 9), dtype=numpy.int8)
b_3d = numpy.zeros((7, 9, 2), dtype=numpy.int8)
output = numpy.zeros((7,), dtype=numpy.uint8)

datatypes.datatypes(
    8, 16, 32, 64,
    -8, -16, -32, -64,
    3.14, 3.1415926,
    b_u8, b_u16, b_u32, b_u64,
    b_i8, b_i16, b_i32, b_i64,
    b_float, b_double,
    b_2d, b_3d,
    output
)

for i, v in enumerate(output):
  assert v == b_u8[i] + 8
