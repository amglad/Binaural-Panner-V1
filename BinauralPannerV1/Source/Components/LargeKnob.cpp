/*
  ==============================================================================

    LargeKnob.cpp
    Created: 2 Mar 2023 12:57:37pm
    Author:  Mitch Glad

  ==============================================================================
*/

#include "LargeKnob.h"

void LargeKnob::drawRotarySlider (juce::Graphics& g, int x, int y, int width, int height,
                       float sliderPos, const float rotaryStartAngle, const float rotaryEndAngle, juce::Slider& slider)
{
    
    // calculate an angle
    const float angle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
    
    juce::AffineTransform rotator;
    g.drawImageTransformed(knob, rotator.rotated(angle,(float)(knob.getWidth()/2), (float)(knob.getHeight()/2)));
    
    
}
