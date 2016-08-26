/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLMetaRpc.h>

@class NSData, TLaccount_PasswordInputSettings;

@interface TLRPCaccount_updatePasswordSettings : TLMetaRpc {

	NSData* _current_password_hash;
	TLaccount_PasswordInputSettings* _n_new_settings;

}

@property (nonatomic,retain) NSData * current_password_hash;                                //@synthesize current_password_hash=_current_password_hash - In the implementation block
@property (nonatomic,retain) TLaccount_PasswordInputSettings * n_new_settings;              //@synthesize n_new_settings=_n_new_settings - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setCurrent_password_hash:(NSData *)arg1 ;
-(void)setN_new_settings:(TLaccount_PasswordInputSettings *)arg1 ;
-(NSData *)current_password_hash;
-(TLaccount_PasswordInputSettings *)n_new_settings;
-(Class)responseClass;
@end
