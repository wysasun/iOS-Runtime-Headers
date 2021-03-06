/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADomainObjectCreateCompleted : SABaseCommand <SADomainObjectCommand, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSURL *identifier;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)domainObjectCreateCompleted;
+ (id)domainObjectCreateCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (void)setIdentifier:(id)arg1;

@end
