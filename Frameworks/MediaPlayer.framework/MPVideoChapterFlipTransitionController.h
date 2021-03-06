/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UITextLabel, UINavigationItem, UINavigationBar;

@interface MPVideoChapterFlipTransitionController : MPFlipTransitionController  {
    UINavigationBar *_navigationBar;
    UINavigationItem *_originalNavigationItem;
    UITextLabel *_chapterGuideTitleLabel;
    BOOL _shouldPlayAfterFlip;
    BOOL _tvOutEnabled;
}

@property(retain) UINavigationBar * navigationBar;
@property BOOL playAfterFlip;
@property BOOL TVOutEnabled;


- (BOOL)TVOutEnabled;
- (void)setPlayAfterFlip:(BOOL)arg1;
- (BOOL)playAfterFlip;
- (id)_chapterGuideTitleLabel;
- (void)_done:(id)arg1;
- (void)_restoreOriginalNavigationViewsDidStop:(id)arg1;
- (id)_copySwizzledNavigationViews;
- (void)_hideNavigationBarAnimationDidFinish:(id)arg1;
- (void)_hideNavigationAndStatusBars;
- (void)_restoreOriginalNavigationViews:(BOOL)arg1;
- (void)_showChapterGuideNavigationViews;
- (void)performTransition:(unsigned int)arg1;
- (void)setTVOutEnabled:(BOOL)arg1;
- (int)_interfaceOrientation;
- (void)dealloc;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;

@end
