/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingCryptoEngine <NSObject>
@required
-(id)processPreKeyLookupResult:(id)arg1 senderId:(id)arg2 deviceId:(id)arg3 persistStateBlock:(/*^block*/id)arg4;
-(id)encryptMessage:(id)arg1 withState:(id)arg2 persistStateBlock:(/*^block*/id)arg3;
-(id)decryptPreKeyMessageBlob:(id)arg1 withState:(id)arg2 senderId:(id)arg3 deviceId:(id)arg4 persistStateAndPayloadBlock:(/*^block*/id)arg5;
-(id)decryptMessageBlob:(id)arg1 withState:(id)arg2 persistStateAndPayloadBlock:(/*^block*/id)arg3;
-(BOOL)isReady;

@end
