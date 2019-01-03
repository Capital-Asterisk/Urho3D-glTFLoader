#pragma once

#include "Sample.h"

using namespace Urho3D;

class GLTFExample : public Sample
{
    URHO3D_OBJECT(GLTFExample, Sample);

public:
    
    explicit GLTFExample(Context* context);

    void Start() override;

private:

};
