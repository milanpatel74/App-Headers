/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsIntentTarget.h>

@class NSString;

@interface MNPaymentsAddCardIntentTarget : MNPaymentsIntentTarget {

	NSString* _transferId;

}

@property (nonatomic,copy,readonly) NSString * transferId;              //@synthesize transferId=_transferId - In the implementation block
+(id)addCardIntentTargetWithTransferId:(id)arg1 ;
-(NSString *)transferId;
-(BOOL)isEqual:(id)arg1 ;
@end

