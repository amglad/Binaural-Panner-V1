/*
  ==============================================================================

    DistanceSlider.h
    Created: 2 Mar 2023 6:17:45pm
    Author:  Mitch Glad

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class DistanceSlider : public juce::LookAndFeel_V3
{
    
public:
    
    void drawLinearSlider(juce::Graphics& g, int x, int y, int width, int height,
                          float sliderPos, const float minSliderPos, const float maxSliderPos, juce::Slider& slider);

private:
    
    
    
};
