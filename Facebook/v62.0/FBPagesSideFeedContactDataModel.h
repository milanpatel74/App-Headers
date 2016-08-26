/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPagesSideFeedContactDataModel : FBValueObject <NSCopying> {

	NSString* _website;
	NSString* _phoneNumber;
	NSString* _emailAddress;
	NSString* _pageName;

}

@property (nonatomic,copy,readonly) NSString * website;                   //@synthesize website=_website - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneNumber;               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                  //@synthesize pageName=_pageName - In the implementation block
-(NSString *)pageName;
-(id)initWithWebsite:(id)arg1 phoneNumber:(id)arg2 emailAddress:(id)arg3 pageName:(id)arg4 ;
-(NSString *)phoneNumber;
-(NSString *)website;
-(NSString *)emailAddress;
@end
