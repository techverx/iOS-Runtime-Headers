/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification  {
    NSString *name;
    id object;
    NSDictionary *userInfo;
    BOOL dyingObject;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (id)name;
- (id)userInfo;
- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)object;
- (void)recycle;

@end
