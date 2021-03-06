/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLogicalBounds;
    NSMutableArray *mChildren;
}


- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (id)children;
- (id)groupProperties;
- (void)removeUnnecessaryOverrides;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)addChildren:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })logicalBounds;
- (unsigned int)childCount;
- (void)addChild:(id)arg1;

@end
