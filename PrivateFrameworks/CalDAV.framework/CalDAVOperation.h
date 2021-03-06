/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class <CalDAVPrincipal>, NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup  {
    <CalDAVPrincipal> *_principal;
    BOOL _isCancellingTaskGroups;
    NSMutableSet *_outstandingTaskGroups;
}

@property(readonly) <CalDAVPrincipal> * principal;
@property(readonly) NSMutableSet * outstandingTaskGroups;


- (void)dealloc;
- (id)init;
- (id)initWithPrincipal:(id)arg1;
- (void)_tearDownAllTaskGroupsWithBlock:(id)arg1;
- (id)outstandingTaskGroups;
- (void)cancelTaskGroup;
- (void)bailWithError:(id)arg1;
- (id)principal;

@end
