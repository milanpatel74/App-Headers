/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface FBVSPDeltaNewPaymentRequest : NSObject <TBase, NSCoding> {

	long long __requestFbId;
	long long __requesterFbId;
	long long __requesteeFbId;
	long long __timestampMs;
	int __initialStatus;
	NSString* __currency;
	long long __amount;
	int __amountOffset;
	long long __offlineThreadingId;
	BOOL __requestFbId_isset;
	BOOL __requesterFbId_isset;
	BOOL __requesteeFbId_isset;
	BOOL __timestampMs_isset;
	BOOL __initialStatus_isset;
	BOOL __currency_isset;
	BOOL __amount_isset;
	BOOL __amountOffset_isset;
	BOOL __offlineThreadingId_isset;

}

@property (assign,setter=setRequestFbId:,getter=requestFbId,nonatomic) long long requestFbId; 
@property (assign,setter=setRequesterFbId:,getter=requesterFbId,nonatomic) long long requesterFbId; 
@property (assign,setter=setRequesteeFbId:,getter=requesteeFbId,nonatomic) long long requesteeFbId; 
@property (assign,setter=setTimestampMs:,getter=timestampMs,nonatomic) long long timestampMs; 
@property (assign,setter=setInitialStatus:,getter=initialStatus,nonatomic) int initialStatus; 
@property (setter=setCurrency:,getter=currency,nonatomic,retain) NSString * currency; 
@property (assign,setter=setAmount:,getter=amount,nonatomic) long long amount; 
@property (assign,setter=setAmountOffset:,getter=amountOffset,nonatomic) int amountOffset; 
@property (assign,setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic) long long offlineThreadingId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(long long)offlineThreadingId;
-(void)setOfflineThreadingId:(long long)arg1 ;
-(BOOL)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(void)setTimestampMs:(long long)arg1 ;
-(long long)timestampMs;
-(BOOL)timestampMsIsSet;
-(void)unsetTimestampMs;
-(void)setRequestFbId:(long long)arg1 ;
-(void)setRequesterFbId:(long long)arg1 ;
-(void)setRequesteeFbId:(long long)arg1 ;
-(void)setInitialStatus:(int)arg1 ;
-(void)setAmountOffset:(int)arg1 ;
-(id)initWithRequestFbId:(long long)arg1 requesterFbId:(long long)arg2 requesteeFbId:(long long)arg3 timestampMs:(long long)arg4 initialStatus:(int)arg5 currency:(id)arg6 amount:(long long)arg7 amountOffset:(int)arg8 offlineThreadingId:(long long)arg9 ;
-(long long)requestFbId;
-(BOOL)requestFbIdIsSet;
-(void)unsetRequestFbId;
-(long long)requesterFbId;
-(BOOL)requesterFbIdIsSet;
-(void)unsetRequesterFbId;
-(long long)requesteeFbId;
-(BOOL)requesteeFbIdIsSet;
-(void)unsetRequesteeFbId;
-(int)initialStatus;
-(BOOL)initialStatusIsSet;
-(void)unsetInitialStatus;
-(BOOL)currencyIsSet;
-(void)unsetCurrency;
-(BOOL)amountIsSet;
-(void)unsetAmount;
-(int)amountOffset;
-(BOOL)amountOffsetIsSet;
-(void)unsetAmountOffset;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(void)write:(id)arg1 ;
-(NSString *)currency;
-(void)setCurrency:(NSString *)arg1 ;
@end
