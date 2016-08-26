/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSString, NSArray;

@interface FBRobotext : NSObject <NSCoding, NSCopying> {

	NSAttributedString* _attributedStringRepresentation;
	unsigned long long _hash;
	NSString* _stringRepresentation;
	NSArray* _tags;

}

@property (nonatomic,copy,readonly) NSArray * tags;              //@synthesize tags=_tags - In the implementation block
-(void)enumerateTagsUsingBlock:(/*^block*/id)arg1 ;
-(id)attributedStringRepresentation;
-(id)initWithString:(id)arg1 tags:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tags;
-(id)stringRepresentation;
@end
