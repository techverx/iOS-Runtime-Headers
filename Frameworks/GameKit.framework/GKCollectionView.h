/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, UIView, NSArray;

@interface GKCollectionView : UICollectionView  {
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
    UIView *_topShadowView;
}

@property(retain) NSArray * backgroundTiles;
@property(retain) UIImage * backgroundImage;
@property(retain) UIView * topShadowView;


- (void)layoutTilesWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 offset:(struct CGSize { float x1; float x2; })arg2;
- (void)updateBackgroundImageWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateShadowViews;
- (id)topShadowView;
- (void)updateBackground;
- (void)setTopShadowView:(id)arg1;
- (id)backgroundTiles;
- (void)setBackgroundTiles:(id)arg1;
- (void)dealloc;
- (void)setBackgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
