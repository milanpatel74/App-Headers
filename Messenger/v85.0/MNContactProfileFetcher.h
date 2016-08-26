/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol MNContactProfileFetcherDelegate;
@class NSString, FBUserSession, FBSimpleNetworkerRequest;

@interface MNContactProfileFetcher : NSObject <FBNetworkerRequestDelegate> {

	id<MNContactProfileFetcherDelegate> _delegate;
	NSString* _contactId;
	FBUserSession* _session;
	FBSimpleNetworkerRequest* _request;

}

@property (nonatomic,retain) FBUserSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * contactId;                                               //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,retain) FBSimpleNetworkerRequest * request;                               //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactProfileFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(id)initWithSession:(id)arg1 contactId:(id)arg2 ;
-(void)setDelegate:(id<MNContactProfileFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNContactProfileFetcherDelegate>)delegate;
-(FBSimpleNetworkerRequest *)request;
-(void)send;
-(void)setRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(NSString *)contactId;
-(void)setContactId:(NSString *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
