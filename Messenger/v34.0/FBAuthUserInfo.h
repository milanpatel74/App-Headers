/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBAuthUserInfo : FBValueObject <NSCopying, NSCoding> {

	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _locale;
	NSString* _fbid;

}

@property (nonatomic,copy,readonly) NSString * fullName;               //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * locale;                 //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbid;                   //@synthesize fbid=_fbid - In the implementation block
-(NSString *)fbid;
-(id)initWithFullName:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 locale:(id)arg4 fbid:(id)arg5 ;
-(NSString *)locale;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
@end
