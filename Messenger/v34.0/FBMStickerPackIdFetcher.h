/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBMStickerPackIdFetcherDelegate;
@class FBUserSession;

@interface FBMStickerPackIdFetcher : NSObject {

	FBUserSession* _session;
	unsigned long long _stickerId;
	id<FBServiceTransactionMutating> _fetchRequest;
	id<FBMStickerPackIdFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPackIdFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleDownloadError:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(id)initWithSession:(id)arg1 stickerId:(unsigned long long)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<FBMStickerPackIdFetcherDelegate>)arg1 ;
-(id<FBMStickerPackIdFetcherDelegate>)delegate;
-(void)start;
@end
