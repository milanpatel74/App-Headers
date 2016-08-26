/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingPreKeyFetcherDelegate;
@class MNSecureMessagingRemoteIdentityValidator, MNSecureMessagingStoredProcedureRunner, MNSecureMessagingMessagingCollectionAddress;

@interface MNSecureMessagingPreKeyFetcher : NSObject {

	MNSecureMessagingRemoteIdentityValidator* _identityValidator;
	MNSecureMessagingStoredProcedureRunner* _storedProcedureRunner;
	MNSecureMessagingMessagingCollectionAddress* _localAddress;
	id<MNSecureMessagingPreKeyFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNSecureMessagingPreKeyFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)performLookupPreKeyForUserWithFbId:(id)arg1 ;
-(BOOL)_processLookup:(id)arg1 ;
-(id)initWithStoredProcedureRunner:(id)arg1 identityValidator:(id)arg2 localAddress:(id)arg3 ;
-(void)setDelegate:(id<MNSecureMessagingPreKeyFetcherDelegate>)arg1 ;
-(id<MNSecureMessagingPreKeyFetcherDelegate>)delegate;
@end
