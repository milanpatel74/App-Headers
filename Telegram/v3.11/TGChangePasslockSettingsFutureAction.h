/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGFutureAction.h>

@interface TGChangePasslockSettingsFutureAction : TGFutureAction {

	int _lockSince;

}

@property (assign,nonatomic) int lockSince;              //@synthesize lockSince=_lockSince - In the implementation block
-(id)deserialize:(id)arg1 ;
-(int)lockSince;
-(id)initWithLockSince:(int)arg1 ;
-(void)setLockSince:(int)arg1 ;
-(id)serialize;
@end
