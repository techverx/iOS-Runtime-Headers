/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressBookManager : NSObject  {
    struct __CFArray { } *_clients;
    void *_addressBook;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)_applicationResumed:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_handleAddressBookChangeNotification;
- (void*)addressBook;

@end
