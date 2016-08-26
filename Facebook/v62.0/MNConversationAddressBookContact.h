/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, FBMUserName, MNConversationAddressBookContactPhoneNumber;

@interface MNConversationAddressBookContact : FBValueObject <NSCopying> {

	NSNumber* _systemAddressBookIdentifier;
	FBMUserName* _name;
	MNConversationAddressBookContactPhoneNumber* _phoneNumber;

}

@property (nonatomic,copy,readonly) NSNumber * systemAddressBookIdentifier;                                 //@synthesize systemAddressBookIdentifier=_systemAddressBookIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBMUserName * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNConversationAddressBookContactPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
-(NSNumber *)systemAddressBookIdentifier;
-(id)initWithSystemAddressBookIdentifier:(id)arg1 name:(id)arg2 phoneNumber:(id)arg3 ;
-(FBMUserName *)name;
-(MNConversationAddressBookContactPhoneNumber *)phoneNumber;
@end
