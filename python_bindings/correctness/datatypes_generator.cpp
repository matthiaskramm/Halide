#include "Halide.h"

using namespace Halide;

class DataTypesGenerator : public Halide::Generator<DataTypesGenerator> {
public:
    Input<uint8_t> input_uint8{"input_uint8"};
    Input<uint16_t> input_uint16{"input_uint16"};
    Input<uint32_t> input_uint32{"input_uint32"};
    Input<uint64_t> input_uint64{"input_uint64"};
    Input<int8_t> input_int8{"input_int8"};
    Input<int16_t> input_int16{"input_int16"};
    Input<int32_t> input_int32{"input_int32"};
    Input<int64_t> input_int64{"input_int64"};
    Input<float> input_float{"input_float"};
    Input<double> input_double{"input_double"};
    Input<Buffer<uint8_t>> buffer_uint8{"buffer_uint8", 1};
    Input<Buffer<uint16_t>> buffer_uint16{"buffer_uint16", 1};
    Input<Buffer<uint32_t>> buffer_uint32{"buffer_uint32", 1};
    Input<Buffer<uint64_t>> buffer_uint64{"buffer_uint64", 1};
    Input<Buffer<int8_t>> buffer_int8{"buffer_int8", 1};
    Input<Buffer<int16_t>> buffer_int16{"buffer_int16", 1};
    Input<Buffer<int32_t>> buffer_int32{"buffer_int32", 1};
    Input<Buffer<int64_t>> buffer_int64{"buffer_int64", 1};
    Input<Buffer<float>> buffer_float{"buffer_float", 1};
    Input<Buffer<double>> buffer_double{"buffer_double", 1};

    Input<Buffer<int8_t>> buffer_2d{"buffer_2d", 2};
    Input<Buffer<int8_t>> buffer_3d{"buffer_3d", 3};

    Output<Buffer<uint8_t>> output{"output", 1};

    Var x;

    void generate() {
        output(x) = buffer_uint8(x) + input_uint8;
    }

    void schedule() {
        output.compute_root();
    }
};

HALIDE_REGISTER_GENERATOR(DataTypesGenerator, datatypes)
