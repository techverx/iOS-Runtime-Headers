/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface EnhancementCalculator : EnhancementCalculation  {
    BOOL faceBalanceEnabled;
    BOOL vibranceEnabled;
    BOOL curvesEnabled;
    BOOL shadowsEnabled;
}

@property BOOL faceBalanceEnabled;
@property BOOL vibranceEnabled;
@property BOOL curvesEnabled;
@property BOOL shadowsEnabled;


- (void)dealloc;
- (id)init;
- (id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3;
- (id)histogramFromRows:(id)arg1 componentOffset:(unsigned int)arg2;
- (void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3;
- (BOOL)shadowsEnabled;
- (BOOL)curvesEnabled;
- (BOOL)vibranceEnabled;
- (void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3;
- (BOOL)faceBalanceEnabled;
- (void)setShadowsEnabled:(BOOL)arg1;
- (void)setCurvesEnabled:(BOOL)arg1;
- (void)setVibranceEnabled:(BOOL)arg1;
- (void)setFaceBalanceEnabled:(BOOL)arg1;

@end
