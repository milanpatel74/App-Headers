/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface XMPPConnectionConfiguration : NSObject {

	BOOL _allowsAddressBookAccess;
	BOOL _passiveOnly;

}

@property (assign,nonatomic) BOOL allowsAddressBookAccess;                       //@synthesize allowsAddressBookAccess=_allowsAddressBookAccess - In the implementation block
@property (assign,getter=isPassiveOnly,nonatomic) BOOL passiveOnly;              //@synthesize passiveOnly=_passiveOnly - In the implementation block
-(BOOL)allowsAddressBookAccess;
-(void)setAllowsAddressBookAccess:(BOOL)arg1 ;
-(BOOL)isPassiveOnly;
-(void)setPassiveOnly:(BOOL)arg1 ;
@end

