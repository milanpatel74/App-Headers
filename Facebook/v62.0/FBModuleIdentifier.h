/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBModuleIdentifier : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _stringIdentfier_string;
	Class _classIdentifier_class;

}
+(id)stringIdentifierWithString:(id)arg1 ;
+(id)classIdentifierWithClass:(Class)arg1 ;
-(void)matchStringIdentfier:(/*^block*/id)arg1 classIdentifier:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

