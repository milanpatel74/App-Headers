/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/XMPPRequest.h>

@interface XMPPE2ERequestRegister : XMPPRequest

@property (nonatomic,copy) id completion; 
-(void)didSuceedWithResponse:(id)arg1 ;
-(id)initWithRegistrationId:(int)arg1 identity:(ec_public_keyRef)arg2 preKeys:(id)arg3 signedPreKey:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didFailWithError:(id)arg1 ;
@end

