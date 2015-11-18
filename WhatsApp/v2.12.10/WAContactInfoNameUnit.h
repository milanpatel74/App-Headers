/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface WAContactInfoNameUnit : NSObject {

	unsigned _nameFormat;
	NSString* _prefix;
	NSString* _firstName;
	NSString* _phoneticFirstName;
	NSString* _middleName;
	NSString* _phoneticMiddleName;
	NSString* _lastName;
	NSString* _phoneticLastName;
	NSString* _suffix;
	NSString* _nickname;
	NSString* _jobTitle;
	NSString* _department;
	NSString* _organization;

}

@property (nonatomic,copy,readonly) NSString * prefix;                          //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFirstName;               //@synthesize phoneticFirstName=_phoneticFirstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * middleName;                      //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticMiddleName;              //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                        //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticLastName;                //@synthesize phoneticLastName=_phoneticLastName - In the implementation block
@property (nonatomic,copy,readonly) NSString * suffix;                          //@synthesize suffix=_suffix - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;                        //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;                        //@synthesize jobTitle=_jobTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,copy,readonly) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) unsigned nameFormat;                             //@synthesize nameFormat=_nameFormat - In the implementation block
+(id)contactInfoNameUnitForRecord:(void*)arg1 ;
-(unsigned)nameFormat;
-(id)initWithRecord:(void*)arg1 ;
-(NSString *)phoneticMiddleName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)jobTitle;
-(NSString *)middleName;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)department;
-(NSString *)organization;
-(NSString *)suffix;
-(NSString *)prefix;
-(NSString *)nickname;
@end
