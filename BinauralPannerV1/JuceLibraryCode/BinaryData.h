/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   knob_small_png;
    const int            knob_small_pngSize = 5457;

    extern const char*   largeBall_png;
    const int            largeBall_pngSize = 36129;

    extern const char*   rustyKnob_png;
    const int            rustyKnob_pngSize = 30358;

    extern const char*   slateKnob_png;
    const int            slateKnob_pngSize = 2262179;

    extern const char*   smallBall_png;
    const int            smallBall_pngSize = 17252;

    extern const char*   smallestBall_png;
    const int            smallestBall_pngSize = 5804;

    extern const char*   vaporwave_jpg;
    const int            vaporwave_jpgSize = 82513;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 7;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
