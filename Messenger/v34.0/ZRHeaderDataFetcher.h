/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ZRHeaderDataFetcherDelegate;
@class FBUserSession, FBSimpleNetworkerRequest;

@interface ZRHeaderDataFetcher : NSObject {

	FBUserSession* _session;
	FBSimpleNetworkerRequest* _pendingRequest;
	id<ZRHeaderDataFetcherDelegate> _delegate;

}

@property (assign,nonatomic) id<ZRHeaderDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelHeaderRequest;
-(void)sendHeaderRequest;
-(void)dealloc;
-(void)setDelegate:(id<ZRHeaderDataFetcherDelegate>)arg1 ;
-(id<ZRHeaderDataFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
