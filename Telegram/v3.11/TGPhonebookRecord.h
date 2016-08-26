/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TGPhonebookRecord : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSString* _middleName;
	NSArray* _phoneNumbers;

}

@property (nonatomic,readonly) NSString * firstName;                //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                 //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;               //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;              //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 middleName:(id)arg3 phoneNumbers:(id)arg4 ;
-(NSString *)middleName;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)phoneNumbers;
-(NSString *)firstName;
-(NSString *)lastName;
@end
