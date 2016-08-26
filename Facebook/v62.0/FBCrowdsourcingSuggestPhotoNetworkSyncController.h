/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCrowdsourcingSuggestPhotoNetworkSyncDelegate;
@class NSString, FBUserSession;

@interface FBCrowdsourcingSuggestPhotoNetworkSyncController : NSObject {

	id<FBCrowdsourcingSuggestPhotoNetworkSyncDelegate> _delegate;
	NSString* _placeID;
	FBUserSession* _session;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingSuggestPhotoNetworkSyncDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeID;                                                       //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                       //@synthesize session=_session - In the implementation block
-(void)sendUploadPhotoRequest:(id)arg1 source:(unsigned long long)arg2 fromEntryPoint:(unsigned long long)arg3 toEndpoint:(unsigned long long)arg4 ;
-(void)sendRemovePhotoRequest;
-(id)initWithPlaceID:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<FBCrowdsourcingSuggestPhotoNetworkSyncDelegate>)arg1 ;
-(id<FBCrowdsourcingSuggestPhotoNetworkSyncDelegate>)delegate;
-(NSString *)placeID;
-(FBUserSession *)session;
@end
