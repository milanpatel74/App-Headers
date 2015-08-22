/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, FBUserSession;

@interface FBFaceDetectionIndex : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _identifierToFaceCounts;
	FBUserSession* _session;

}
-(void)indexAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_indexAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_persistFacesCount:(long long)arg1 forAssetIdentifier:(id)arg2 ;
-(void)facesForAssetIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)countOfFacesForAssetIdentifier:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
