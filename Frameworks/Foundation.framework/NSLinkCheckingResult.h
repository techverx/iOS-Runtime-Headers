/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL;

@interface NSLinkCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSURL *_url;
}


- (id)URL;
- (id)description;
- (void)dealloc;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)resultType;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 URL:(id)arg2;
- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;

@end
