/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSCharacterSet;

@interface SFUJsonScanner : NSObject  {
    NSString *mString;
    unsigned short *mCharacters;
    unsigned int mLength;
    unsigned int mOffset;
    NSCharacterSet *mWhitespaceCharacterSet;
    NSCharacterSet *mDecimalDigitCharacterSet;
}


- (id)initWithString:(id)arg1;
- (void)dealloc;
- (id)parseNumber;
- (id)parseFalse;
- (id)parseTrue;
- (id)parseNull;
- (BOOL)parseConstantString:(const char *)arg1;
- (id)parseString;
- (id)parseHexCharacter;
- (void)appendCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toString:(id)arg2;
- (unsigned short)nextCharacter;
- (id)parseDictionary;
- (id)parseArray;
- (id)parseObject;
- (void)skipWhitespace;

@end
