/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType, NSString, NSObject<OS_dispatch_queue>, AVWeakReference;

@interface AVFigAssetWriterTrack : NSObject  {
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _trackID;
    NSString *_mediaType;
    AVMediaFileType *_mediaFileType;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    BOOL _aboveHighWaterLevel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _sampleBufferCoalescingInterval;
}

@property(readonly) struct OpaqueFigAssetWriter { }* figAssetWriter;
@property(readonly) NSString * mediaType;
@property(readonly) AVMediaFileType * mediaFileType;
@property(readonly) int trackID;
@property(readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=isAboveHighWaterLevel,readonly) BOOL aboveHighWaterLevel;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } sampleBufferCoalescingInterval;

+ (id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6;

- (int)trackID;
- (void)dealloc;
- (id)init;
- (id)mediaType;
- (void)finalize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleBufferCoalescingInterval;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg1;
- (struct OpaqueFigAssetWriter { }*)figAssetWriter;
- (void)_refreshAboveHighWaterLevel;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id*)arg3;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6;
- (BOOL)markEndOfDataReturningError:(id*)arg1;
- (BOOL)addPixelBuffer:(struct __CVBuffer { }*)arg1 atPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(id*)arg3;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (BOOL)isAboveHighWaterLevel;
- (void)setFigDimensions:(id)arg1;
- (void)setFigTrackMatrix:(id)arg1;
- (void)setExcludeFromAutoSelection:(BOOL)arg1;
- (void)setFigMetadata:(id)arg1;
- (void)prepareToEndSession;
- (void)setSampleBufferCoalescingInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (void)setAlternateGroupID:(short)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (id)mediaFileType;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;

@end
