/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIFont : NSObject <NSCopying> {
}

@property(readonly) NSString * familyName;
@property(readonly) NSString * fontName;
@property(readonly) float pointSize;
@property(readonly) float ascender;
@property(readonly) float descender;
@property(readonly) float capHeight;
@property(readonly) float xHeight;
@property(readonly) float lineHeight;

+ (id)classFallbacksForKeyedArchiver;
+ (float)smallSystemFontSize;
+ (float)buttonFontSize;
+ (float)labelFontSize;
+ (id)_boldItalicSystemFontOfSize:(float)arg1;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)__newDummy;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (float)systemFontSize;
+ (id)boldSystemFontOfSize:(float)arg1;
+ (id)systemFontOfSize:(float)arg1;
+ (id)fontWithCTFont:(struct __CTFont { }*)arg1;
+ (id)fontWithDescriptor:(struct __CTFontDescriptor { }*)arg1 size:(float)arg2;
+ (id)userFontOfSize:(float)arg1;
+ (id)afui_avenirRomanFontOfSize:(float)arg1;
+ (id)afui_avenirHeavyFontOfSize:(float)arg1;
+ (id)afui_avenirMediumFontOfSize:(float)arg1;
+ (id)afui_blairMediumFontOfSize:(float)arg1;
+ (void)afui_loadFontFromBundle:(id)arg1 resourceName:(id)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isFixedPitch;
- (float)xHeight;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)_alternateSystemFonts;
- (id)familyNameForCSSFontFamilyValue;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (BOOL)isSystemFont;
- (id)initWithMarkupDescription:(id)arg1;
- (float)leading;
- (id)_fontScaledByScaleFactor:(float)arg1;
- (id)markupDescription;
- (int)traits;
- (id)fontName;
- (id)familyName;
- (float)descender;
- (float)lineHeight;
- (float)capHeight;
- (id)fontWithSize:(float)arg1;
- (float)pointSize;
- (float)ascender;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isVertical;
- (id)_familyName;
- (float)_ascenderDeltaForBehavior:(int)arg1;
- (BOOL)_isHiraginoFont;
- (struct __CTFont { }*)ctFontRef;
- (unsigned int)_defaultGlyphForChar:(unsigned short)arg1;
- (const unsigned short*)_latin1MappingTable:(bool*)arg1;
- (float)_baseLineHeightForFont:(BOOL)arg1;
- (id)lastResortFont;
- (id)bestMatchingFontForCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2 attributes:(id)arg3 actualCoveredLength:(unsigned int*)arg4;
- (id)coveredCharacterSet;
- (float)underlineThickness;
- (struct CGFont { }*)_backingCGSFont;
- (float)_totalAdvancementForNativeGlyphs:(const unsigned short*)arg1 count:(long)arg2;
- (unsigned int)getCaretPositions:(float*)arg1 forGlyph:(unsigned int)arg2 maximumLength:(unsigned int)arg3;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_textMatrixTransformForContext:(struct CGContext { }*)arg1;
- (struct __CTFontDescriptor { }*)CTFontDescriptor;
- (unsigned int)numberOfGlyphs;
- (unsigned int)glyphWithName:(id)arg1;
- (float)_defaultLineHeightForUILayout;
- (id)screenFontWithRenderingMode:(unsigned int)arg1;
- (void)getBoundingRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forCGGlyphs:(const unsigned short*)arg2 count:(unsigned int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForFont;
- (void)setInContext:(struct CGContext { }*)arg1;
- (float)_leading;
- (unsigned int)hyphenGlyphForLocale:(id)arg1;
- (struct __CTFont { }*)CTFont;
- (struct CGSize { float x1; float x2; })advancementForGlyph:(unsigned int)arg1;
- (void)getAdvancements:(struct CGSize { float x1; float x2; }*)arg1 forPackedGlyphs:(const void*)arg2 length:(unsigned int)arg3;
- (void)getAdvancements:(struct CGSize { float x1; float x2; }*)arg1 forGlyphs:(const unsigned int*)arg2 count:(unsigned int)arg3;
- (id)_kernOverride;
- (unsigned int)renderingMode;
- (BOOL)_isDefaultFace;
- (id)verticalFont;
- (struct __CTFont { }*)_gkCTFont;

@end
