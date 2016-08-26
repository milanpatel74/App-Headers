/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/MTContextChangeListener.h>

@protocol MTDatacenterTransferAuthActionDelegate;
@class MTProto, MTContext, NSString;

@interface MTDatacenterTransferAuthAction : NSObject <MTContextChangeListener> {

	id _authToken;
	MTProto* _sourceDatacenterMtProto;
	long long _destinationDatacenterId;
	MTProto* _destinationDatacenterMtProto;
	MTContext* _context;
	id<MTDatacenterTransferAuthActionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTDatacenterTransferAuthActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contextDatacenterAuthTokenUpdated:(id)arg1 datacenterId:(long long)arg2 authToken:(id)arg3 ;
-(void)beginTransferFromDatacenterId:(long long)arg1 ;
-(void)beginTransferWithId:(int)arg1 data:(id)arg2 ;
-(void)execute:(id)arg1 masterDatacenterId:(long long)arg2 destinationDatacenterId:(long long)arg3 authToken:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<MTDatacenterTransferAuthActionDelegate>)arg1 ;
-(void)dealloc;
-(id<MTDatacenterTransferAuthActionDelegate>)delegate;
-(void)cleanup;
-(void)complete;
-(void)fail;
@end
