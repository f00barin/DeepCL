#pragma once

#include "Propagate.h"

class Propagate2 : public Propagate {
public:
    CLKernel *kernel;

    // [[[cog
    // import cog_addheaders
    // cog_addheaders.add()
    // ]]]
    // generated, using cog:
    VIRTUAL ~Propagate2();
    VIRTUAL void propagate( int batchSize, CLWrapper *dataWrapper, CLWrapper *weightsWrapper, CLWrapper *biasWeightsWrapper,
    CLWrapper *resultsWrapper );
    Propagate2( OpenCLHelper *cl, LayerDimensions dim, ActivationFunction const*fn );

    // [[[end]]]

};

