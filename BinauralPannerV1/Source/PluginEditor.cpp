/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BinauralPannerV1AudioProcessorEditor::BinauralPannerV1AudioProcessorEditor (BinauralPannerV1AudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (417, 419);
    
    bgImage = juce::ImageCache::getFromMemory(BinaryData::background_png, BinaryData::background_pngSize);
    
    slider1.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    slider1.setBounds(50,50,150,150);
    slider1.setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
    slider1.setLookAndFeel(&lookAndFeelV3);
    addAndMakeVisible(slider1);
    
    
    
}

BinauralPannerV1AudioProcessorEditor::~BinauralPannerV1AudioProcessorEditor()
{
}

//==============================================================================
void BinauralPannerV1AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)

    g.drawImageAt(bgImage,0,0);
}

void BinauralPannerV1AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
