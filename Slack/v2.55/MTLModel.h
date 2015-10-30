/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface MTLModel : NSObject <NSCoding, NSCopying>

@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2 ;
+(id)encodingBehaviorsByPropertyKey;
+(id)allowedSecureCodingClassesByPropertyKey;
+(unsigned long long)modelVersion;
+(BOOL)supportsSecureCoding;
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2 ;
+(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2 ;
-(void)mergeValuesForKeysFromModel:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)validate:(id*)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
@end

