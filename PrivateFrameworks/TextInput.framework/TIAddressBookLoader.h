/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class <TIAddressBookLoadable>;

@interface TIAddressBookLoader : NSObject  {
    <TIAddressBookLoadable> *_delegate;
}

@property <TIAddressBookLoadable> * delegate;

+ (id)addressBookLoaderWithDelegate:(id)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)loadAddressBook;
- (void)addressBookChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end
