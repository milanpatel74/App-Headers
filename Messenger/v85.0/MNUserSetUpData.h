/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, FBMUser;

@interface MNUserSetUpData : NSObject {

	NSDictionary* _gatingResults;
	FBMUser* _user;
	unsigned long long _phoneNumberSearchPrivacyOption;

}

@property (nonatomic,copy,readonly) NSDictionary * gatingResults;                              //@synthesize gatingResults=_gatingResults - In the implementation block
@property (nonatomic,readonly) FBMUser * user;                                                 //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) unsigned long long phoneNumberSearchPrivacyOption;              //@synthesize phoneNumberSearchPrivacyOption=_phoneNumberSearchPrivacyOption - In the implementation block
-(unsigned long long)phoneNumberSearchPrivacyOption;
-(id)initWithUser:(id)arg1 phoneNumberSearchPrivacyOption:(unsigned long long)arg2 ;
-(NSDictionary *)gatingResults;
-(FBMUser *)user;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
