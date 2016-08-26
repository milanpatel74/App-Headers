/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerAttributedTaggedEntity : FBValueObject <NSCopying> {

	NSString* _graphQLID;
	NSString* _graphQLTypeName;
	NSString* _name;
	unsigned long long _attributeType;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphQLTypeName;               //@synthesize graphQLTypeName=_graphQLTypeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long attributeType;              //@synthesize attributeType=_attributeType - In the implementation block
-(NSString *)graphQLID;
-(NSString *)graphQLTypeName;
-(id)initWithGraphQLID:(id)arg1 graphQLTypeName:(id)arg2 name:(id)arg3 attributeType:(unsigned long long)arg4 ;
-(unsigned long long)attributeType;
-(NSString *)name;
@end
