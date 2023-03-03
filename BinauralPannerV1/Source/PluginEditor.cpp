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
    setSize (700, 699);
    
    bgImage = juce::ImageCache::getFromMemory(BinaryData::vaporwave_jpg, BinaryData::vaporwave_jpgSize);
    
    // horizontal plane (azimuth) knob
    horizontalKnob.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    horizontalKnob.setBounds(361,118,173,200);
    horizontalKnob.setRange(-180.0,180.0,1.0);
    horizontalKnob.setValue(0.0);
    horizontalKnob.setTextValueSuffix(" Degrees");
    horizontalKnob.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 95, 25);
    horizontalKnob.setLookAndFeel(&largeKnobLNF);
    addAndMakeVisible(horizontalKnob);
    
    horizontalLabel.setText("Horizontal Angle", juce::dontSendNotification);
    horizontalLabel.attachToComponent(&horizontalKnob, false);
    horizontalLabel.setFont(juce::Font(18.0));
    horizontalLabel.setJustificationType(juce::Justification::centredTop);
    addAndMakeVisible(horizontalLabel);
    
    
    // vertical plane (elevation) knob
    verticalKnob.setSliderStyle(juce::Slider::RotaryHorizontalVerticalDrag);
    verticalKnob.setBounds(141,423,110,138);
    verticalKnob.setRange(-45.0,90.0,1.0);
    verticalKnob.setValue(0.0);
    verticalKnob.setTextValueSuffix(" Degrees");
    verticalKnob.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 95, 25);
    verticalKnob.setLookAndFeel(&smallKnobLNF);
    addAndMakeVisible(verticalKnob);
    
    verticalLabel.setText("Vertical Angle", juce::dontSendNotification);
    verticalLabel.attachToComponent(&verticalKnob, false);
    verticalLabel.setFont(juce::Font(18.0));
    verticalLabel.setJustificationType(juce::Justification::centredTop);
    addAndMakeVisible(verticalLabel);
    
    
    // distance slider
    distanceSlider.setSliderStyle(juce::Slider::LinearHorizontal);
    distanceSlider.setBounds(200,575,300,50);
    distanceSlider.setRange(2.0,14.0,.1);
    distanceSlider.setValue(2.0);
    distanceSlider.setTextValueSuffix(" Feet");
    distanceSlider.setTextBoxStyle(juce::Slider::TextBoxBelow, false, 75, 25);
    distanceSlider.setLookAndFeel(&distanceSliderLNF);
    addAndMakeVisible(distanceSlider);
    
    distanceLabel.setText("Distance", juce::dontSendNotification);
    distanceLabel.attachToComponent(&distanceSlider, false);
    distanceLabel.setFont(juce::Font(18.0));
    distanceLabel.setJustificationType(juce::Justification::centredTop);
    addAndMakeVisible(distanceLabel);
    
    
    
//    effectSelector.addListener(this);
//    effectSelector.addItem("None", 1);
//    effectSelector.addItem("Gain", 2);
//    effectSelector.setBounds(300,50,150,50);
//    addAndMakeVisible(effectSelector);
    
}

BinauralPannerV1AudioProcessorEditor::~BinauralPannerV1AudioProcessorEditor()
{
}

//==============================================================================
void BinauralPannerV1AudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)

    g.drawImageAt(bgImage,0,0);

    g.setColour (juce::Colours::whitesmoke);
    g.setFont (30.0f);
    g.drawFittedText ("Binaural Panner", getLocalBounds(), juce::Justification::centredTop, 1);}

void BinauralPannerV1AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}


//void BinauralPannerV1AudioProcessorEditor::comboBoxChanged (juce::ComboBox *comboBoxThatHasChanged)
//{
//    if (comboBoxThatHasChanged == &effectSelector) {
//        audioProcessor.setEffect(effectSelector.getSelectedId());
//    }
//}
