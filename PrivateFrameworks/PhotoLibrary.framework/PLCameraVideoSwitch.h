/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage;

@interface PLCameraVideoSwitch : UIControl <PLCameraButtonBarSubviewProtocol> {
    UIImageView *_wellImageView;
    UIImageView *_handleImageView;
    UIImageView *_cameraImageView;
    UIImageView *_videoImageView;
    int _buttonBarStyle;
    UIImage *_wellImage;
    UIImage *_handleImage;
    UIImage *_handleDownImage;
    UIImage *_cameraImage;
    UIImage *_cameraLandscapeImage;
    UIImage *_videoImage;
    UIImage *_videoLandscapeImage;
    float _trackOriginY;
    struct CGPoint { 
        float x; 
        float y; 
    } _handleOffOrigin;
    struct CGPoint { 
        float x; 
        float y; 
    } _handleOnOrigin;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _hitRect;
    int _orientation;
    BOOL _watchingOrientationChanges;
    float _trackingHorizontalLocation;
    unsigned int _on : 1;
    unsigned int _didLayoutViews : 1;
    unsigned int _didMove : 1;
    unsigned int _lockEnabled : 1;
}

@property(getter=isOn) BOOL on;


- (void)_deviceOrientationChanged:(id)arg1;
- (void)dealloc;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isOn;
- (void)setOn:(BOOL)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)orientation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationAndTranslationTransformForDeviceOrientation:(int)arg1;
- (void)_animateImageView:(id)arg1 toTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 withImage:(id)arg3 animated:(BOOL)arg4;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationTransformForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForVideoImageForDeviceOrientation:(int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForCameraImageForDeviceOrientation:(int)arg1;
- (void)_loadLandscapeResources;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformWithTranslationOffset:(struct CGSize { float x1; float x2; })arg1 deviceOrientation:(int)arg2;
- (void)_loadTrackingResources;
- (void)_setOn:(BOOL)arg1 animationDuration:(float)arg2;
- (void)_loadTallImageResourcesForButtonBarMode:(int)arg1;
- (void)_updateEnabledness;
- (void)_loadInitialResources;
- (void)_startWatchingDeviceOrientationChanges;
- (void)setLockEnabled:(BOOL)arg1;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)buttonBar:(id)arg1 didChangeMode:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 buttonBarStyle:(int)arg2;

@end
