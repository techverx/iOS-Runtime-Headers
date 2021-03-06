/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSMutableDictionary;

@interface OSDProcesses : NSObject  {
    NSMutableDictionary *_processes;
}

+ (id)getProcesses;

- (void)dealloc;
- (id)init;
- (void)prettyPrintToLog;
- (id)getCachedProcesses;
- (id)getProcesses;
- (id)refreshProcesses;
- (id)threadInfoForPort:(unsigned int)arg1 withUsageAccumulator:(double*)arg2;
- (id)taskInfoForPID:(int)arg1;

@end
