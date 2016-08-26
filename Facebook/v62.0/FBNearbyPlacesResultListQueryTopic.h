/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBNearbyPlacesResultListQueryTopic : FBValueObject <NSCopying> {

	NSString* _title;
	NSArray* _fbids;
	NSString* _queryString;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fbids;                     //@synthesize fbids=_fbids - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
-(id)initWithTitle:(id)arg1 fbids:(id)arg2 queryString:(id)arg3 ;
-(NSArray *)fbids;
-(NSString *)title;
-(NSString *)queryString;
@end
