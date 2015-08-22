/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBLocalContactsUploader.h>

@protocol FBPerforming, FBLocalContactsUploaderDelegate;
@class FBCurrentCountryManager, FBUploadLocalContactsBatchRequest, FBUserSession, NSString;

@interface FBLocalContactsBatchUploadNetworkAdapter : NSObject <FBLocalContactsUploader> {

	FBCurrentCountryManager* _currentCountryManager;
	FBUploadLocalContactsBatchRequest* _outstandingRequest;
	id<FBPerforming> _responsePerformer;
	FBUserSession* _session;
	id<FBLocalContactsUploaderDelegate> _delegate;

}

@property (assign,nonatomic) id<FBLocalContactsUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 responsePerformer:(id)arg2 ;
-(void)cancelContactsUpload;
-(void)uploadContacts:(id)arg1 importId:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<FBLocalContactsUploaderDelegate>)arg1 ;
-(id<FBLocalContactsUploaderDelegate>)delegate;
@end
