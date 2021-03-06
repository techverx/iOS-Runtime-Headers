/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class BKSApplicationProcessInfo;

@interface BKSWorkspaceApplicationInfo : NSObject  {
    BKSApplicationProcessInfo *_info;
    BOOL _recordingAudio;
    BOOL _externalAccessory;
}

@property(retain) BKSApplicationProcessInfo * info;
@property BOOL recordingAudio;
@property BOOL usingExternalAccessory;


- (void)setInfo:(id)arg1;
- (BOOL)usingExternalAccessory;
- (void)setUsingExternalAccessory:(BOOL)arg1;
- (BOOL)recordingAudio;
- (void)setRecordingAudio:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)info;

@end
