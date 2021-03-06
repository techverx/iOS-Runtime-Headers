/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureMetadataOutputInternal, NSObject<OS_dispatch_queue>, <AVCaptureMetadataOutputObjectsDelegate>;

@interface AVCaptureMetadataOutput : AVCaptureOutput  {
    AVCaptureMetadataOutputInternal *_internal;
}

@property(readonly) <AVCaptureMetadataOutputObjectsDelegate> * metadataObjectsDelegate;
@property(readonly) NSObject<OS_dispatch_queue> * metadataObjectsCallbackQueue;
@property(readonly) NSArray * availableMetadataObjectTypes;
@property(copy) NSArray * metadataObjectTypes;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)_input;
- (void)setMetadataObjectTypes:(id)arg1;
- (void)setMetadataObjectsDelegate:(id)arg1 queue:(id)arg2;
- (id)metadataObjectsCallbackQueue;
- (id)metadataObjectsDelegate;
- (BOOL)_faceMetadataIsActive;
- (id)availableMetadataObjectTypes;
- (id)metadataObjectTypes;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)connectionMediaTypes;
- (void)_applyOverridesToCaptureOptions:(id)arg1;

@end
