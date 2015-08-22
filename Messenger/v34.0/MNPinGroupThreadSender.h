/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPinGroupThreadSenderDelegate;
@class FBUserSession, NSString, UIImage, FBGraphBatchParticipatingRequest, FBGraphBatchRequest, FBSimpleNetworkerRequest, FBMThreadStore, FBMUserFetchedListeningAnnouncer;

@interface MNPinGroupThreadSender : NSObject <FBNetworkerRequestDelegate, FBClassProvidable> {

	FBUserSession* _session;
	NSString* _threadFbId;
	NSString* _name;
	UIImage* _profileImage;
	FBGraphBatchParticipatingRequest* _setNameRequest;
	FBGraphBatchParticipatingRequest* _setProfileImageRequest;
	FBGraphBatchParticipatingRequest* _pinGroupRequest;
	FBGraphBatchRequest* _batchRequest;
	FBSimpleNetworkerRequest* _request;
	FBMThreadStore* _threadStore;
	FBMUserFetchedListeningAnnouncer* _userFetchedAnnouncer;
	id<MNPinGroupThreadSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPinGroupThreadSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)networkerRequest:(id)arg1 didUpdateUploadProgress:(double)arg2 complete:(BOOL)arg3 ;
-(void)_clearRequest;
-(void)_beginThreadStoreRequest;
-(void)pinThreadWithFbId:(id)arg1 name:(id)arg2 profileImage:(id)arg3 ;
-(id)initWithSession:(id)arg1 threadStore:(id)arg2 userFetchedAnnouncer:(id)arg3 ;
-(void)_prepareBatchRequest;
-(void)_prepareNetworkRequest;
-(double)_uploadTimeRatio;
-(BOOL)_handlePinGroupResponse:(id)arg1 error:(id*)arg2 ;
-(void)_handleSetProfileImageResponse:(id)arg1 ;
-(void)_handleSetNameResponse:(id)arg1 ;
-(void)_didSucceedWithThread:(id)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MNPinGroupThreadSenderDelegate>)arg1 ;
-(id<MNPinGroupThreadSenderDelegate>)delegate;
@end
