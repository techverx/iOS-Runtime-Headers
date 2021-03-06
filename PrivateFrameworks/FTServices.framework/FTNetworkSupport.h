/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class APSConnection, NSTimer;

@interface FTNetworkSupport : NSObject  {
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}

@property(readonly) BOOL allowAnyNetwork;
@property(readonly) BOOL validNetworkEnabled;
@property(readonly) BOOL validNetworkActive;
@property(readonly) BOOL validNetworkReachable;
@property(readonly) BOOL wiFiActiveAndReachable;
@property(readonly) BOOL willSearchForNetwork;
@property(readonly) BOOL dataActiveAndReachable;
@property(readonly) BOOL networkEnabled;
@property(readonly) BOOL networkActive;
@property(readonly) BOOL networkReachable;
@property BOOL enableCriticalReliability;

+ (id)sharedInstance;

- (BOOL)networkEnabled;
- (BOOL)networkActive;
- (BOOL)networkReachable;
- (BOOL)enableCriticalReliability;
- (void)_setReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(BOOL)arg1;
- (void)_createAPSConnectionIfNeeded;
- (void)_tryToEnableReliability;
- (void)_clearReliabilityTimeoutInterval;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (BOOL)dataActiveAndReachable;
- (BOOL)wiFiActiveAndReachable;
- (BOOL)willSearchForNetwork;
- (BOOL)validNetworkReachable;
- (BOOL)validNetworkActive;
- (BOOL)validNetworkEnabled;
- (BOOL)allowAnyNetwork;

@end
