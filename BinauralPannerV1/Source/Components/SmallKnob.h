/*
  ==============================================================================

    LargeKnob.h
    Created: 2 Mar 2023 12:57:37pm
    Author:  Mitch Glad

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class SmallKnob : public juce::LookAndFeel_V3
{
    
public:
    
    juce::Image knob = juce::ImageCache::getFromMemory(BinaryData::smallBall_png, BinaryData::smallBall_pngSize);
    
    void drawRotarySlider (juce::Graphics& g, int x, int y, int width, int height,
                           float sliderPos, const float rotaryStartAngle, const float rotaryEndAngle, juce::Slider& slider);

private:
    
    
    
};
