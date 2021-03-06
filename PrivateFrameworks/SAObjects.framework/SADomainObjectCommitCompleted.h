/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SADomainObjectCommitCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand> {
}

@property(copy) NSURL * identifier;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)domainObjectCommitCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCommitCompleted;

- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)encodedClassName;

@end
