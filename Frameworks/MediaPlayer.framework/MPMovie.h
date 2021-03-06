/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, NSURL;

@interface MPMovie : NSObject  {
    MPAVItem *_item;
    NSURL *_url;
    int _movieSourceType;
    double _startPlaybackTime;
    double _endPlaybackTime;
    BOOL _explicitlySetMovieSourceType;
    BOOL _movieIsUnplayable;
    double _lastKnownDuration;
    struct CGSize { 
        float width; 
        float height; 
    } _lastKnownNaturalSize;
    unsigned int _lastKnownType;
}

@property(readonly) NSURL * url;
@property(readonly) int movieMediaTypes;
@property int movieSourceType;
@property(readonly) double duration;
@property(readonly) double playableDuration;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property double startPlaybackTime;
@property double endPlaybackTime;

+ (id)movieWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (int)movieMediaTypes;
- (void)setEndPlaybackTime:(double)arg1;
- (double)playableDuration;
- (void)_determineMediaType;
- (void)_typeAvailableNotification:(id)arg1;
- (void)_naturalSizeAvailableNotification:(id)arg1;
- (void)_durationAvailableNotification:(id)arg1;
- (id)_initWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)_MPArrayQueueItem;
- (double)startPlaybackTime;
- (void)setStartPlaybackTime:(double)arg1;
- (double)endPlaybackTime;
- (int)movieSourceType;
- (void)setMovieSourceType:(int)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)url;
- (double)duration;

@end
