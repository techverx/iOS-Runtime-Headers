/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CoreDAVItem, NSMutableSet;

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement  {
    BOOL _content;
    CoreDAVItem *_prop;
    NSMutableSet *_calendarChanges;
}

@property BOOL content;
@property(retain) CoreDAVItem * prop;
@property(retain) NSMutableSet * calendarChanges;


- (void)dealloc;
- (id)init;
- (BOOL)content;
- (id)calendarChanges;
- (void)addCalendarChange:(id)arg1;
- (void)addContentItem:(id)arg1;
- (void)setCalendarChanges:(id)arg1;
- (void)setProp:(id)arg1;
- (id)prop;
- (id)copyParseRules;
- (void)setContent:(BOOL)arg1;

@end
