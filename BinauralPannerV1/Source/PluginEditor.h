/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"
#include "Components/LargeKnob.h"
#include "Components/SmallKnob.h"
#include "Components/DistanceSlider.h"

//==============================================================================
/**
*/
class BinauralPannerV1AudioProcessorEditor  : public juce::AudioProcessorEditor
                                               // public juce::ComboBox::Listener
{
public:
    BinauralPannerV1AudioProcessorEditor (BinauralPannerV1AudioProcessor&);
    ~BinauralPannerV1AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    
    // virtual void comboBoxChanged (juce::ComboBox *comboBoxThatHasChanged) override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BinauralPannerV1AudioProcessor& audioProcessor;
    
    juce::Image bgImage;
    
    juce::Slider horizontalKnob;
    juce::Slider verticalKnob;
    juce::Slider distanceSlider;
    
    juce::Label horizontalLabel;
    juce::Label verticalLabel;
    juce::Label distanceLabel;
    
    juce::LookAndFeel_V3 lookAndFeelV3;
    
    LargeKnob largeKnobLNF;
    SmallKnob smallKnobLNF;
    DistanceSlider distanceSliderLNF;
    
    // juce::ComboBox effectSelector;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BinauralPannerV1AudioProcessorEditor)
};
