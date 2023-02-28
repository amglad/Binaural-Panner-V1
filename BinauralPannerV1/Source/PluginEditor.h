/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BinauralPannerV1AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    BinauralPannerV1AudioProcessorEditor (BinauralPannerV1AudioProcessor&);
    ~BinauralPannerV1AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BinauralPannerV1AudioProcessor& audioProcessor;
    
    juce::Image bgImage;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BinauralPannerV1AudioProcessorEditor)
};
