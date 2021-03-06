/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationWhitelist : PBCodable <NSCopying> {
    NSMutableArray * _defaultTags;
    NSMutableArray * _optionalTags;
}

@property (nonatomic, retain) NSMutableArray *defaultTags;
@property (nonatomic, retain) NSMutableArray *optionalTags;

+ (Class)defaultTagsType;
+ (Class)optionalTagsType;

- (void).cxx_destruct;
- (void)addDefaultTags:(id)arg1;
- (void)addOptionalTags:(id)arg1;
- (void)clearDefaultTags;
- (void)clearOptionalTags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTags;
- (id)defaultTagsAtIndex:(unsigned int)arg1;
- (unsigned int)defaultTagsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)optionalTags;
- (id)optionalTagsAtIndex:(unsigned int)arg1;
- (unsigned int)optionalTagsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDefaultTags:(id)arg1;
- (void)setOptionalTags:(id)arg1;
- (void)writeTo:(id)arg1;

@end
