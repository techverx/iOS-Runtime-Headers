/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSObject<OS_xpc_object>, NSLock, NSMutableArray, <GEOResourceManifestServerProxyDelegate>;

@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
    <GEOResourceManifestServerProxyDelegate> *_delegate;
    NSObject<OS_xpc_object> *_conn;
    int _closedCount;
    unsigned long long _regionalResourceHandleCounter;
    NSMutableArray *_inProgressRegionalResourcesRequests;
    NSLock *_inProgressRegionalResourcesRequestsLock;
    BOOL _started;
    BOOL _hiDPI;
    unsigned int _retryCount;
}

@property <GEOResourceManifestServerProxyDelegate> * delegate;


- (id)authToken;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)_setupConnection;
- (void)_handleMessage:(id)arg1 xpcMessage:(id)arg2;
- (oneway void)refreshActiveTileGroup;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)getResourceManifestWithHandler:(id)arg1;
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)arg1;
- (oneway void)loadRegionalResourcesForKeys:(id)arg1 allowNetwork:(BOOL)arg2;
- (void)closeConnection;
- (void)openConnection;
- (oneway void)startServer:(id)arg1;
- (oneway void)forceUpdate;

@end
