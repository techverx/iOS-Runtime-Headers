/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, _UIBarButtonItemAppearanceStorage, NSDictionary, NSNumber, NSMutableDictionary;

@interface _UINavigationBarAppearanceStorage : NSObject  {
    NSMutableDictionary *backgroundImagesForBarMetrics;
    NSDictionary *textAttributes;
    NSNumber *titleVerticalAdjustment;
    NSNumber *miniTitleVerticalAdjustment;
    UIImage *shadowImage;
    BOOL hidesShadow;
    BOOL reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    BOOL _deferShadowToSearchBar;
}

@property(readonly) UIImage * backgroundImage;
@property(readonly) UIImage * miniBackgroundImage;
@property(readonly) UIImage * promptBackgroundImage;
@property(readonly) UIImage * miniPromptBackgroundImage;
@property(copy) NSDictionary * textAttributes;
@property(retain) NSNumber * titleVerticalAdjustment;
@property(retain) NSNumber * miniTitleVerticalAdjustment;
@property(retain) UIImage * shadowImage;
@property BOOL hidesShadow;
@property BOOL reversesShadowOffset;
@property(readonly) _UIBarButtonItemAppearanceStorage * barButtonAppearanceStorage;
@property(readonly) _UIBarButtonItemAppearanceStorage * _barButtonAppearanceStorage;
@property BOOL deferShadowToSearchBar;


- (void)dealloc;
- (void)setDeferShadowToSearchBar:(BOOL)arg1;
- (BOOL)deferShadowToSearchBar;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (void)setReversesShadowOffset:(BOOL)arg1;
- (BOOL)reversesShadowOffset;
- (void)setMiniTitleVerticalAdjustment:(id)arg1;
- (id)miniTitleVerticalAdjustment;
- (void)setTitleVerticalAdjustment:(id)arg1;
- (id)titleVerticalAdjustment;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (void)setHidesShadow:(BOOL)arg1;
- (BOOL)hidesShadow;
- (id)barButtonAppearanceStorage;
- (id)_barButtonAppearanceStorage;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (id)miniPromptBackgroundImage;
- (id)promptBackgroundImage;
- (id)miniBackgroundImage;
- (id)backgroundImage;

@end
