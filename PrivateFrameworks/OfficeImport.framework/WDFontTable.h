/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary * mFontTable;
    NSMutableArray * mFontsInOrderOfInsertion;
}

- (void)clear;
- (unsigned int)count;
- (id)createFontWithName:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)fontAtIndex:(unsigned int)arg1;
- (id)fontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(BOOL)arg2;
- (id)fonts;
- (unsigned int)indexOfFont:(id)arg1;
- (id)init;

@end
